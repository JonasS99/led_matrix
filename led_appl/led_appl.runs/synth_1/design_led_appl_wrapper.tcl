# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
create_project -in_memory -part xc7a100tcsg324-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.cache/wt [current_project]
set_property parent.project_path C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_FIFO XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language VHDL [current_project]
set_property ip_repo_paths c:/Users/Keller/Desktop/Harald/git/vivado [current_project]
update_ip_catalog
set_property ip_output_repo c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_vhdl -library xil_defaultlib C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/hdl/design_led_appl_wrapper.vhd
add_files C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/design_led_appl.bd
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_0/design_led_appl_microblaze_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_0/design_led_appl_microblaze_0_0_ooc_debug.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_0/design_led_appl_microblaze_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_dlmb_v10_0/design_led_appl_dlmb_v10_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_dlmb_v10_0/design_led_appl_dlmb_v10_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_ilmb_v10_0/design_led_appl_ilmb_v10_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_ilmb_v10_0/design_led_appl_ilmb_v10_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_dlmb_bram_if_cntlr_0/design_led_appl_dlmb_bram_if_cntlr_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_ilmb_bram_if_cntlr_0/design_led_appl_ilmb_bram_if_cntlr_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_lmb_bram_0/design_led_appl_lmb_bram_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_xbar_0/design_led_appl_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_axi_intc_0/design_led_appl_microblaze_0_axi_intc_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_axi_intc_0/design_led_appl_microblaze_0_axi_intc_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_axi_intc_0/design_led_appl_microblaze_0_axi_intc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_mdm_1_0/design_led_appl_mdm_1_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_mdm_1_0/design_led_appl_mdm_1_0_ooc_trace.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_clk_wiz_1_0/design_led_appl_clk_wiz_1_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_clk_wiz_1_0/design_led_appl_clk_wiz_1_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_clk_wiz_1_0/design_led_appl_clk_wiz_1_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_rst_clk_wiz_1_100M_0/design_led_appl_rst_clk_wiz_1_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_rst_clk_wiz_1_100M_0/design_led_appl_rst_clk_wiz_1_100M_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_rst_clk_wiz_1_100M_0/design_led_appl_rst_clk_wiz_1_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_uartlite_0_0/design_led_appl_axi_uartlite_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_uartlite_0_0/design_led_appl_axi_uartlite_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_uartlite_0_0/design_led_appl_axi_uartlite_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_0_0/design_led_appl_axi_gpio_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_0_0/design_led_appl_axi_gpio_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_0_0/design_led_appl_axi_gpio_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_1_0/design_led_appl_axi_gpio_1_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_1_0/design_led_appl_axi_gpio_1_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_axi_gpio_1_0/design_led_appl_axi_gpio_1_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/design_led_appl_PmodMTDS_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_pmod_bridge_0_0/PmodMTDS_pmod_bridge_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_pmod_bridge_0_0/src/pmod_concat_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_quad_spi_0_0/PmodMTDS_axi_quad_spi_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_quad_spi_0_0/PmodMTDS_axi_quad_spi_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_quad_spi_0_0/PmodMTDS_axi_quad_spi_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_quad_spi_0_0/PmodMTDS_axi_quad_spi_0_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_gpio_0_0/PmodMTDS_axi_gpio_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_gpio_0_0/PmodMTDS_axi_gpio_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/PmodMTDS_axi_gpio_0_0/PmodMTDS_axi_gpio_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/axi_timer_0/axi_timer_0.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/src/axi_timer_0/axi_timer_0_ooc.xdc]
set_property used_in_implementation false [get_files -all C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/design_led_appl_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_microblaze_0_0/data/mb_bootloop_le.elf]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/constrs_1/new/led_appl_constraints.xdc
set_property used_in_implementation false [get_files C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/constrs_1/new/led_appl_constraints.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top design_led_appl_wrapper -part xc7a100tcsg324-1


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef design_led_appl_wrapper.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file design_led_appl_wrapper_utilization_synth.rpt -pb design_led_appl_wrapper_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
