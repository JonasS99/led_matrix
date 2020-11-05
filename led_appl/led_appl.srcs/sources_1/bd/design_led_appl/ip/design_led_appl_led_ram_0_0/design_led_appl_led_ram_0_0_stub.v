// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Thu Nov  5 11:02:00 2020
// Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_led_ram_0_0/design_led_appl_led_ram_0_0_stub.v
// Design      : design_led_appl_led_ram_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "led_ram,Vivado 2019.1" *)
module design_led_appl_led_ram_0_0(data_in_mb, data_valid_mb, clk, reset, adr_in_mb, 
  adr_in_led, data_out_led)
/* synthesis syn_black_box black_box_pad_pin="data_in_mb[23:0],data_valid_mb,clk,reset,adr_in_mb[8:0],adr_in_led[8:0],data_out_led[23:0]" */;
  input [23:0]data_in_mb;
  input data_valid_mb;
  input clk;
  input reset;
  input [8:0]adr_in_mb;
  input [8:0]adr_in_led;
  output [23:0]data_out_led;
endmodule
