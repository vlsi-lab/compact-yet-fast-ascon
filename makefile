#############################
# ----- CONFIGURATION ----- #
#############################

MAKE                = make
BUILD_DIR          ?= $(realpath .)/build
CORE_NAME          ?= myascon:ascon_top:1.0.0

# Absolute path of the repo (needed for main .core file)
mkfile_path := $(shell dirname "$(realpath $(firstword $(MAKEFILE_LIST)))")
$(info $$ You are executing from: $(mkfile_path))

# Fusesoc sempre vincolato alla directory corrente
FUSESOC := fusesoc --cores-root $(mkfile_path)

#######################
# ----- TARGETS ----- #
#######################

.PHONY: print_targets
print_targets:
	@echo ""
	@echo "🎯 Targets available:"
	@echo "  make simulation_build        → build simulation"
	@echo "  make simulation_run          → run simulation"
	@echo "  make simulation_verify       → verify results"
	@echo "  make simulation              → build + run + verify"
	@echo "  make synthesis               → synthesis + update netlist + reports"
	@echo "  make update_netlist          → copy netlist"
	@echo "  make update_synth_reports    → copy reports"
	@echo "  make post_synth_sim          → simulation post-synthesis"
	@echo "  make all                     → complete flow"
	@echo "  make clean                   → clean all"
	@echo ""

# Target 1 - simulation
.PHONY: simulation_build
simulation_build: .check-fusesoc
	@echo "👉 Clean build e cache..."
	rm -rf $(BUILD_DIR)/myascon_ascon_top_1.0.0_0
	rm -rf ~/.cache/fusesoc
	@echo "👉 Start build for simulation..."
	$(FUSESOC) run --target=simulation --setup $(CORE_NAME)
	$(FUSESOC) run --target=simulation --build $(CORE_NAME)
	@echo "✅ Build simulation completed."

.PHONY: simulation_run
simulation_run: .check-fusesoc
	@echo "👉 Starting simulation..."
	$(FUSESOC) run --target=simulation --run $(CORE_NAME)
	@echo "✅ simulation completed."

.PHONY: simulation_verify
simulation_verify:
	@echo "👉 Verify against golden model..."
	python3 test_ascon.py > output.txt
	@echo "👉 Comparing results:"
	@diff output.txt $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/simulation-verilator/debug_output.txt > diff_output.txt || true
	@if [ -s diff_output.txt ]; then \
		echo "❌ Found differnces! Check ./diff_output.txt"; \
		echo "Have you changed the parameters in the ./tb/tb_auto.cpp file? -> PAR and d must be the same as in the ./rtl/ascon_params.sv file. \
	else \
		echo "✅ test successfull!"; \
	fi

.PHONY: simulation
simulation: simulation_build simulation_run simulation_verify
	@echo "🎉 simulation completed and terminated successfully!"

# Target 2 - synthesis con Design Compiler
.PHONY: synthesis
synthesis: .check-dc
	@echo "Starting synthesis with Design Compiler..."
	$(FUSESOC) run --target=synthesis $(CORE_NAME)
	@echo "✅ synthesis completed."
	@$(MAKE) update_netlist
	@$(MAKE) update_synth_reports

.PHONY: update_netlist
update_netlist:
	@echo "Updating netlist/ascon_top_syn.v..."
	mkdir -p netlist
	cp $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/netlist/ascon_top_syn.* netlist/
	@echo "✅ Netlist aggiornata."

.PHONY: update_synth_reports
update_synth_reports:
	@echo "Updating synthesis reports..."
	mkdir -p synth/report/new_report
	rsync -av --delete $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/report/ synth/report/new_report/
	@echo "✅ Report aggiornati."

# Target 3 - simulation post-synthesis
.PHONY: post_synth_sim
post_synth_sim: .check-fusesoc update_netlist
	@echo "Avvio simulation post-synthesis..."
	$(FUSESOC) run --target=postsynth_simulation $(CORE_NAME)
	@echo "✅ Post-synthesis sim completed."

# Target 4 - Clean
.PHONY: clean
clean:
	@echo "👉 Cleaning..."
	rm -rf $(BUILD_DIR)
	rm -rf ~/.cache/fusesoc
	rm -f output.txt
	@echo "✅ Clean completed."

.PHONY: all
all: synthesis post_synth_sim
	@echo "All flow completed successfully!"

# Utilities
.PHONY: .check-fusesoc
.check-fusesoc:
	@if ! command -v fusesoc >/dev/null 2>&1; then \
		echo "### ERROR: 'fusesoc' not found! Are you working in correct python environmnet ?"; \
		exit 1; \
	fi

.PHONY: .check-dc
.check-dc:
	@if ! command -v dc_shell >/dev/null 2>&1; then \
		echo "### ERROR: 'dc_shell' not found! Check if it's in the PATH."; \
		exit 1; \
	fi
