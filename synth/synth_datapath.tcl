# ===============================
# Minimal synthesis for ASCON_DATAPATH (no FuseSoC)
# Reads only the datapath + required RTLs
# ===============================

# --- Paths (aggiorna se la repo cambia layout) ---
set ROOT_DIR      [file normalize ".."]
set RTL_DIR       [file normalize "$ROOT_DIR/rtl"]
set DP_FILE       [file normalize "$ROOT_DIR/datapath.sv"]    ;# <-- il tuo ascon_datapath.sv

# --- Library setup ---
set target_library [list \
    /software/dk/tsmc65/digital/Front_End/timing_power_noise/NLDM/tcbn65lplvt_220a/tcbn65lplvttc.db \
]
set link_library "* $target_library"

set REPORT_DIR report/report_new
sh mkdir -p $REPORT_DIR
sh mkdir -p netlist

# --- SV on ---
set_app_var hdlin_enable_sv true

# --- (Opzionale) abilita macro DEBUG per esporre segnali di debug ---
# set_app_var hdlin_define_macros {DEBUG}   ;# <--- [OPZIONE] decommenta se vuoi DEBUG

# --- Analyze only what serves the datapath ---
#   Lista fornita:
#     - rtl/ascon_params.sv
#     - rtl/circular_shift_register.sv
#     - rtl/lfsr.sv
#     - rtl/shift_register.sv
#     - rtl/state_register.sv
#     - rtl/sipo_debug.sv
#     - rtl/register.sv
#     - rtl/ascon_sbox_d2.sv
#     - rtl/shareCreator.sv
#     - ../datapath.sv   (nuovo modulo top)
set file_list [list \
    "$RTL_DIR/ascon_params.sv" \
    "$RTL_DIR/circular_shift_register.sv" \
    "$RTL_DIR/lfsr.sv" \
    "$RTL_DIR/shift_register.sv" \
    "$RTL_DIR/state_register.sv" \
    "$RTL_DIR/sipo_debug.sv" \
    "$RTL_DIR/register.sv" \
    "$RTL_DIR/ascon_sbox_d2.sv" \
    "$RTL_DIR/shareCreator.sv" \
    "$DP_FILE" \
]

puts "====> Analyzing files ..."
analyze -format sverilog $file_list

# --- Elaborate & link ---
puts "====> Elaborating 'ascon_datapath' ..."
elaborate ascon_datapath -lib WORK
link
current_design ascon_datapath
uniquify

# --- Basic checks ---
puts "====> check_design ..."
check_design > ${REPORT_DIR}/check.rpt

# --- Clocks/constraints ---
puts "====> create_clock ..."
# Cambia il periodo se necessario
create_clock -name clk -period 1.00 [get_ports clk]

# --- Compile ---
puts "====> compile_ultra ..."
compile_ultra -no_autoungroup -no_seq_output_inversion -no_boundary_optimization

# --- Reports ---
puts "====> Reports ..."
report_qor                         > ${REPORT_DIR}/qor.rpt
report_area                        > ${REPORT_DIR}/area.rpt
report_area -hierarchy             > ${REPORT_DIR}/area_hier.rpt
report_power                       > ${REPORT_DIR}/power.rpt
report_timing -delay max           > ${REPORT_DIR}/timing.rpt
report_timing -delay max -max_paths 50 -path full -nets -transition_time \
                                   > ${REPORT_DIR}/timing_max50.rpt

# --- Netlist out ---
set bus_naming_style "%s"
set verilogout_no_tri true
change_names -rules verilog -hierarchy

puts "====> write netlist/SDF/SDC ..."
write -format verilog -hier -output netlist/ascon_datapath_syn.v
write_sdf netlist/ascon_datapath_syn.sdf
write_sdc netlist/ascon_datapath_syn.sdc

puts "====> DONE."
quit
