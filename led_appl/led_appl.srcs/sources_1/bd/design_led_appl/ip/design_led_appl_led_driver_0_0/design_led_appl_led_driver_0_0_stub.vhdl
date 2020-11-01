-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Thu Oct 29 09:16:51 2020
-- Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               C:/Users/Keller/Desktop/Harald/201022_Projekt_400_leds/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_led_driver_0_0/design_led_appl_led_driver_0_0_stub.vhdl
-- Design      : design_led_appl_led_driver_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_led_appl_led_driver_0_0 is
  Port ( 
    adr_out : out STD_LOGIC_VECTOR ( 8 downto 0 );
    data : in STD_LOGIC_VECTOR ( 23 downto 0 );
    ser_data_out : out STD_LOGIC;
    ser_data_out_en_disp : out STD_LOGIC;
    clk : in STD_LOGIC;
    reset : in STD_LOGIC
  );

end design_led_appl_led_driver_0_0;

architecture stub of design_led_appl_led_driver_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "adr_out[8:0],data[23:0],ser_data_out,ser_data_out_en_disp,clk,reset";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "led_driver,Vivado 2019.1";
begin
end;
