// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Thu Nov  5 11:02:02 2020
// Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               C:/Users/Keller/Desktop/Harald/git/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_led_driver_0_0/design_led_appl_led_driver_0_0_stub.v
// Design      : design_led_appl_led_driver_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "led_driver,Vivado 2019.1" *)
module design_led_appl_led_driver_0_0(adr_out, data, ser_data_out, 
  ser_data_out_en_disp, clk, reset)
/* synthesis syn_black_box black_box_pad_pin="adr_out[8:0],data[23:0],ser_data_out,ser_data_out_en_disp,clk,reset" */;
  output [8:0]adr_out;
  input [23:0]data;
  output ser_data_out;
  output ser_data_out_en_disp;
  input clk;
  input reset;
endmodule
