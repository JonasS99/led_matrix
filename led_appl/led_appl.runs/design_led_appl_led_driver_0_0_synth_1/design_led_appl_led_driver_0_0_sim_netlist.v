// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Thu Oct 29 09:16:51 2020
// Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_led_appl_led_driver_0_0_sim_netlist.v
// Design      : design_led_appl_led_driver_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_led_appl_led_driver_0_0,led_driver,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* ip_definition_source = "module_ref" *) 
(* x_core_info = "led_driver,Vivado 2019.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (adr_out,
    data,
    ser_data_out,
    ser_data_out_en_disp,
    clk,
    reset);
  output [8:0]adr_out;
  input [23:0]data;
  output ser_data_out;
  output ser_data_out_en_disp;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk, ASSOCIATED_RESET reset, FREQ_HZ 100000000, PHASE 0.0, CLK_DOMAIN /clk_wiz_1_clk_out1, INSERT_VIP 0" *) input clk;
  (* x_interface_info = "xilinx.com:signal:reset:1.0 reset RST" *) (* x_interface_parameter = "XIL_INTERFACENAME reset, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input reset;

  wire [8:0]adr_out;
  wire clk;
  wire [23:0]data;
  wire reset;
  wire ser_data_out;
  wire ser_data_out_en_disp;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver U0
       (.Q({adr_out[8:6],adr_out[0]}),
        .clk(clk),
        .\cnt_400_reg[1]_0 (adr_out[1]),
        .\cnt_400_reg[2]_0 (adr_out[2]),
        .\cnt_400_reg[3]_0 (adr_out[3]),
        .\cnt_400_reg[4]_0 (adr_out[4]),
        .\cnt_400_reg[5]_0 (adr_out[5]),
        .data(data),
        .reset(reset),
        .ser_data_out(ser_data_out),
        .ser_data_out_en_reg_0(ser_data_out_en_disp));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver
   (Q,
    \cnt_400_reg[2]_0 ,
    \cnt_400_reg[1]_0 ,
    \cnt_400_reg[3]_0 ,
    \cnt_400_reg[4]_0 ,
    \cnt_400_reg[5]_0 ,
    ser_data_out_en_reg_0,
    ser_data_out,
    reset,
    clk,
    data);
  output [3:0]Q;
  output \cnt_400_reg[2]_0 ;
  output \cnt_400_reg[1]_0 ;
  output \cnt_400_reg[3]_0 ;
  output \cnt_400_reg[4]_0 ;
  output \cnt_400_reg[5]_0 ;
  output ser_data_out_en_reg_0;
  output ser_data_out;
  input reset;
  input clk;
  input [23:0]data;

  wire [3:0]Q;
  wire clk;
  wire \cnt_24[0]_i_1_n_0 ;
  wire \cnt_24[1]_i_1_n_0 ;
  wire \cnt_24[2]_i_1_n_0 ;
  wire \cnt_24[3]_i_1_n_0 ;
  wire \cnt_24[4]_i_1_n_0 ;
  wire \cnt_24[4]_i_2_n_0 ;
  wire \cnt_24[4]_i_3_n_0 ;
  wire \cnt_24_reg_n_0_[0] ;
  wire \cnt_24_reg_n_0_[1] ;
  wire \cnt_24_reg_n_0_[2] ;
  wire \cnt_24_reg_n_0_[3] ;
  wire \cnt_24_reg_n_0_[4] ;
  wire \cnt_400[0]_i_1_n_0 ;
  wire \cnt_400[1]_i_1_n_0 ;
  wire \cnt_400[2]_i_1_n_0 ;
  wire \cnt_400[3]_i_1_n_0 ;
  wire \cnt_400[4]_i_1_n_0 ;
  wire \cnt_400[5]_i_1_n_0 ;
  wire \cnt_400[5]_i_2_n_0 ;
  wire \cnt_400[6]_i_1_n_0 ;
  wire \cnt_400[7]_i_1_n_0 ;
  wire \cnt_400[7]_i_2_n_0 ;
  wire \cnt_400[8]_i_1_n_0 ;
  wire \cnt_400[8]_i_2_n_0 ;
  wire \cnt_400[8]_i_3_n_0 ;
  wire \cnt_400[8]_i_4_n_0 ;
  wire \cnt_400[8]_i_5_n_0 ;
  wire \cnt_400[8]_i_6_n_0 ;
  wire \cnt_400[8]_i_7_n_0 ;
  wire \cnt_400_reg[1]_0 ;
  wire \cnt_400_reg[2]_0 ;
  wire \cnt_400_reg[3]_0 ;
  wire \cnt_400_reg[4]_0 ;
  wire \cnt_400_reg[5]_0 ;
  wire \cnt_bit_time[5]_i_1_n_0 ;
  wire \cnt_bit_time[5]_i_2_n_0 ;
  wire \cnt_bit_time[6]_i_1_n_0 ;
  wire \cnt_bit_time[7]_i_2_n_0 ;
  wire [7:0]cnt_bit_time_reg;
  wire \cnt_reset[0]_i_2_n_0 ;
  wire \cnt_reset[0]_i_3_n_0 ;
  wire \cnt_reset[4]_i_1_n_0 ;
  wire \cnt_reset[7]_i_2_n_0 ;
  wire \cnt_reset[7]_i_3_n_0 ;
  wire \cnt_reset[8]_i_1_n_0 ;
  wire \cnt_reset[8]_i_3_n_0 ;
  wire \cnt_reset[8]_i_4_n_0 ;
  wire \cnt_reset[8]_i_5_n_0 ;
  wire \cnt_reset_reg_n_0_[0] ;
  wire \cnt_reset_reg_n_0_[1] ;
  wire \cnt_reset_reg_n_0_[2] ;
  wire \cnt_reset_reg_n_0_[3] ;
  wire \cnt_reset_reg_n_0_[4] ;
  wire \cnt_reset_reg_n_0_[5] ;
  wire \cnt_reset_reg_n_0_[6] ;
  wire \cnt_reset_reg_n_0_[7] ;
  wire \cnt_reset_reg_n_0_[8] ;
  wire [23:0]data;
  wire [7:0]p_0_in;
  wire [8:0]p_1_in;
  wire reset;
  wire ser_data_out;
  wire ser_data_out_en_i_1_n_0;
  wire ser_data_out_en_i_2_n_0;
  wire ser_data_out_en_reg_0;
  wire ser_data_out_i_10_n_0;
  wire ser_data_out_i_11_n_0;
  wire ser_data_out_i_12_n_0;
  wire ser_data_out_i_13_n_0;
  wire ser_data_out_i_14_n_0;
  wire ser_data_out_i_15_n_0;
  wire ser_data_out_i_16_n_0;
  wire ser_data_out_i_1_n_0;
  wire ser_data_out_i_2_n_0;
  wire ser_data_out_i_3_n_0;
  wire ser_data_out_i_4_n_0;
  wire ser_data_out_i_5_n_0;
  wire ser_data_out_i_6_n_0;
  wire ser_data_out_reg_i_7_n_0;
  wire ser_data_out_reg_i_8_n_0;
  wire ser_data_out_reg_i_9_n_0;

  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \cnt_24[0]_i_1 
       (.I0(\cnt_24_reg_n_0_[0] ),
        .O(\cnt_24[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \cnt_24[1]_i_1 
       (.I0(\cnt_24_reg_n_0_[1] ),
        .I1(\cnt_24_reg_n_0_[0] ),
        .O(\cnt_24[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \cnt_24[2]_i_1 
       (.I0(\cnt_24_reg_n_0_[2] ),
        .I1(\cnt_24_reg_n_0_[0] ),
        .I2(\cnt_24_reg_n_0_[1] ),
        .O(\cnt_24[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h3FFF4000)) 
    \cnt_24[3]_i_1 
       (.I0(\cnt_24_reg_n_0_[4] ),
        .I1(\cnt_24_reg_n_0_[0] ),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(\cnt_24_reg_n_0_[2] ),
        .I4(\cnt_24_reg_n_0_[3] ),
        .O(\cnt_24[3]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'h00000020)) 
    \cnt_24[4]_i_1 
       (.I0(\cnt_24[4]_i_3_n_0 ),
        .I1(cnt_bit_time_reg[7]),
        .I2(cnt_bit_time_reg[6]),
        .I3(cnt_bit_time_reg[0]),
        .I4(cnt_bit_time_reg[1]),
        .O(\cnt_24[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h7F7F8000)) 
    \cnt_24[4]_i_2 
       (.I0(\cnt_24_reg_n_0_[0] ),
        .I1(\cnt_24_reg_n_0_[1] ),
        .I2(\cnt_24_reg_n_0_[2] ),
        .I3(\cnt_24_reg_n_0_[3] ),
        .I4(\cnt_24_reg_n_0_[4] ),
        .O(\cnt_24[4]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'h8000)) 
    \cnt_24[4]_i_3 
       (.I0(cnt_bit_time_reg[2]),
        .I1(cnt_bit_time_reg[3]),
        .I2(cnt_bit_time_reg[4]),
        .I3(cnt_bit_time_reg[5]),
        .O(\cnt_24[4]_i_3_n_0 ));
  FDRE \cnt_24_reg[0] 
       (.C(clk),
        .CE(\cnt_24[4]_i_1_n_0 ),
        .D(\cnt_24[0]_i_1_n_0 ),
        .Q(\cnt_24_reg_n_0_[0] ),
        .R(reset));
  FDRE \cnt_24_reg[1] 
       (.C(clk),
        .CE(\cnt_24[4]_i_1_n_0 ),
        .D(\cnt_24[1]_i_1_n_0 ),
        .Q(\cnt_24_reg_n_0_[1] ),
        .R(reset));
  FDRE \cnt_24_reg[2] 
       (.C(clk),
        .CE(\cnt_24[4]_i_1_n_0 ),
        .D(\cnt_24[2]_i_1_n_0 ),
        .Q(\cnt_24_reg_n_0_[2] ),
        .R(reset));
  FDRE \cnt_24_reg[3] 
       (.C(clk),
        .CE(\cnt_24[4]_i_1_n_0 ),
        .D(\cnt_24[3]_i_1_n_0 ),
        .Q(\cnt_24_reg_n_0_[3] ),
        .R(reset));
  FDRE \cnt_24_reg[4] 
       (.C(clk),
        .CE(\cnt_24[4]_i_1_n_0 ),
        .D(\cnt_24[4]_i_2_n_0 ),
        .Q(\cnt_24_reg_n_0_[4] ),
        .R(reset));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \cnt_400[0]_i_1 
       (.I0(\cnt_400[8]_i_5_n_0 ),
        .I1(Q[0]),
        .O(\cnt_400[0]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \cnt_400[1]_i_1 
       (.I0(Q[0]),
        .I1(\cnt_400_reg[1]_0 ),
        .O(\cnt_400[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \cnt_400[2]_i_1 
       (.I0(\cnt_400_reg[2]_0 ),
        .I1(\cnt_400_reg[1]_0 ),
        .I2(Q[0]),
        .O(\cnt_400[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \cnt_400[3]_i_1 
       (.I0(\cnt_400_reg[3]_0 ),
        .I1(\cnt_400_reg[2]_0 ),
        .I2(Q[0]),
        .I3(\cnt_400_reg[1]_0 ),
        .O(\cnt_400[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \cnt_400[4]_i_1 
       (.I0(\cnt_400_reg[4]_0 ),
        .I1(\cnt_400_reg[3]_0 ),
        .I2(\cnt_400_reg[1]_0 ),
        .I3(Q[0]),
        .I4(\cnt_400_reg[2]_0 ),
        .O(\cnt_400[4]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hF8)) 
    \cnt_400[5]_i_1 
       (.I0(\cnt_reset[8]_i_1_n_0 ),
        .I1(\cnt_400[8]_i_4_n_0 ),
        .I2(reset),
        .O(\cnt_400[5]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \cnt_400[5]_i_2 
       (.I0(\cnt_400_reg[5]_0 ),
        .I1(\cnt_400_reg[4]_0 ),
        .I2(\cnt_400_reg[2]_0 ),
        .I3(Q[0]),
        .I4(\cnt_400_reg[1]_0 ),
        .I5(\cnt_400_reg[3]_0 ),
        .O(\cnt_400[5]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hA2AA0800)) 
    \cnt_400[6]_i_1 
       (.I0(\cnt_400[8]_i_5_n_0 ),
        .I1(\cnt_400_reg[5]_0 ),
        .I2(\cnt_400[7]_i_2_n_0 ),
        .I3(\cnt_400_reg[4]_0 ),
        .I4(Q[1]),
        .O(\cnt_400[6]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hAA2AAAAA00800000)) 
    \cnt_400[7]_i_1 
       (.I0(\cnt_400[8]_i_5_n_0 ),
        .I1(Q[1]),
        .I2(\cnt_400_reg[4]_0 ),
        .I3(\cnt_400[7]_i_2_n_0 ),
        .I4(\cnt_400_reg[5]_0 ),
        .I5(Q[2]),
        .O(\cnt_400[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    \cnt_400[7]_i_2 
       (.I0(\cnt_400_reg[2]_0 ),
        .I1(Q[0]),
        .I2(\cnt_400_reg[1]_0 ),
        .I3(\cnt_400_reg[3]_0 ),
        .O(\cnt_400[7]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFBFFFAAAAAAAA)) 
    \cnt_400[8]_i_1 
       (.I0(reset),
        .I1(\cnt_400[8]_i_3_n_0 ),
        .I2(Q[2]),
        .I3(Q[3]),
        .I4(\cnt_400[8]_i_4_n_0 ),
        .I5(\cnt_reset[8]_i_1_n_0 ),
        .O(\cnt_400[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'h82)) 
    \cnt_400[8]_i_2 
       (.I0(\cnt_400[8]_i_5_n_0 ),
        .I1(\cnt_400[8]_i_6_n_0 ),
        .I2(Q[3]),
        .O(\cnt_400[8]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'hFFFD)) 
    \cnt_400[8]_i_3 
       (.I0(\cnt_400[7]_i_2_n_0 ),
        .I1(\cnt_400_reg[5]_0 ),
        .I2(Q[1]),
        .I3(\cnt_400_reg[4]_0 ),
        .O(\cnt_400[8]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h1000)) 
    \cnt_400[8]_i_4 
       (.I0(\cnt_reset[0]_i_3_n_0 ),
        .I1(\cnt_400[8]_i_7_n_0 ),
        .I2(\cnt_reset_reg_n_0_[8] ),
        .I3(\cnt_reset_reg_n_0_[7] ),
        .O(\cnt_400[8]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'h55555515)) 
    \cnt_400[8]_i_5 
       (.I0(reset),
        .I1(\cnt_reset_reg_n_0_[7] ),
        .I2(\cnt_reset_reg_n_0_[8] ),
        .I3(\cnt_400[8]_i_7_n_0 ),
        .I4(\cnt_reset[0]_i_3_n_0 ),
        .O(\cnt_400[8]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'hF7FFFFFF)) 
    \cnt_400[8]_i_6 
       (.I0(Q[1]),
        .I1(\cnt_400_reg[4]_0 ),
        .I2(\cnt_400[7]_i_2_n_0 ),
        .I3(\cnt_400_reg[5]_0 ),
        .I4(Q[2]),
        .O(\cnt_400[8]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF0707FF07)) 
    \cnt_400[8]_i_7 
       (.I0(\cnt_reset_reg_n_0_[1] ),
        .I1(\cnt_reset_reg_n_0_[6] ),
        .I2(\cnt_reset_reg_n_0_[4] ),
        .I3(\cnt_reset_reg_n_0_[0] ),
        .I4(\cnt_reset_reg_n_0_[2] ),
        .I5(\cnt_reset_reg_n_0_[5] ),
        .O(\cnt_400[8]_i_7_n_0 ));
  FDRE \cnt_400_reg[0] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[0]_i_1_n_0 ),
        .Q(Q[0]),
        .R(1'b0));
  FDRE \cnt_400_reg[1] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[1]_i_1_n_0 ),
        .Q(\cnt_400_reg[1]_0 ),
        .R(\cnt_400[5]_i_1_n_0 ));
  FDRE \cnt_400_reg[2] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[2]_i_1_n_0 ),
        .Q(\cnt_400_reg[2]_0 ),
        .R(\cnt_400[5]_i_1_n_0 ));
  FDRE \cnt_400_reg[3] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[3]_i_1_n_0 ),
        .Q(\cnt_400_reg[3]_0 ),
        .R(\cnt_400[5]_i_1_n_0 ));
  FDRE \cnt_400_reg[4] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[4]_i_1_n_0 ),
        .Q(\cnt_400_reg[4]_0 ),
        .R(\cnt_400[5]_i_1_n_0 ));
  FDRE \cnt_400_reg[5] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[5]_i_2_n_0 ),
        .Q(\cnt_400_reg[5]_0 ),
        .R(\cnt_400[5]_i_1_n_0 ));
  FDRE \cnt_400_reg[6] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[6]_i_1_n_0 ),
        .Q(Q[1]),
        .R(1'b0));
  FDRE \cnt_400_reg[7] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[7]_i_1_n_0 ),
        .Q(Q[2]),
        .R(1'b0));
  FDRE \cnt_400_reg[8] 
       (.C(clk),
        .CE(\cnt_400[8]_i_1_n_0 ),
        .D(\cnt_400[8]_i_2_n_0 ),
        .Q(Q[3]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h1)) 
    \cnt_bit_time[0]_i_1 
       (.I0(cnt_bit_time_reg[0]),
        .I1(\cnt_24[4]_i_1_n_0 ),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \cnt_bit_time[1]_i_1 
       (.I0(cnt_bit_time_reg[0]),
        .I1(cnt_bit_time_reg[1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h0078)) 
    \cnt_bit_time[2]_i_1 
       (.I0(cnt_bit_time_reg[0]),
        .I1(cnt_bit_time_reg[1]),
        .I2(cnt_bit_time_reg[2]),
        .I3(\cnt_24[4]_i_1_n_0 ),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h00007F80)) 
    \cnt_bit_time[3]_i_1 
       (.I0(cnt_bit_time_reg[1]),
        .I1(cnt_bit_time_reg[0]),
        .I2(cnt_bit_time_reg[2]),
        .I3(cnt_bit_time_reg[3]),
        .I4(\cnt_24[4]_i_1_n_0 ),
        .O(p_0_in[3]));
  LUT6 #(
    .INIT(64'h1555555540000000)) 
    \cnt_bit_time[4]_i_1 
       (.I0(\cnt_24[4]_i_1_n_0 ),
        .I1(cnt_bit_time_reg[2]),
        .I2(cnt_bit_time_reg[0]),
        .I3(cnt_bit_time_reg[1]),
        .I4(cnt_bit_time_reg[3]),
        .I5(cnt_bit_time_reg[4]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h5515555500400000)) 
    \cnt_bit_time[5]_i_1 
       (.I0(\cnt_24[4]_i_1_n_0 ),
        .I1(cnt_bit_time_reg[4]),
        .I2(cnt_bit_time_reg[3]),
        .I3(\cnt_bit_time[5]_i_2_n_0 ),
        .I4(cnt_bit_time_reg[2]),
        .I5(cnt_bit_time_reg[5]),
        .O(\cnt_bit_time[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \cnt_bit_time[5]_i_2 
       (.I0(cnt_bit_time_reg[0]),
        .I1(cnt_bit_time_reg[1]),
        .O(\cnt_bit_time[5]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'h3FFBC000)) 
    \cnt_bit_time[6]_i_1 
       (.I0(cnt_bit_time_reg[7]),
        .I1(\cnt_24[4]_i_3_n_0 ),
        .I2(cnt_bit_time_reg[1]),
        .I3(cnt_bit_time_reg[0]),
        .I4(cnt_bit_time_reg[6]),
        .O(\cnt_bit_time[6]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h6A)) 
    \cnt_bit_time[7]_i_1 
       (.I0(cnt_bit_time_reg[7]),
        .I1(cnt_bit_time_reg[6]),
        .I2(\cnt_bit_time[7]_i_2_n_0 ),
        .O(p_0_in[7]));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \cnt_bit_time[7]_i_2 
       (.I0(cnt_bit_time_reg[5]),
        .I1(cnt_bit_time_reg[4]),
        .I2(cnt_bit_time_reg[3]),
        .I3(cnt_bit_time_reg[2]),
        .I4(cnt_bit_time_reg[1]),
        .I5(cnt_bit_time_reg[0]),
        .O(\cnt_bit_time[7]_i_2_n_0 ));
  FDRE \cnt_bit_time_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[0]),
        .Q(cnt_bit_time_reg[0]),
        .R(reset));
  FDRE \cnt_bit_time_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[1]),
        .Q(cnt_bit_time_reg[1]),
        .R(reset));
  FDRE \cnt_bit_time_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[2]),
        .Q(cnt_bit_time_reg[2]),
        .R(reset));
  FDRE \cnt_bit_time_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[3]),
        .Q(cnt_bit_time_reg[3]),
        .R(reset));
  FDRE \cnt_bit_time_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[4]),
        .Q(cnt_bit_time_reg[4]),
        .R(reset));
  FDRE \cnt_bit_time_reg[5] 
       (.C(clk),
        .CE(1'b1),
        .D(\cnt_bit_time[5]_i_1_n_0 ),
        .Q(cnt_bit_time_reg[5]),
        .R(reset));
  FDRE \cnt_bit_time_reg[6] 
       (.C(clk),
        .CE(1'b1),
        .D(\cnt_bit_time[6]_i_1_n_0 ),
        .Q(cnt_bit_time_reg[6]),
        .R(reset));
  FDRE \cnt_bit_time_reg[7] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[7]),
        .Q(cnt_bit_time_reg[7]),
        .R(reset));
  LUT6 #(
    .INIT(64'h00000000EEEFEFEF)) 
    \cnt_reset[0]_i_1 
       (.I0(\cnt_reset[0]_i_2_n_0 ),
        .I1(\cnt_reset[0]_i_3_n_0 ),
        .I2(\cnt_reset_reg_n_0_[4] ),
        .I3(\cnt_reset_reg_n_0_[6] ),
        .I4(\cnt_reset_reg_n_0_[1] ),
        .I5(\cnt_reset_reg_n_0_[0] ),
        .O(p_1_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hBF)) 
    \cnt_reset[0]_i_2 
       (.I0(\cnt_reset_reg_n_0_[5] ),
        .I1(\cnt_reset_reg_n_0_[7] ),
        .I2(\cnt_reset_reg_n_0_[8] ),
        .O(\cnt_reset[0]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT4 #(
    .INIT(16'hFFFD)) 
    \cnt_reset[0]_i_3 
       (.I0(\cnt_reset_reg_n_0_[1] ),
        .I1(\cnt_reset_reg_n_0_[4] ),
        .I2(\cnt_reset_reg_n_0_[2] ),
        .I3(\cnt_reset_reg_n_0_[3] ),
        .O(\cnt_reset[0]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'h06)) 
    \cnt_reset[1]_i_1 
       (.I0(\cnt_reset_reg_n_0_[0] ),
        .I1(\cnt_reset_reg_n_0_[1] ),
        .I2(\cnt_400[8]_i_4_n_0 ),
        .O(p_1_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \cnt_reset[2]_i_1 
       (.I0(\cnt_reset_reg_n_0_[2] ),
        .I1(\cnt_reset_reg_n_0_[1] ),
        .I2(\cnt_reset_reg_n_0_[0] ),
        .O(p_1_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \cnt_reset[3]_i_1 
       (.I0(\cnt_reset_reg_n_0_[3] ),
        .I1(\cnt_reset_reg_n_0_[0] ),
        .I2(\cnt_reset_reg_n_0_[1] ),
        .I3(\cnt_reset_reg_n_0_[2] ),
        .O(p_1_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \cnt_reset[4]_i_1 
       (.I0(\cnt_reset_reg_n_0_[4] ),
        .I1(\cnt_reset_reg_n_0_[3] ),
        .I2(\cnt_reset_reg_n_0_[0] ),
        .I3(\cnt_reset_reg_n_0_[1] ),
        .I4(\cnt_reset_reg_n_0_[2] ),
        .O(\cnt_reset[4]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \cnt_reset[5]_i_1 
       (.I0(\cnt_reset_reg_n_0_[5] ),
        .I1(\cnt_reset_reg_n_0_[3] ),
        .I2(\cnt_reset_reg_n_0_[0] ),
        .I3(\cnt_reset_reg_n_0_[1] ),
        .I4(\cnt_reset_reg_n_0_[2] ),
        .I5(\cnt_reset_reg_n_0_[4] ),
        .O(p_1_in[5]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT5 #(
    .INIT(32'h0000DF20)) 
    \cnt_reset[6]_i_1 
       (.I0(\cnt_reset_reg_n_0_[5] ),
        .I1(\cnt_reset[7]_i_3_n_0 ),
        .I2(\cnt_reset_reg_n_0_[4] ),
        .I3(\cnt_reset_reg_n_0_[6] ),
        .I4(\cnt_400[8]_i_4_n_0 ),
        .O(p_1_in[6]));
  LUT6 #(
    .INIT(64'h515555550C000000)) 
    \cnt_reset[7]_i_1 
       (.I0(\cnt_reset[7]_i_2_n_0 ),
        .I1(\cnt_reset_reg_n_0_[5] ),
        .I2(\cnt_reset[7]_i_3_n_0 ),
        .I3(\cnt_reset_reg_n_0_[4] ),
        .I4(\cnt_reset_reg_n_0_[6] ),
        .I5(\cnt_reset_reg_n_0_[7] ),
        .O(p_1_in[7]));
  LUT6 #(
    .INIT(64'h0000000000000020)) 
    \cnt_reset[7]_i_2 
       (.I0(\cnt_reset_reg_n_0_[8] ),
        .I1(\cnt_400[8]_i_7_n_0 ),
        .I2(\cnt_reset_reg_n_0_[1] ),
        .I3(\cnt_reset_reg_n_0_[4] ),
        .I4(\cnt_reset_reg_n_0_[2] ),
        .I5(\cnt_reset_reg_n_0_[3] ),
        .O(\cnt_reset[7]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    \cnt_reset[7]_i_3 
       (.I0(\cnt_reset_reg_n_0_[2] ),
        .I1(\cnt_reset_reg_n_0_[1] ),
        .I2(\cnt_reset_reg_n_0_[0] ),
        .I3(\cnt_reset_reg_n_0_[3] ),
        .O(\cnt_reset[7]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000100000)) 
    \cnt_reset[8]_i_1 
       (.I0(cnt_bit_time_reg[1]),
        .I1(cnt_bit_time_reg[0]),
        .I2(cnt_bit_time_reg[6]),
        .I3(cnt_bit_time_reg[7]),
        .I4(\cnt_24[4]_i_3_n_0 ),
        .I5(\cnt_reset[8]_i_3_n_0 ),
        .O(\cnt_reset[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT4 #(
    .INIT(16'hA266)) 
    \cnt_reset[8]_i_2 
       (.I0(\cnt_reset_reg_n_0_[8] ),
        .I1(\cnt_reset_reg_n_0_[7] ),
        .I2(\cnt_reset[8]_i_4_n_0 ),
        .I3(\cnt_reset[8]_i_5_n_0 ),
        .O(p_1_in[8]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'hFFFF7FFF)) 
    \cnt_reset[8]_i_3 
       (.I0(\cnt_24_reg_n_0_[2] ),
        .I1(\cnt_24_reg_n_0_[1] ),
        .I2(\cnt_24_reg_n_0_[0] ),
        .I3(\cnt_24_reg_n_0_[4] ),
        .I4(\cnt_24_reg_n_0_[3] ),
        .O(\cnt_reset[8]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT5 #(
    .INIT(32'hFFFFFEFF)) 
    \cnt_reset[8]_i_4 
       (.I0(\cnt_reset_reg_n_0_[3] ),
        .I1(\cnt_reset_reg_n_0_[2] ),
        .I2(\cnt_reset_reg_n_0_[4] ),
        .I3(\cnt_reset_reg_n_0_[1] ),
        .I4(\cnt_400[8]_i_7_n_0 ),
        .O(\cnt_reset[8]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT4 #(
    .INIT(16'hDFFF)) 
    \cnt_reset[8]_i_5 
       (.I0(\cnt_reset_reg_n_0_[5] ),
        .I1(\cnt_reset[7]_i_3_n_0 ),
        .I2(\cnt_reset_reg_n_0_[4] ),
        .I3(\cnt_reset_reg_n_0_[6] ),
        .O(\cnt_reset[8]_i_5_n_0 ));
  FDRE \cnt_reset_reg[0] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[0]),
        .Q(\cnt_reset_reg_n_0_[0] ),
        .R(reset));
  FDRE \cnt_reset_reg[1] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[1]),
        .Q(\cnt_reset_reg_n_0_[1] ),
        .R(reset));
  FDRE \cnt_reset_reg[2] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[2]),
        .Q(\cnt_reset_reg_n_0_[2] ),
        .R(reset));
  FDRE \cnt_reset_reg[3] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[3]),
        .Q(\cnt_reset_reg_n_0_[3] ),
        .R(reset));
  FDRE \cnt_reset_reg[4] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(\cnt_reset[4]_i_1_n_0 ),
        .Q(\cnt_reset_reg_n_0_[4] ),
        .R(reset));
  FDRE \cnt_reset_reg[5] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[5]),
        .Q(\cnt_reset_reg_n_0_[5] ),
        .R(reset));
  FDRE \cnt_reset_reg[6] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[6]),
        .Q(\cnt_reset_reg_n_0_[6] ),
        .R(reset));
  FDRE \cnt_reset_reg[7] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[7]),
        .Q(\cnt_reset_reg_n_0_[7] ),
        .R(reset));
  FDRE \cnt_reset_reg[8] 
       (.C(clk),
        .CE(\cnt_reset[8]_i_1_n_0 ),
        .D(p_1_in[8]),
        .Q(\cnt_reset_reg_n_0_[8] ),
        .R(reset));
  LUT5 #(
    .INIT(32'h54005050)) 
    ser_data_out_en_i_1
       (.I0(reset),
        .I1(\cnt_400[8]_i_4_n_0 ),
        .I2(ser_data_out_en_reg_0),
        .I3(ser_data_out_en_i_2_n_0),
        .I4(\cnt_reset[8]_i_1_n_0 ),
        .O(ser_data_out_en_i_1_n_0));
  LUT6 #(
    .INIT(64'hFFFEFFFFFFFFFFFF)) 
    ser_data_out_en_i_2
       (.I0(\cnt_reset[7]_i_3_n_0 ),
        .I1(\cnt_reset_reg_n_0_[4] ),
        .I2(\cnt_reset_reg_n_0_[6] ),
        .I3(\cnt_reset_reg_n_0_[5] ),
        .I4(\cnt_reset_reg_n_0_[7] ),
        .I5(\cnt_reset_reg_n_0_[8] ),
        .O(ser_data_out_en_i_2_n_0));
  FDRE ser_data_out_en_reg
       (.C(clk),
        .CE(1'b1),
        .D(ser_data_out_en_i_1_n_0),
        .Q(ser_data_out_en_reg_0),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hABFBAAAAA808AAAA)) 
    ser_data_out_i_1
       (.I0(ser_data_out_i_2_n_0),
        .I1(ser_data_out_i_3_n_0),
        .I2(ser_data_out_i_4_n_0),
        .I3(ser_data_out_i_5_n_0),
        .I4(ser_data_out_en_reg_0),
        .I5(ser_data_out),
        .O(ser_data_out_i_1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hFE)) 
    ser_data_out_i_10
       (.I0(cnt_bit_time_reg[6]),
        .I1(cnt_bit_time_reg[7]),
        .I2(cnt_bit_time_reg[2]),
        .O(ser_data_out_i_10_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_11
       (.I0(data[20]),
        .I1(data[21]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[22]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[23]),
        .O(ser_data_out_i_11_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_12
       (.I0(data[16]),
        .I1(data[17]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[18]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[19]),
        .O(ser_data_out_i_12_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_13
       (.I0(data[12]),
        .I1(data[13]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[14]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[15]),
        .O(ser_data_out_i_13_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_14
       (.I0(data[8]),
        .I1(data[9]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[10]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[11]),
        .O(ser_data_out_i_14_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_15
       (.I0(data[4]),
        .I1(data[5]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[6]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[7]),
        .O(ser_data_out_i_15_n_0));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    ser_data_out_i_16
       (.I0(data[0]),
        .I1(data[1]),
        .I2(\cnt_24_reg_n_0_[1] ),
        .I3(data[2]),
        .I4(\cnt_24_reg_n_0_[0] ),
        .I5(data[3]),
        .O(ser_data_out_i_16_n_0));
  LUT6 #(
    .INIT(64'h0000000000000020)) 
    ser_data_out_i_2
       (.I0(ser_data_out_i_6_n_0),
        .I1(cnt_bit_time_reg[4]),
        .I2(ser_data_out_en_reg_0),
        .I3(cnt_bit_time_reg[3]),
        .I4(cnt_bit_time_reg[1]),
        .I5(cnt_bit_time_reg[0]),
        .O(ser_data_out_i_2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT5 #(
    .INIT(32'h00000082)) 
    ser_data_out_i_3
       (.I0(ser_data_out_i_6_n_0),
        .I1(cnt_bit_time_reg[3]),
        .I2(cnt_bit_time_reg[4]),
        .I3(cnt_bit_time_reg[0]),
        .I4(cnt_bit_time_reg[1]),
        .O(ser_data_out_i_3_n_0));
  LUT5 #(
    .INIT(32'hBEB28E82)) 
    ser_data_out_i_4
       (.I0(ser_data_out_reg_i_7_n_0),
        .I1(\cnt_24_reg_n_0_[3] ),
        .I2(\cnt_24_reg_n_0_[4] ),
        .I3(ser_data_out_reg_i_8_n_0),
        .I4(ser_data_out_reg_i_9_n_0),
        .O(ser_data_out_i_4_n_0));
  LUT6 #(
    .INIT(64'h0000000080000001)) 
    ser_data_out_i_5
       (.I0(cnt_bit_time_reg[4]),
        .I1(cnt_bit_time_reg[5]),
        .I2(cnt_bit_time_reg[3]),
        .I3(cnt_bit_time_reg[0]),
        .I4(cnt_bit_time_reg[1]),
        .I5(ser_data_out_i_10_n_0),
        .O(ser_data_out_i_5_n_0));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h0001)) 
    ser_data_out_i_6
       (.I0(cnt_bit_time_reg[5]),
        .I1(cnt_bit_time_reg[2]),
        .I2(cnt_bit_time_reg[7]),
        .I3(cnt_bit_time_reg[6]),
        .O(ser_data_out_i_6_n_0));
  FDRE ser_data_out_reg
       (.C(clk),
        .CE(1'b1),
        .D(ser_data_out_i_1_n_0),
        .Q(ser_data_out),
        .R(reset));
  MUXF7 ser_data_out_reg_i_7
       (.I0(ser_data_out_i_11_n_0),
        .I1(ser_data_out_i_12_n_0),
        .O(ser_data_out_reg_i_7_n_0),
        .S(\cnt_24_reg_n_0_[2] ));
  MUXF7 ser_data_out_reg_i_8
       (.I0(ser_data_out_i_13_n_0),
        .I1(ser_data_out_i_14_n_0),
        .O(ser_data_out_reg_i_8_n_0),
        .S(\cnt_24_reg_n_0_[2] ));
  MUXF7 ser_data_out_reg_i_9
       (.I0(ser_data_out_i_15_n_0),
        .I1(ser_data_out_i_16_n_0),
        .O(ser_data_out_reg_i_9_n_0),
        .S(\cnt_24_reg_n_0_[2] ));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
