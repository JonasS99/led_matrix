-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Fri Sep 25 09:21:38 2020
-- Host        : DESKTOP-CAVAECJ running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim
--               C:/Users/Jonas/Desktop/Hochschule/7_Semester/Projekt/led_appl/led_appl.srcs/sources_1/bd/design_led_appl/ip/design_led_appl_led_ram_0_0/design_led_appl_led_ram_0_0_sim_netlist.vhdl
-- Design      : design_led_appl_led_ram_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_led_appl_led_ram_0_0_led_ram is
  port (
    data_out_led : out STD_LOGIC_VECTOR ( 23 downto 0 );
    data_valid_mb : in STD_LOGIC;
    adr_in_mb : in STD_LOGIC_VECTOR ( 6 downto 0 );
    clk : in STD_LOGIC;
    data_in_mb : in STD_LOGIC_VECTOR ( 23 downto 0 );
    adr_in_led : in STD_LOGIC_VECTOR ( 6 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_led_appl_led_ram_0_0_led_ram : entity is "led_ram";
end design_led_appl_led_ram_0_0_led_ram;

architecture STRUCTURE of design_led_appl_led_ram_0_0_led_ram is
  signal RAM_reg_0_63_0_2_i_1_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_0_2_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_0_2_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_0_2_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_12_14_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_12_14_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_12_14_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_15_17_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_15_17_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_15_17_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_18_20_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_18_20_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_18_20_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_21_23_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_21_23_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_21_23_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_3_5_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_3_5_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_3_5_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_6_8_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_6_8_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_6_8_n_2 : STD_LOGIC;
  signal RAM_reg_0_63_9_11_n_0 : STD_LOGIC;
  signal RAM_reg_0_63_9_11_n_1 : STD_LOGIC;
  signal RAM_reg_0_63_9_11_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_0_2_i_1_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_0_2_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_0_2_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_0_2_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_12_14_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_12_14_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_12_14_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_15_17_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_15_17_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_15_17_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_18_20_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_18_20_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_18_20_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_21_23_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_21_23_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_21_23_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_3_5_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_3_5_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_3_5_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_6_8_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_6_8_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_6_8_n_2 : STD_LOGIC;
  signal RAM_reg_64_127_9_11_n_0 : STD_LOGIC;
  signal RAM_reg_64_127_9_11_n_1 : STD_LOGIC;
  signal RAM_reg_64_127_9_11_n_2 : STD_LOGIC;
  signal NLW_RAM_reg_0_63_0_2_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_12_14_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_15_17_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_18_20_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_21_23_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_3_5_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_6_8_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_0_63_9_11_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_0_2_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_12_14_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_15_17_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_18_20_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_21_23_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_3_5_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_6_8_DOD_UNCONNECTED : STD_LOGIC;
  signal NLW_RAM_reg_64_127_9_11_DOD_UNCONNECTED : STD_LOGIC;
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_0_2 : label is "";
  attribute RTL_RAM_BITS : integer;
  attribute RTL_RAM_BITS of RAM_reg_0_63_0_2 : label is 2400;
  attribute RTL_RAM_NAME : string;
  attribute RTL_RAM_NAME of RAM_reg_0_63_0_2 : label is "U0/RAM";
  attribute ram_addr_begin : integer;
  attribute ram_addr_begin of RAM_reg_0_63_0_2 : label is 0;
  attribute ram_addr_end : integer;
  attribute ram_addr_end of RAM_reg_0_63_0_2 : label is 63;
  attribute ram_offset : integer;
  attribute ram_offset of RAM_reg_0_63_0_2 : label is 0;
  attribute ram_slice_begin : integer;
  attribute ram_slice_begin of RAM_reg_0_63_0_2 : label is 0;
  attribute ram_slice_end : integer;
  attribute ram_slice_end of RAM_reg_0_63_0_2 : label is 2;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_12_14 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_12_14 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_12_14 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_12_14 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_12_14 : label is 63;
  attribute ram_offset of RAM_reg_0_63_12_14 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_12_14 : label is 12;
  attribute ram_slice_end of RAM_reg_0_63_12_14 : label is 14;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_15_17 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_15_17 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_15_17 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_15_17 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_15_17 : label is 63;
  attribute ram_offset of RAM_reg_0_63_15_17 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_15_17 : label is 15;
  attribute ram_slice_end of RAM_reg_0_63_15_17 : label is 17;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_18_20 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_18_20 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_18_20 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_18_20 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_18_20 : label is 63;
  attribute ram_offset of RAM_reg_0_63_18_20 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_18_20 : label is 18;
  attribute ram_slice_end of RAM_reg_0_63_18_20 : label is 20;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_21_23 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_21_23 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_21_23 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_21_23 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_21_23 : label is 63;
  attribute ram_offset of RAM_reg_0_63_21_23 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_21_23 : label is 21;
  attribute ram_slice_end of RAM_reg_0_63_21_23 : label is 23;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_3_5 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_3_5 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_3_5 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_3_5 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_3_5 : label is 63;
  attribute ram_offset of RAM_reg_0_63_3_5 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_3_5 : label is 3;
  attribute ram_slice_end of RAM_reg_0_63_3_5 : label is 5;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_6_8 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_6_8 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_6_8 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_6_8 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_6_8 : label is 63;
  attribute ram_offset of RAM_reg_0_63_6_8 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_6_8 : label is 6;
  attribute ram_slice_end of RAM_reg_0_63_6_8 : label is 8;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_0_63_9_11 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_0_63_9_11 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_0_63_9_11 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_0_63_9_11 : label is 0;
  attribute ram_addr_end of RAM_reg_0_63_9_11 : label is 63;
  attribute ram_offset of RAM_reg_0_63_9_11 : label is 0;
  attribute ram_slice_begin of RAM_reg_0_63_9_11 : label is 9;
  attribute ram_slice_end of RAM_reg_0_63_9_11 : label is 11;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_0_2 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_0_2 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_0_2 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_0_2 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_0_2 : label is 99;
  attribute ram_offset of RAM_reg_64_127_0_2 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_0_2 : label is 0;
  attribute ram_slice_end of RAM_reg_64_127_0_2 : label is 2;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_12_14 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_12_14 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_12_14 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_12_14 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_12_14 : label is 99;
  attribute ram_offset of RAM_reg_64_127_12_14 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_12_14 : label is 12;
  attribute ram_slice_end of RAM_reg_64_127_12_14 : label is 14;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_15_17 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_15_17 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_15_17 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_15_17 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_15_17 : label is 99;
  attribute ram_offset of RAM_reg_64_127_15_17 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_15_17 : label is 15;
  attribute ram_slice_end of RAM_reg_64_127_15_17 : label is 17;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_18_20 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_18_20 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_18_20 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_18_20 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_18_20 : label is 99;
  attribute ram_offset of RAM_reg_64_127_18_20 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_18_20 : label is 18;
  attribute ram_slice_end of RAM_reg_64_127_18_20 : label is 20;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_21_23 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_21_23 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_21_23 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_21_23 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_21_23 : label is 99;
  attribute ram_offset of RAM_reg_64_127_21_23 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_21_23 : label is 21;
  attribute ram_slice_end of RAM_reg_64_127_21_23 : label is 23;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_3_5 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_3_5 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_3_5 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_3_5 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_3_5 : label is 99;
  attribute ram_offset of RAM_reg_64_127_3_5 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_3_5 : label is 3;
  attribute ram_slice_end of RAM_reg_64_127_3_5 : label is 5;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_6_8 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_6_8 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_6_8 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_6_8 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_6_8 : label is 99;
  attribute ram_offset of RAM_reg_64_127_6_8 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_6_8 : label is 6;
  attribute ram_slice_end of RAM_reg_64_127_6_8 : label is 8;
  attribute METHODOLOGY_DRC_VIOS of RAM_reg_64_127_9_11 : label is "";
  attribute RTL_RAM_BITS of RAM_reg_64_127_9_11 : label is 2400;
  attribute RTL_RAM_NAME of RAM_reg_64_127_9_11 : label is "U0/RAM";
  attribute ram_addr_begin of RAM_reg_64_127_9_11 : label is 64;
  attribute ram_addr_end of RAM_reg_64_127_9_11 : label is 99;
  attribute ram_offset of RAM_reg_64_127_9_11 : label is 0;
  attribute ram_slice_begin of RAM_reg_64_127_9_11 : label is 9;
  attribute ram_slice_end of RAM_reg_64_127_9_11 : label is 11;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \data_out_led[0]_INST_0\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \data_out_led[10]_INST_0\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \data_out_led[11]_INST_0\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \data_out_led[12]_INST_0\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \data_out_led[13]_INST_0\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \data_out_led[14]_INST_0\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \data_out_led[15]_INST_0\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \data_out_led[16]_INST_0\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \data_out_led[17]_INST_0\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \data_out_led[18]_INST_0\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \data_out_led[19]_INST_0\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \data_out_led[1]_INST_0\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \data_out_led[20]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \data_out_led[21]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \data_out_led[22]_INST_0\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \data_out_led[23]_INST_0\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \data_out_led[2]_INST_0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \data_out_led[3]_INST_0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \data_out_led[4]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \data_out_led[5]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \data_out_led[6]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \data_out_led[7]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \data_out_led[8]_INST_0\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \data_out_led[9]_INST_0\ : label is "soft_lutpair4";
begin
RAM_reg_0_63_0_2: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(0),
      DIB => data_in_mb(1),
      DIC => data_in_mb(2),
      DID => '0',
      DOA => RAM_reg_0_63_0_2_n_0,
      DOB => RAM_reg_0_63_0_2_n_1,
      DOC => RAM_reg_0_63_0_2_n_2,
      DOD => NLW_RAM_reg_0_63_0_2_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_0_2_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => data_valid_mb,
      I1 => adr_in_mb(6),
      O => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_12_14: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(12),
      DIB => data_in_mb(13),
      DIC => data_in_mb(14),
      DID => '0',
      DOA => RAM_reg_0_63_12_14_n_0,
      DOB => RAM_reg_0_63_12_14_n_1,
      DOC => RAM_reg_0_63_12_14_n_2,
      DOD => NLW_RAM_reg_0_63_12_14_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_15_17: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(15),
      DIB => data_in_mb(16),
      DIC => data_in_mb(17),
      DID => '0',
      DOA => RAM_reg_0_63_15_17_n_0,
      DOB => RAM_reg_0_63_15_17_n_1,
      DOC => RAM_reg_0_63_15_17_n_2,
      DOD => NLW_RAM_reg_0_63_15_17_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_18_20: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(18),
      DIB => data_in_mb(19),
      DIC => data_in_mb(20),
      DID => '0',
      DOA => RAM_reg_0_63_18_20_n_0,
      DOB => RAM_reg_0_63_18_20_n_1,
      DOC => RAM_reg_0_63_18_20_n_2,
      DOD => NLW_RAM_reg_0_63_18_20_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_21_23: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(21),
      DIB => data_in_mb(22),
      DIC => data_in_mb(23),
      DID => '0',
      DOA => RAM_reg_0_63_21_23_n_0,
      DOB => RAM_reg_0_63_21_23_n_1,
      DOC => RAM_reg_0_63_21_23_n_2,
      DOD => NLW_RAM_reg_0_63_21_23_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_3_5: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(3),
      DIB => data_in_mb(4),
      DIC => data_in_mb(5),
      DID => '0',
      DOA => RAM_reg_0_63_3_5_n_0,
      DOB => RAM_reg_0_63_3_5_n_1,
      DOC => RAM_reg_0_63_3_5_n_2,
      DOD => NLW_RAM_reg_0_63_3_5_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_6_8: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(6),
      DIB => data_in_mb(7),
      DIC => data_in_mb(8),
      DID => '0',
      DOA => RAM_reg_0_63_6_8_n_0,
      DOB => RAM_reg_0_63_6_8_n_1,
      DOC => RAM_reg_0_63_6_8_n_2,
      DOD => NLW_RAM_reg_0_63_6_8_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_0_63_9_11: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(9),
      DIB => data_in_mb(10),
      DIC => data_in_mb(11),
      DID => '0',
      DOA => RAM_reg_0_63_9_11_n_0,
      DOB => RAM_reg_0_63_9_11_n_1,
      DOC => RAM_reg_0_63_9_11_n_2,
      DOD => NLW_RAM_reg_0_63_9_11_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_0_63_0_2_i_1_n_0
    );
RAM_reg_64_127_0_2: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(0),
      DIB => data_in_mb(1),
      DIC => data_in_mb(2),
      DID => '0',
      DOA => RAM_reg_64_127_0_2_n_0,
      DOB => RAM_reg_64_127_0_2_n_1,
      DOC => RAM_reg_64_127_0_2_n_2,
      DOD => NLW_RAM_reg_64_127_0_2_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_0_2_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => data_valid_mb,
      I1 => adr_in_mb(6),
      O => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_12_14: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(12),
      DIB => data_in_mb(13),
      DIC => data_in_mb(14),
      DID => '0',
      DOA => RAM_reg_64_127_12_14_n_0,
      DOB => RAM_reg_64_127_12_14_n_1,
      DOC => RAM_reg_64_127_12_14_n_2,
      DOD => NLW_RAM_reg_64_127_12_14_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_15_17: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(15),
      DIB => data_in_mb(16),
      DIC => data_in_mb(17),
      DID => '0',
      DOA => RAM_reg_64_127_15_17_n_0,
      DOB => RAM_reg_64_127_15_17_n_1,
      DOC => RAM_reg_64_127_15_17_n_2,
      DOD => NLW_RAM_reg_64_127_15_17_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_18_20: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(18),
      DIB => data_in_mb(19),
      DIC => data_in_mb(20),
      DID => '0',
      DOA => RAM_reg_64_127_18_20_n_0,
      DOB => RAM_reg_64_127_18_20_n_1,
      DOC => RAM_reg_64_127_18_20_n_2,
      DOD => NLW_RAM_reg_64_127_18_20_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_21_23: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(21),
      DIB => data_in_mb(22),
      DIC => data_in_mb(23),
      DID => '0',
      DOA => RAM_reg_64_127_21_23_n_0,
      DOB => RAM_reg_64_127_21_23_n_1,
      DOC => RAM_reg_64_127_21_23_n_2,
      DOD => NLW_RAM_reg_64_127_21_23_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_3_5: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(3),
      DIB => data_in_mb(4),
      DIC => data_in_mb(5),
      DID => '0',
      DOA => RAM_reg_64_127_3_5_n_0,
      DOB => RAM_reg_64_127_3_5_n_1,
      DOC => RAM_reg_64_127_3_5_n_2,
      DOD => NLW_RAM_reg_64_127_3_5_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_6_8: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(6),
      DIB => data_in_mb(7),
      DIC => data_in_mb(8),
      DID => '0',
      DOA => RAM_reg_64_127_6_8_n_0,
      DOB => RAM_reg_64_127_6_8_n_1,
      DOC => RAM_reg_64_127_6_8_n_2,
      DOD => NLW_RAM_reg_64_127_6_8_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
RAM_reg_64_127_9_11: unisim.vcomponents.RAM64M
     port map (
      ADDRA(5 downto 0) => adr_in_led(5 downto 0),
      ADDRB(5 downto 0) => adr_in_led(5 downto 0),
      ADDRC(5 downto 0) => adr_in_led(5 downto 0),
      ADDRD(5 downto 0) => adr_in_mb(5 downto 0),
      DIA => data_in_mb(9),
      DIB => data_in_mb(10),
      DIC => data_in_mb(11),
      DID => '0',
      DOA => RAM_reg_64_127_9_11_n_0,
      DOB => RAM_reg_64_127_9_11_n_1,
      DOC => RAM_reg_64_127_9_11_n_2,
      DOD => NLW_RAM_reg_64_127_9_11_DOD_UNCONNECTED,
      WCLK => clk,
      WE => RAM_reg_64_127_0_2_i_1_n_0
    );
\data_out_led[0]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_0_2_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_0_2_n_0,
      O => data_out_led(0)
    );
