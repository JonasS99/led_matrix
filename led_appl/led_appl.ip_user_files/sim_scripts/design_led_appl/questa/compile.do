vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/xpm
vlib questa_lib/msim/microblaze_v11_0_1
vlib questa_lib/msim/lmb_v10_v3_0_9
vlib questa_lib/msim/lmb_bram_if_cntlr_v4_0_16
vlib questa_lib/msim/axi_lite_ipif_v3_0_4
vlib questa_lib/msim/axi_intc_v4_1_13
vlib questa_lib/msim/xlconcat_v2_1_3
vlib questa_lib/msim/mdm_v3_2_16
vlib questa_lib/msim/lib_cdc_v1_0_2
vlib questa_lib/msim/proc_sys_reset_v5_0_13
vlib questa_lib/msim/lib_pkg_v1_0_2
vlib questa_lib/msim/lib_srl_fifo_v1_0_2
vlib questa_lib/msim/axi_uartlite_v2_0_23
vlib questa_lib/msim/interrupt_control_v3_1_4
vlib questa_lib/msim/axi_gpio_v2_0_21

vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap xpm questa_lib/msim/xpm
vmap microblaze_v11_0_1 questa_lib/msim/microblaze_v11_0_1
vmap lmb_v10_v3_0_9 questa_lib/msim/lmb_v10_v3_0_9
vmap lmb_bram_if_cntlr_v4_0_16 questa_lib/msim/lmb_bram_if_cntlr_v4_0_16
vmap axi_lite_ipif_v3_0_4 questa_lib/msim/axi_lite_ipif_v3_0_4
vmap axi_intc_v4_1_13 questa_lib/msim/axi_intc_v4_1_13
vmap xlconcat_v2_1_3 questa_lib/msim/xlconcat_v2_1_3
vmap mdm_v3_2_16 questa_lib/msim/mdm_v3_2_16
vmap lib_cdc_v1_0_2 questa_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 questa_lib/msim/proc_sys_reset_v5_0_13
vmap lib_pkg_v1_0_2 questa_lib/msim/lib_pkg_v1_0_2
vmap lib_srl_fifo_v1_0_2 questa_lib/msim/lib_srl_fifo_v1_0_2
vmap axi_uartlite_v2_0_23 questa_lib/msim/axi_uartlite_v2_0_23
vmap interrupt_control_v3_1_4 questa_lib/msim/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_21 questa_lib/msim/axi_gpio_v2_0_21

vlog -work xil_defaultlib -64 -sv "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/ec67/hdl" "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/c923" \
"C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93 \
"C:/Xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work microblaze_v11_0_1 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/f8c3/hdl/microblaze_v11_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_0/sim/design_led_appl_microblaze_0_0.vhd" \

vcom -work lmb_v10_v3_0_9 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/78eb/hdl/lmb_v10_v3_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_dlmb_v10_0/sim/design_led_appl_dlmb_v10_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_ilmb_v10_0/sim/design_led_appl_ilmb_v10_0.vhd" \

vcom -work lmb_bram_if_cntlr_v4_0_16 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/6335/hdl/lmb_bram_if_cntlr_v4_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_dlmb_bram_if_cntlr_0/sim/design_led_appl_dlmb_bram_if_cntlr_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_ilmb_bram_if_cntlr_0/sim/design_led_appl_ilmb_bram_if_cntlr_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_lmb_bram_0/design_led_appl_lmb_bram_0_sim_netlist.vhdl" \
"../../../bd/design_led_appl/ip/design_led_appl_xbar_0/design_led_appl_xbar_0_sim_netlist.vhdl" \

vcom -work axi_lite_ipif_v3_0_4 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work axi_intc_v4_1_13 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/c0fe/hdl/axi_intc_v4_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_axi_intc_0/sim/design_led_appl_microblaze_0_axi_intc_0.vhd" \

vlog -work xlconcat_v2_1_3 -64 "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/ec67/hdl" "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/c923" \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/442e/hdl/xlconcat_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib -64 "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/ec67/hdl" "+incdir+../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/c923" \
"../../../bd/design_led_appl/ip/design_led_appl_microblaze_0_xlconcat_0/sim/design_led_appl_microblaze_0_xlconcat_0.v" \

vcom -work mdm_v3_2_16 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/550e/hdl/mdm_v3_2_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_mdm_1_0/sim/design_led_appl_mdm_1_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_clk_wiz_1_0/design_led_appl_clk_wiz_1_0_sim_netlist.vhdl" \

vcom -work lib_cdc_v1_0_2 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_rst_clk_wiz_1_100M_0/sim/design_led_appl_rst_clk_wiz_1_100M_0.vhd" \

vcom -work lib_pkg_v1_0_2 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_uartlite_v2_0_23 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/0315/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_axi_uartlite_0_0/sim/design_led_appl_axi_uartlite_0_0.vhd" \

vcom -work interrupt_control_v3_1_4 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_21 -64 -93 \
"../../../../led_appl.srcs/sources_1/bd/design_led_appl/ipshared/9c6e/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_led_appl/ip/design_led_appl_axi_gpio_0_0/sim/design_led_appl_axi_gpio_0_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_axi_gpio_1_0/sim/design_led_appl_axi_gpio_1_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_led_driver_0_0/sim/design_led_appl_led_driver_0_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_led_ram_0_0/sim/design_led_appl_led_ram_0_0.vhd" \
"../../../bd/design_led_appl/ip/design_led_appl_PmodMTDS_0_0/design_led_appl_PmodMTDS_0_0_sim_netlist.vhdl" \
"../../../bd/design_led_appl/sim/design_led_appl.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

