# 🛡️ MyASCON128-A — RTL Core + Automated Flow

An RTL implementation of **ASCON-128** with a fully scripted flow for **simulation**, **ASIC synthesis**, and **post-synthesis verification**. Powered by **FuseSoC** + **Verilator** + **Synopsys Design Compiler**.

---

## 📦 Repository Layout (as in your screenshot)

* `rtl/` — Verilog/SystemVerilog RTL for the ASCON core (e.g., parameters in `ascon_params.sv`).
* `tb/` — C++ testbench for Verilator (`tb_auto.cpp`, `tb_utils.*`).
* `fpga/` — FPGA wrapper/integration files (e.g., CW305 support).
* `plots/` — Optional folder for figures/analysis artifacts.
* `ascon.core` — FuseSoC core description (filesets, targets, tool options).
* `fusesoc.conf` — Local FuseSoC settings (cores root, backends).
* `makefile` — The automation brain (see below 👇).
* `.gitignore`, `README.md`.

> ℹ️ Some directories (e.g., `build/`, `netlist/`, `synth/report/`) are **generated** by the Makefile and appear only after running the flow.

---

## 🚀 Quick Start

```bash
# 0) Requirements
#    - FuseSoC, Verilator
#    - (for synthesis) Synopsys Design Compiler in PATH (dc_shell)

# 1) Full RTL simulation (build + run + verify)
make simulation

# 2) ASIC synthesis with Design Compiler + copy artifacts
make synthesis

# 3) Post-synthesis gate-level simulation
make post_synth_sim

# 4) Clean everything
make clean
```

---

## 🧠 What the Makefile Actually Does

The Makefile orchestrates the entire flow around the FuseSoC core
`myascon:ascon_top:1.0.0` (declared in `ascon.core`) and a local `./build` directory.

### 🔧 Core Variables

* `BUILD_DIR = ./build` — where FuseSoC generates builds and logs.
* `CORE_NAME = myascon:ascon_top:1.0.0` — matches `ascon.core`.
* `FUSESOC = fusesoc --cores-root <this_repo>` — **pinned** to use *this* tree.

### ✅ Targets (human-friendly)

* `make simulation_build`
  Cleans previous artifacts and **builds** the Verilator simulation via FuseSoC.

* `make simulation_run`
  **Runs** the compiled simulation.

* `make simulation_verify`
  Compares Verilator’s debug output against the Python golden model:

  ```bash
  python3 test_ascon.py > output.txt
  diff output.txt ./build/.../debug_output.txt > diff_output.txt || true
  ```

  If `diff_output.txt` is empty → ✅ test passed.

* `make simulation`
  Convenience alias: **build + run + verify** (the full RTL sim loop).

* `make synthesis` *(Design Compiler)*
  Launches DC via FuseSoC, then:

  * Copies synthesized netlist(s) into `./netlist/`
  * Syncs synthesis reports into `./synth/report/new_report/`

* `make update_netlist`
  Copies `ascon_top_syn.*` from the build tree → `./netlist/`.

* `make update_synth_reports`
  Rsyncs DC reports → `./synth/report/new_report/`.

* `make post_synth_sim`
  Runs **gate-level** simulation (using the netlist) through the FuseSoC target `postsynth_simulation`.

* `make clean`
  Wipes `./build`, FuseSoC cache, and temporary files.

* `make all`
  Run **synthesis** then **post-synthesis simulation**.

### 🛑 Built-in Safety Checks

* Fails early if `fusesoc` is missing.
* Fails early if `dc_shell` is not in `PATH` when you call `make synthesis`.

---

## 🔍 Verification Notes

* Keep parameters **aligned** between:

  * `rtl/ascon_params.sv`
  * `tb/tb_auto.cpp` (e.g., `PAR`, `d`)
* Mismatches will surface during `make simulation_verify`.

---

## 🖧 FPGA (optional)

The `fpga/` folder holds the integration/wrapper files (e.g., CW305).
FPGA build targets can be added through FuseSoC (see `ascon.core`), but they’re **not** wired into the Makefile by default.

---

## 🧰 Troubleshooting

* “`fusesoc` not found” → Activate the environment providing FuseSoC.
* “`dc_shell` not found” → Source your Synopsys DC setup before `make synthesis`.
* Differences in `diff_output.txt` → Check parameter consistency and recent RTL/TB edits.

---

## 📜 Credits

* Flow management: **FuseSoC**
* Simulation: **Verilator** (+ C++ testbench)
* ASIC synthesis: **Synopsys Design Compiler**
* Cipher: **ASCON-128** (lightweight AEAD)

---

Happy hacking! ✨