\data_out_led[10]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_9_11_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_9_11_n_1,
      O => data_out_led(10)
    );
\data_out_led[11]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_9_11_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_9_11_n_2,
      O => data_out_led(11)
    );
\data_out_led[12]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_12_14_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_12_14_n_0,
      O => data_out_led(12)
    );
\data_out_led[13]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_12_14_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_12_14_n_1,
      O => data_out_led(13)
    );
\data_out_led[14]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_12_14_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_12_14_n_2,
      O => data_out_led(14)
    );
\data_out_led[15]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_15_17_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_15_17_n_0,
      O => data_out_led(15)
    );
\data_out_led[16]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_15_17_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_15_17_n_1,
      O => data_out_led(16)
    );
\data_out_led[17]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_15_17_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_15_17_n_2,
      O => data_out_led(17)
    );
\data_out_led[18]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_18_20_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_18_20_n_0,
      O => data_out_led(18)
    );
\data_out_led[19]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_18_20_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_18_20_n_1,
      O => data_out_led(19)
    );
\data_out_led[1]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_0_2_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_0_2_n_1,
      O => data_out_led(1)
    );
\data_out_led[20]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_18_20_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_18_20_n_2,
      O => data_out_led(20)
    );
\data_out_led[21]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_21_23_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_21_23_n_0,
      O => data_out_led(21)
    );
