-makelib xcelium_lib/xil_defaultlib -sv \
  "C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/microblaze_v11_0_1 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/f8c3/hdl/microblaze_v11_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_0/sim/design_led_appl_microblaze_0_0.vhd" \
-endlib
-makelib xcelium_lib/lmb_v10_v3_0_9 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/78eb/hdl/lmb_v10_v3_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_dlmb_v10_0/sim/design_led_appl_dlmb_v10_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_ilmb_v10_0/sim/design_led_appl_ilmb_v10_0.vhd" \
-endlib
-makelib xcelium_lib/lmb_bram_if_cntlr_v4_0_16 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/6335/hdl/lmb_bram_if_cntlr_v4_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_dlmb_bram_if_cntlr_0/sim/design_led_appl_dlmb_bram_if_cntlr_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_ilmb_bram_if_cntlr_0/sim/design_led_appl_ilmb_bram_if_cntlr_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_lmb_bram_0/design_led_appl_lmb_bram_0_sim_netlist.vhdl" \
  "../../../bd/design_led_appl/ip/design_led_appl_xbar_0/design_led_appl_xbar_0_sim_netlist.vhdl" \
-endlib
-makelib xcelium_lib/axi_lite_ipif_v3_0_4 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/axi_intc_v4_1_13 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/c0fe/hdl/axi_intc_v4_1_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_axi_intc_0/sim/design_led_appl_microblaze_0_axi_intc_0.vhd" \
-endlib
-makelib xcelium_lib/xlconcat_v2_1_3 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/442e/hdl/xlconcat_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_xlconcat_0/sim/design_led_appl_microblaze_0_xlconcat_0.v" \
-endlib
-makelib xcelium_lib/mdm_v3_2_16 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/550e/hdl/mdm_v3_2_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_mdm_1_0/sim/design_led_appl_mdm_1_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_clk_wiz_1_0/design_led_appl_clk_wiz_1_0_sim_netlist.vhdl" \
-endlib
-makelib xcelium_lib/lib_cdc_v1_0_2 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/proc_sys_reset_v5_0_13 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_rst_clk_wiz_1_100M_0/sim/design_led_appl_rst_clk_wiz_1_100M_0.vhd" \
-endlib
-makelib xcelium_lib/lib_pkg_v1_0_2 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/lib_srl_fifo_v1_0_2 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/axi_uartlite_v2_0_23 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/0315/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_axi_uartlite_0_0/sim/design_led_appl_axi_uartlite_0_0.vhd" \
-endlib
-makelib xcelium_lib/interrupt_control_v3_1_4 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/axi_gpio_v2_0_21 \
  "../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/9c6e/hdl/axi_gpio_v2_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/design_led_appl/ip/design_led_appl_axi_gpio_0_0/sim/design_led_appl_axi_gpio_0_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_axi_gpio_1_0/sim/design_led_appl_axi_gpio_1_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_led_driver_0_0/sim/design_led_appl_led_driver_0_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_led_ram_0_0/sim/design_led_appl_led_ram_0_0.vhd" \
  "../../../bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/design_led_appl_PmodMTDS_0_0_sim_netlist.vhdl" \
  "../../../bd/design_led_appl/sim/design_led_appl.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

