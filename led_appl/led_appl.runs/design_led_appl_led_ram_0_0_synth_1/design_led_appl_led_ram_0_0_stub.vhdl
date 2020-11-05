-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Thu Nov  5 11:01:59 2020
-- Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_led_appl_led_ram_0_0_stub.vhdl
-- Design      : design_led_appl_led_ram_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    data_in_mb : in STD_LOGIC_VECTOR ( 23 downto 0 );
    data_valid_mb : in STD_LOGIC;
    clk : in STD_LOGIC;
    reset : in STD_LOGIC;
    adr_in_mb : in STD_LOGIC_VECTOR ( 8 downto 0 );
    adr_in_led : in STD_LOGIC_VECTOR ( 8 downto 0 );
    data_out_led : out STD_LOGIC_VECTOR ( 23 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "data_in_mb[23:0],data_valid_mb,clk,reset,adr_in_mb[8:0],adr_in_led[8:0],data_out_led[23:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "led_ram,Vivado 2019.1";
begin
end;