\data_out_led[22]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_21_23_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_21_23_n_1,
      O => data_out_led(22)
    );
\data_out_led[23]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_21_23_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_21_23_n_2,
      O => data_out_led(23)
    );
\data_out_led[2]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_0_2_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_0_2_n_2,
      O => data_out_led(2)
    );
\data_out_led[3]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_3_5_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_3_5_n_0,
      O => data_out_led(3)
    );
\data_out_led[4]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_3_5_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_3_5_n_1,
      O => data_out_led(4)
    );
\data_out_led[5]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_3_5_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_3_5_n_2,
      O => data_out_led(5)
    );
\data_out_led[6]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_6_8_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_6_8_n_0,
      O => data_out_led(6)
    );
\data_out_led[7]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_6_8_n_1,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_6_8_n_1,
      O => data_out_led(7)
    );
\data_out_led[8]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_6_8_n_2,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_6_8_n_2,
      O => data_out_led(8)
    );
\data_out_led[9]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => RAM_reg_64_127_9_11_n_0,
      I1 => adr_in_led(6),
      I2 => RAM_reg_0_63_9_11_n_0,
      O => data_out_led(9)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_led_appl_led_ram_0_0 is
  port (
    data_in_mb : in STD_LOGIC_VECTOR ( 23 downto 0 );
    data_valid_mb : in STD_LOGIC;
    clk : in STD_LOGIC;
    reset : in STD_LOGIC;
    adr_in_mb : in STD_LOGIC_VECTOR ( 7 downto 0 );
    adr_in_led : in STD_LOGIC_VECTOR ( 7 downto 0 );
    data_out_led : out STD_LOGIC_VECTOR ( 23 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_led_appl_led_ram_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_led_appl_led_ram_0_0 : entity is "design_led_appl_led_ram_0_0,led_ram,{}";
  attribute downgradeipidentifiedwarnings : string;
  attribute downgradeipidentifiedwarnings of design_led_appl_led_ram_0_0 : entity is "yes";
  attribute ip_definition_source : string;
  attribute ip_definition_source of design_led_appl_led_ram_0_0 : entity is "module_ref";
  attribute x_core_info : string;
  attribute x_core_info of design_led_appl_led_ram_0_0 : entity is "led_ram,Vivado 2019.1";
end design_led_appl_led_ram_0_0;

architecture STRUCTURE of design_led_appl_led_ram_0_0 is
  attribute x_interface_info : string;
  attribute x_interface_info of clk : signal is "xilinx.com:signal:clock:1.0 clk CLK";
  attribute x_interface_parameter : string;
  attribute x_interface_parameter of clk : signal is "XIL_INTERFACENAME clk, ASSOCIATED_RESET reset, FREQ_HZ 100000000, PHASE 0.0, CLK_DOMAIN /clk_wiz_1_clk_out1, INSERT_VIP 0";
  attribute x_interface_info of reset : signal is "xilinx.com:signal:reset:1.0 reset RST";
  attribute x_interface_parameter of reset : signal is "XIL_INTERFACENAME reset, POLARITY ACTIVE_HIGH, INSERT_VIP 0";
begin
U0: entity work.design_led_appl_led_ram_0_0_led_ram
     port map (
      adr_in_led(6 downto 0) => adr_in_led(6 downto 0),
      adr_in_mb(6 downto 0) => adr_in_mb(6 downto 0),
      clk => clk,
      data_in_mb(23 downto 0) => data_in_mb(23 downto 0),
      data_out_led(23 downto 0) => data_out_led(23 downto 0),
      data_valid_mb => data_valid_mb
    );
end STRUCTURE;
