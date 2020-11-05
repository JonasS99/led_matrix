-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Thu Nov  5 11:02:02 2020
-- Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_led_appl_led_driver_0_0_sim_netlist.vhdl
-- Design      : design_led_appl_led_driver_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver is
  port (
    Q : out STD_LOGIC_VECTOR ( 3 downto 0 );
    \cnt_400_reg[2]_0\ : out STD_LOGIC;
    \cnt_400_reg[1]_0\ : out STD_LOGIC;
    \cnt_400_reg[3]_0\ : out STD_LOGIC;
    \cnt_400_reg[4]_0\ : out STD_LOGIC;
    \cnt_400_reg[5]_0\ : out STD_LOGIC;
    ser_data_out_en_reg_0 : out STD_LOGIC;
    ser_data_out : out STD_LOGIC;
    reset : in STD_LOGIC;
    clk : in STD_LOGIC;
    data : in STD_LOGIC_VECTOR ( 23 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver is
  signal \^q\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \cnt_24[0]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_24[1]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_24[2]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_24[3]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_24[4]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_24[4]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_24[4]_i_3_n_0\ : STD_LOGIC;
  signal \cnt_24_reg_n_0_[0]\ : STD_LOGIC;
  signal \cnt_24_reg_n_0_[1]\ : STD_LOGIC;
  signal \cnt_24_reg_n_0_[2]\ : STD_LOGIC;
  signal \cnt_24_reg_n_0_[3]\ : STD_LOGIC;
  signal \cnt_24_reg_n_0_[4]\ : STD_LOGIC;
  signal \cnt_400[0]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[1]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[2]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[3]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[4]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[5]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[5]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_400[6]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[7]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[7]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_3_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_4_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_5_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_6_n_0\ : STD_LOGIC;
  signal \cnt_400[8]_i_7_n_0\ : STD_LOGIC;
  signal \^cnt_400_reg[1]_0\ : STD_LOGIC;
  signal \^cnt_400_reg[2]_0\ : STD_LOGIC;
  signal \^cnt_400_reg[3]_0\ : STD_LOGIC;
  signal \^cnt_400_reg[4]_0\ : STD_LOGIC;
  signal \^cnt_400_reg[5]_0\ : STD_LOGIC;
  signal \cnt_bit_time[5]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_bit_time[5]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_bit_time[6]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_bit_time[7]_i_2_n_0\ : STD_LOGIC;
  signal cnt_bit_time_reg : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \cnt_reset[0]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_reset[0]_i_3_n_0\ : STD_LOGIC;
  signal \cnt_reset[4]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_reset[7]_i_2_n_0\ : STD_LOGIC;
  signal \cnt_reset[7]_i_3_n_0\ : STD_LOGIC;
  signal \cnt_reset[8]_i_1_n_0\ : STD_LOGIC;
  signal \cnt_reset[8]_i_3_n_0\ : STD_LOGIC;
  signal \cnt_reset[8]_i_4_n_0\ : STD_LOGIC;
  signal \cnt_reset[8]_i_5_n_0\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[0]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[1]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[2]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[3]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[4]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[5]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[6]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[7]\ : STD_LOGIC;
  signal \cnt_reset_reg_n_0_[8]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal p_1_in : STD_LOGIC_VECTOR ( 8 downto 0 );
  signal \^ser_data_out\ : STD_LOGIC;
  signal ser_data_out_en_i_1_n_0 : STD_LOGIC;
  signal ser_data_out_en_i_2_n_0 : STD_LOGIC;
  signal \^ser_data_out_en_reg_0\ : STD_LOGIC;
  signal ser_data_out_i_10_n_0 : STD_LOGIC;
  signal ser_data_out_i_11_n_0 : STD_LOGIC;
  signal ser_data_out_i_12_n_0 : STD_LOGIC;
  signal ser_data_out_i_13_n_0 : STD_LOGIC;
  signal ser_data_out_i_14_n_0 : STD_LOGIC;
  signal ser_data_out_i_15_n_0 : STD_LOGIC;
  signal ser_data_out_i_16_n_0 : STD_LOGIC;
  signal ser_data_out_i_1_n_0 : STD_LOGIC;
  signal ser_data_out_i_2_n_0 : STD_LOGIC;
  signal ser_data_out_i_3_n_0 : STD_LOGIC;
  signal ser_data_out_i_4_n_0 : STD_LOGIC;
  signal ser_data_out_i_5_n_0 : STD_LOGIC;
  signal ser_data_out_i_6_n_0 : STD_LOGIC;
  signal ser_data_out_reg_i_7_n_0 : STD_LOGIC;
  signal ser_data_out_reg_i_8_n_0 : STD_LOGIC;
  signal ser_data_out_reg_i_9_n_0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \cnt_24[0]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \cnt_24[1]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \cnt_24[2]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \cnt_24[3]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \cnt_24[4]_i_2\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \cnt_400[0]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \cnt_400[2]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \cnt_400[3]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \cnt_400[4]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \cnt_400[7]_i_2\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \cnt_400[8]_i_2\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \cnt_400[8]_i_3\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \cnt_400[8]_i_4\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \cnt_400[8]_i_5\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \cnt_400[8]_i_6\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \cnt_bit_time[1]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \cnt_bit_time[2]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \cnt_bit_time[3]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \cnt_bit_time[5]_i_2\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \cnt_bit_time[6]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \cnt_reset[0]_i_2\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \cnt_reset[0]_i_3\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \cnt_reset[2]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \cnt_reset[3]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \cnt_reset[4]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \cnt_reset[6]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \cnt_reset[7]_i_3\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \cnt_reset[8]_i_2\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \cnt_reset[8]_i_3\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \cnt_reset[8]_i_4\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \cnt_reset[8]_i_5\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of ser_data_out_i_10 : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of ser_data_out_i_3 : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of ser_data_out_i_6 : label is "soft_lutpair14";
begin
  Q(3 downto 0) <= \^q\(3 downto 0);
  \cnt_400_reg[1]_0\ <= \^cnt_400_reg[1]_0\;
  \cnt_400_reg[2]_0\ <= \^cnt_400_reg[2]_0\;
  \cnt_400_reg[3]_0\ <= \^cnt_400_reg[3]_0\;
  \cnt_400_reg[4]_0\ <= \^cnt_400_reg[4]_0\;
  \cnt_400_reg[5]_0\ <= \^cnt_400_reg[5]_0\;
  ser_data_out <= \^ser_data_out\;
  ser_data_out_en_reg_0 <= \^ser_data_out_en_reg_0\;
\cnt_24[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[0]\,
      O => \cnt_24[0]_i_1_n_0\
    );
\cnt_24[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[1]\,
      I1 => \cnt_24_reg_n_0_[0]\,
      O => \cnt_24[1]_i_1_n_0\
    );
\cnt_24[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6A"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[2]\,
      I1 => \cnt_24_reg_n_0_[0]\,
      I2 => \cnt_24_reg_n_0_[1]\,
      O => \cnt_24[2]_i_1_n_0\
    );
\cnt_24[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3FFF4000"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[4]\,
      I1 => \cnt_24_reg_n_0_[0]\,
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => \cnt_24_reg_n_0_[2]\,
      I4 => \cnt_24_reg_n_0_[3]\,
      O => \cnt_24[3]_i_1_n_0\
    );
\cnt_24[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000020"
    )
        port map (
      I0 => \cnt_24[4]_i_3_n_0\,
      I1 => cnt_bit_time_reg(7),
      I2 => cnt_bit_time_reg(6),
      I3 => cnt_bit_time_reg(0),
      I4 => cnt_bit_time_reg(1),
      O => \cnt_24[4]_i_1_n_0\
    );
\cnt_24[4]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"7F7F8000"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[0]\,
      I1 => \cnt_24_reg_n_0_[1]\,
      I2 => \cnt_24_reg_n_0_[2]\,
      I3 => \cnt_24_reg_n_0_[3]\,
      I4 => \cnt_24_reg_n_0_[4]\,
      O => \cnt_24[4]_i_2_n_0\
    );
\cnt_24[4]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => cnt_bit_time_reg(2),
      I1 => cnt_bit_time_reg(3),
      I2 => cnt_bit_time_reg(4),
      I3 => cnt_bit_time_reg(5),
      O => \cnt_24[4]_i_3_n_0\
    );
\cnt_24_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_24[4]_i_1_n_0\,
      D => \cnt_24[0]_i_1_n_0\,
      Q => \cnt_24_reg_n_0_[0]\,
      R => reset
    );
\cnt_24_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_24[4]_i_1_n_0\,
      D => \cnt_24[1]_i_1_n_0\,
      Q => \cnt_24_reg_n_0_[1]\,
      R => reset
    );
\cnt_24_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_24[4]_i_1_n_0\,
      D => \cnt_24[2]_i_1_n_0\,
      Q => \cnt_24_reg_n_0_[2]\,
      R => reset
    );
\cnt_24_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_24[4]_i_1_n_0\,
      D => \cnt_24[3]_i_1_n_0\,
      Q => \cnt_24_reg_n_0_[3]\,
      R => reset
    );
\cnt_24_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_24[4]_i_1_n_0\,
      D => \cnt_24[4]_i_2_n_0\,
      Q => \cnt_24_reg_n_0_[4]\,
      R => reset
    );
\cnt_400[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \cnt_400[8]_i_5_n_0\,
      I1 => \^q\(0),
      O => \cnt_400[0]_i_1_n_0\
    );
\cnt_400[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \^q\(0),
      I1 => \^cnt_400_reg[1]_0\,
      O => \cnt_400[1]_i_1_n_0\
    );
\cnt_400[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6A"
    )
        port map (
      I0 => \^cnt_400_reg[2]_0\,
      I1 => \^cnt_400_reg[1]_0\,
      I2 => \^q\(0),
      O => \cnt_400[2]_i_1_n_0\
    );
\cnt_400[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6AAA"
    )
        port map (
      I0 => \^cnt_400_reg[3]_0\,
      I1 => \^cnt_400_reg[2]_0\,
      I2 => \^q\(0),
      I3 => \^cnt_400_reg[1]_0\,
      O => \cnt_400[3]_i_1_n_0\
    );
\cnt_400[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"6AAAAAAA"
    )
        port map (
      I0 => \^cnt_400_reg[4]_0\,
      I1 => \^cnt_400_reg[3]_0\,
      I2 => \^cnt_400_reg[1]_0\,
      I3 => \^q\(0),
      I4 => \^cnt_400_reg[2]_0\,
      O => \cnt_400[4]_i_1_n_0\
    );
\cnt_400[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F8"
    )
        port map (
      I0 => \cnt_reset[8]_i_1_n_0\,
      I1 => \cnt_400[8]_i_4_n_0\,
      I2 => reset,
      O => \cnt_400[5]_i_1_n_0\
    );
\cnt_400[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6AAAAAAAAAAAAAAA"
    )
        port map (
      I0 => \^cnt_400_reg[5]_0\,
      I1 => \^cnt_400_reg[4]_0\,
      I2 => \^cnt_400_reg[2]_0\,
      I3 => \^q\(0),
      I4 => \^cnt_400_reg[1]_0\,
      I5 => \^cnt_400_reg[3]_0\,
      O => \cnt_400[5]_i_2_n_0\
    );
\cnt_400[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A2AA0800"
    )
        port map (
      I0 => \cnt_400[8]_i_5_n_0\,
      I1 => \^cnt_400_reg[5]_0\,
      I2 => \cnt_400[7]_i_2_n_0\,
      I3 => \^cnt_400_reg[4]_0\,
      I4 => \^q\(1),
      O => \cnt_400[6]_i_1_n_0\
    );
\cnt_400[7]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AA2AAAAA00800000"
    )
        port map (
      I0 => \cnt_400[8]_i_5_n_0\,
      I1 => \^q\(1),
      I2 => \^cnt_400_reg[4]_0\,
      I3 => \cnt_400[7]_i_2_n_0\,
      I4 => \^cnt_400_reg[5]_0\,
      I5 => \^q\(2),
      O => \cnt_400[7]_i_1_n_0\
    );
\cnt_400[7]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7FFF"
    )
        port map (
      I0 => \^cnt_400_reg[2]_0\,
      I1 => \^q\(0),
      I2 => \^cnt_400_reg[1]_0\,
      I3 => \^cnt_400_reg[3]_0\,
      O => \cnt_400[7]_i_2_n_0\
    );
\cnt_400[8]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFBFFFAAAAAAAA"
    )
        port map (
      I0 => reset,
      I1 => \cnt_400[8]_i_3_n_0\,
      I2 => \^q\(2),
      I3 => \^q\(3),
      I4 => \cnt_400[8]_i_4_n_0\,
      I5 => \cnt_reset[8]_i_1_n_0\,
      O => \cnt_400[8]_i_1_n_0\
    );
\cnt_400[8]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"82"
    )
        port map (
      I0 => \cnt_400[8]_i_5_n_0\,
      I1 => \cnt_400[8]_i_6_n_0\,
      I2 => \^q\(3),
      O => \cnt_400[8]_i_2_n_0\
    );
\cnt_400[8]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFD"
    )
        port map (
      I0 => \cnt_400[7]_i_2_n_0\,
      I1 => \^cnt_400_reg[5]_0\,
      I2 => \^q\(1),
      I3 => \^cnt_400_reg[4]_0\,
      O => \cnt_400[8]_i_3_n_0\
    );
\cnt_400[8]_i_4\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1000"
    )
        port map (
      I0 => \cnt_reset[0]_i_3_n_0\,
      I1 => \cnt_400[8]_i_7_n_0\,
      I2 => \cnt_reset_reg_n_0_[8]\,
      I3 => \cnt_reset_reg_n_0_[7]\,
      O => \cnt_400[8]_i_4_n_0\
    );
\cnt_400[8]_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"55555515"
    )
        port map (
      I0 => reset,
      I1 => \cnt_reset_reg_n_0_[7]\,
      I2 => \cnt_reset_reg_n_0_[8]\,
      I3 => \cnt_400[8]_i_7_n_0\,
      I4 => \cnt_reset[0]_i_3_n_0\,
      O => \cnt_400[8]_i_5_n_0\
    );
\cnt_400[8]_i_6\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F7FFFFFF"
    )
        port map (
      I0 => \^q\(1),
      I1 => \^cnt_400_reg[4]_0\,
      I2 => \cnt_400[7]_i_2_n_0\,
      I3 => \^cnt_400_reg[5]_0\,
      I4 => \^q\(2),
      O => \cnt_400[8]_i_6_n_0\
    );
\cnt_400[8]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF0707FF07"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[1]\,
      I1 => \cnt_reset_reg_n_0_[6]\,
      I2 => \cnt_reset_reg_n_0_[4]\,
      I3 => \cnt_reset_reg_n_0_[0]\,
      I4 => \cnt_reset_reg_n_0_[2]\,
      I5 => \cnt_reset_reg_n_0_[5]\,
      O => \cnt_400[8]_i_7_n_0\
    );
\cnt_400_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[0]_i_1_n_0\,
      Q => \^q\(0),
      R => '0'
    );
\cnt_400_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[1]_i_1_n_0\,
      Q => \^cnt_400_reg[1]_0\,
      R => \cnt_400[5]_i_1_n_0\
    );
\cnt_400_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[2]_i_1_n_0\,
      Q => \^cnt_400_reg[2]_0\,
      R => \cnt_400[5]_i_1_n_0\
    );
\cnt_400_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[3]_i_1_n_0\,
      Q => \^cnt_400_reg[3]_0\,
      R => \cnt_400[5]_i_1_n_0\
    );
\cnt_400_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[4]_i_1_n_0\,
      Q => \^cnt_400_reg[4]_0\,
      R => \cnt_400[5]_i_1_n_0\
    );
\cnt_400_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[5]_i_2_n_0\,
      Q => \^cnt_400_reg[5]_0\,
      R => \cnt_400[5]_i_1_n_0\
    );
\cnt_400_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[6]_i_1_n_0\,
      Q => \^q\(1),
      R => '0'
    );
\cnt_400_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[7]_i_1_n_0\,
      Q => \^q\(2),
      R => '0'
    );
\cnt_400_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_400[8]_i_1_n_0\,
      D => \cnt_400[8]_i_2_n_0\,
      Q => \^q\(3),
      R => '0'
    );
\cnt_bit_time[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => cnt_bit_time_reg(0),
      I1 => \cnt_24[4]_i_1_n_0\,
      O => p_0_in(0)
    );
\cnt_bit_time[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => cnt_bit_time_reg(0),
      I1 => cnt_bit_time_reg(1),
      O => p_0_in(1)
    );
\cnt_bit_time[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0078"
    )
        port map (
      I0 => cnt_bit_time_reg(0),
      I1 => cnt_bit_time_reg(1),
      I2 => cnt_bit_time_reg(2),
      I3 => \cnt_24[4]_i_1_n_0\,
      O => p_0_in(2)
    );
\cnt_bit_time[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00007F80"
    )
        port map (
      I0 => cnt_bit_time_reg(1),
      I1 => cnt_bit_time_reg(0),
      I2 => cnt_bit_time_reg(2),
      I3 => cnt_bit_time_reg(3),
      I4 => \cnt_24[4]_i_1_n_0\,
      O => p_0_in(3)
    );
\cnt_bit_time[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1555555540000000"
    )
        port map (
      I0 => \cnt_24[4]_i_1_n_0\,
      I1 => cnt_bit_time_reg(2),
      I2 => cnt_bit_time_reg(0),
      I3 => cnt_bit_time_reg(1),
      I4 => cnt_bit_time_reg(3),
      I5 => cnt_bit_time_reg(4),
      O => p_0_in(4)
    );
\cnt_bit_time[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5515555500400000"
    )
        port map (
      I0 => \cnt_24[4]_i_1_n_0\,
      I1 => cnt_bit_time_reg(4),
      I2 => cnt_bit_time_reg(3),
      I3 => \cnt_bit_time[5]_i_2_n_0\,
      I4 => cnt_bit_time_reg(2),
      I5 => cnt_bit_time_reg(5),
      O => \cnt_bit_time[5]_i_1_n_0\
    );
\cnt_bit_time[5]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => cnt_bit_time_reg(0),
      I1 => cnt_bit_time_reg(1),
      O => \cnt_bit_time[5]_i_2_n_0\
    );
\cnt_bit_time[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3FFBC000"
    )
        port map (
      I0 => cnt_bit_time_reg(7),
      I1 => \cnt_24[4]_i_3_n_0\,
      I2 => cnt_bit_time_reg(1),
      I3 => cnt_bit_time_reg(0),
      I4 => cnt_bit_time_reg(6),
      O => \cnt_bit_time[6]_i_1_n_0\
    );
\cnt_bit_time[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6A"
    )
        port map (
      I0 => cnt_bit_time_reg(7),
      I1 => cnt_bit_time_reg(6),
      I2 => \cnt_bit_time[7]_i_2_n_0\,
      O => p_0_in(7)
    );
\cnt_bit_time[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8000000000000000"
    )
        port map (
      I0 => cnt_bit_time_reg(5),
      I1 => cnt_bit_time_reg(4),
      I2 => cnt_bit_time_reg(3),
      I3 => cnt_bit_time_reg(2),
      I4 => cnt_bit_time_reg(1),
      I5 => cnt_bit_time_reg(0),
      O => \cnt_bit_time[7]_i_2_n_0\
    );
\cnt_bit_time_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(0),
      Q => cnt_bit_time_reg(0),
      R => reset
    );
\cnt_bit_time_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(1),
      Q => cnt_bit_time_reg(1),
      R => reset
    );
\cnt_bit_time_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(2),
      Q => cnt_bit_time_reg(2),
      R => reset
    );
\cnt_bit_time_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(3),
      Q => cnt_bit_time_reg(3),
      R => reset
    );
\cnt_bit_time_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(4),
      Q => cnt_bit_time_reg(4),
      R => reset
    );
\cnt_bit_time_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cnt_bit_time[5]_i_1_n_0\,
      Q => cnt_bit_time_reg(5),
      R => reset
    );
\cnt_bit_time_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cnt_bit_time[6]_i_1_n_0\,
      Q => cnt_bit_time_reg(6),
      R => reset
    );
\cnt_bit_time_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => p_0_in(7),
      Q => cnt_bit_time_reg(7),
      R => reset
    );
\cnt_reset[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000EEEFEFEF"
    )
        port map (
      I0 => \cnt_reset[0]_i_2_n_0\,
      I1 => \cnt_reset[0]_i_3_n_0\,
      I2 => \cnt_reset_reg_n_0_[4]\,
      I3 => \cnt_reset_reg_n_0_[6]\,
      I4 => \cnt_reset_reg_n_0_[1]\,
      I5 => \cnt_reset_reg_n_0_[0]\,
      O => p_1_in(0)
    );
\cnt_reset[0]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BF"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[5]\,
      I1 => \cnt_reset_reg_n_0_[7]\,
      I2 => \cnt_reset_reg_n_0_[8]\,
      O => \cnt_reset[0]_i_2_n_0\
    );
\cnt_reset[0]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFD"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[1]\,
      I1 => \cnt_reset_reg_n_0_[4]\,
      I2 => \cnt_reset_reg_n_0_[2]\,
      I3 => \cnt_reset_reg_n_0_[3]\,
      O => \cnt_reset[0]_i_3_n_0\
    );
\cnt_reset[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"06"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[0]\,
      I1 => \cnt_reset_reg_n_0_[1]\,
      I2 => \cnt_400[8]_i_4_n_0\,
      O => p_1_in(1)
    );
\cnt_reset[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"6A"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[2]\,
      I1 => \cnt_reset_reg_n_0_[1]\,
      I2 => \cnt_reset_reg_n_0_[0]\,
      O => p_1_in(2)
    );
\cnt_reset[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6AAA"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[3]\,
      I1 => \cnt_reset_reg_n_0_[0]\,
      I2 => \cnt_reset_reg_n_0_[1]\,
      I3 => \cnt_reset_reg_n_0_[2]\,
      O => p_1_in(3)
    );
\cnt_reset[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"6AAAAAAA"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[4]\,
      I1 => \cnt_reset_reg_n_0_[3]\,
      I2 => \cnt_reset_reg_n_0_[0]\,
      I3 => \cnt_reset_reg_n_0_[1]\,
      I4 => \cnt_reset_reg_n_0_[2]\,
      O => \cnt_reset[4]_i_1_n_0\
    );
\cnt_reset[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6AAAAAAAAAAAAAAA"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[5]\,
      I1 => \cnt_reset_reg_n_0_[3]\,
      I2 => \cnt_reset_reg_n_0_[0]\,
      I3 => \cnt_reset_reg_n_0_[1]\,
      I4 => \cnt_reset_reg_n_0_[2]\,
      I5 => \cnt_reset_reg_n_0_[4]\,
      O => p_1_in(5)
    );
\cnt_reset[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000DF20"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[5]\,
      I1 => \cnt_reset[7]_i_3_n_0\,
      I2 => \cnt_reset_reg_n_0_[4]\,
      I3 => \cnt_reset_reg_n_0_[6]\,
      I4 => \cnt_400[8]_i_4_n_0\,
      O => p_1_in(6)
    );
\cnt_reset[7]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"515555550C000000"
    )
        port map (
      I0 => \cnt_reset[7]_i_2_n_0\,
      I1 => \cnt_reset_reg_n_0_[5]\,
      I2 => \cnt_reset[7]_i_3_n_0\,
      I3 => \cnt_reset_reg_n_0_[4]\,
      I4 => \cnt_reset_reg_n_0_[6]\,
      I5 => \cnt_reset_reg_n_0_[7]\,
      O => p_1_in(7)
    );
\cnt_reset[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000020"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[8]\,
      I1 => \cnt_400[8]_i_7_n_0\,
      I2 => \cnt_reset_reg_n_0_[1]\,
      I3 => \cnt_reset_reg_n_0_[4]\,
      I4 => \cnt_reset_reg_n_0_[2]\,
      I5 => \cnt_reset_reg_n_0_[3]\,
      O => \cnt_reset[7]_i_2_n_0\
    );
\cnt_reset[7]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7FFF"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[2]\,
      I1 => \cnt_reset_reg_n_0_[1]\,
      I2 => \cnt_reset_reg_n_0_[0]\,
      I3 => \cnt_reset_reg_n_0_[3]\,
      O => \cnt_reset[7]_i_3_n_0\
    );
\cnt_reset[8]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000100000"
    )
        port map (
      I0 => cnt_bit_time_reg(1),
      I1 => cnt_bit_time_reg(0),
      I2 => cnt_bit_time_reg(6),
      I3 => cnt_bit_time_reg(7),
      I4 => \cnt_24[4]_i_3_n_0\,
      I5 => \cnt_reset[8]_i_3_n_0\,
      O => \cnt_reset[8]_i_1_n_0\
    );
\cnt_reset[8]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"A266"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[8]\,
      I1 => \cnt_reset_reg_n_0_[7]\,
      I2 => \cnt_reset[8]_i_4_n_0\,
      I3 => \cnt_reset[8]_i_5_n_0\,
      O => p_1_in(8)
    );
\cnt_reset[8]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFF7FFF"
    )
        port map (
      I0 => \cnt_24_reg_n_0_[2]\,
      I1 => \cnt_24_reg_n_0_[1]\,
      I2 => \cnt_24_reg_n_0_[0]\,
      I3 => \cnt_24_reg_n_0_[4]\,
      I4 => \cnt_24_reg_n_0_[3]\,
      O => \cnt_reset[8]_i_3_n_0\
    );
\cnt_reset[8]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFEFF"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[3]\,
      I1 => \cnt_reset_reg_n_0_[2]\,
      I2 => \cnt_reset_reg_n_0_[4]\,
      I3 => \cnt_reset_reg_n_0_[1]\,
      I4 => \cnt_400[8]_i_7_n_0\,
      O => \cnt_reset[8]_i_4_n_0\
    );
\cnt_reset[8]_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"DFFF"
    )
        port map (
      I0 => \cnt_reset_reg_n_0_[5]\,
      I1 => \cnt_reset[7]_i_3_n_0\,
      I2 => \cnt_reset_reg_n_0_[4]\,
      I3 => \cnt_reset_reg_n_0_[6]\,
      O => \cnt_reset[8]_i_5_n_0\
    );
\cnt_reset_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(0),
      Q => \cnt_reset_reg_n_0_[0]\,
      R => reset
    );
\cnt_reset_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(1),
      Q => \cnt_reset_reg_n_0_[1]\,
      R => reset
    );
\cnt_reset_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(2),
      Q => \cnt_reset_reg_n_0_[2]\,
      R => reset
    );
\cnt_reset_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(3),
      Q => \cnt_reset_reg_n_0_[3]\,
      R => reset
    );
\cnt_reset_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => \cnt_reset[4]_i_1_n_0\,
      Q => \cnt_reset_reg_n_0_[4]\,
      R => reset
    );
\cnt_reset_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(5),
      Q => \cnt_reset_reg_n_0_[5]\,
      R => reset
    );
\cnt_reset_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(6),
      Q => \cnt_reset_reg_n_0_[6]\,
      R => reset
    );
\cnt_reset_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(7),
      Q => \cnt_reset_reg_n_0_[7]\,
      R => reset
    );
\cnt_reset_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => \cnt_reset[8]_i_1_n_0\,
      D => p_1_in(8),
      Q => \cnt_reset_reg_n_0_[8]\,
      R => reset
    );
ser_data_out_en_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"54005050"
    )
        port map (
      I0 => reset,
      I1 => \cnt_400[8]_i_4_n_0\,
      I2 => \^ser_data_out_en_reg_0\,
      I3 => ser_data_out_en_i_2_n_0,
      I4 => \cnt_reset[8]_i_1_n_0\,
      O => ser_data_out_en_i_1_n_0
    );
ser_data_out_en_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFEFFFFFFFFFFFF"
    )
        port map (
      I0 => \cnt_reset[7]_i_3_n_0\,
      I1 => \cnt_reset_reg_n_0_[4]\,
      I2 => \cnt_reset_reg_n_0_[6]\,
      I3 => \cnt_reset_reg_n_0_[5]\,
      I4 => \cnt_reset_reg_n_0_[7]\,
      I5 => \cnt_reset_reg_n_0_[8]\,
      O => ser_data_out_en_i_2_n_0
    );
ser_data_out_en_reg: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => ser_data_out_en_i_1_n_0,
      Q => \^ser_data_out_en_reg_0\,
      R => '0'
    );
ser_data_out_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABFBAAAAA808AAAA"
    )
        port map (
      I0 => ser_data_out_i_2_n_0,
      I1 => ser_data_out_i_3_n_0,
      I2 => ser_data_out_i_4_n_0,
      I3 => ser_data_out_i_5_n_0,
      I4 => \^ser_data_out_en_reg_0\,
      I5 => \^ser_data_out\,
      O => ser_data_out_i_1_n_0
    );
ser_data_out_i_10: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => cnt_bit_time_reg(6),
      I1 => cnt_bit_time_reg(7),
      I2 => cnt_bit_time_reg(2),
      O => ser_data_out_i_10_n_0
    );
ser_data_out_i_11: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(20),
      I1 => data(21),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(22),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(23),
      O => ser_data_out_i_11_n_0
    );
ser_data_out_i_12: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(16),
      I1 => data(17),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(18),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(19),
      O => ser_data_out_i_12_n_0
    );
ser_data_out_i_13: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(12),
      I1 => data(13),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(14),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(15),
      O => ser_data_out_i_13_n_0
    );
ser_data_out_i_14: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(8),
      I1 => data(9),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(10),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(11),
      O => ser_data_out_i_14_n_0
    );
ser_data_out_i_15: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(4),
      I1 => data(5),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(6),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(7),
      O => ser_data_out_i_15_n_0
    );
ser_data_out_i_16: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => data(0),
      I1 => data(1),
      I2 => \cnt_24_reg_n_0_[1]\,
      I3 => data(2),
      I4 => \cnt_24_reg_n_0_[0]\,
      I5 => data(3),
      O => ser_data_out_i_16_n_0
    );
ser_data_out_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000020"
    )
        port map (
      I0 => ser_data_out_i_6_n_0,
      I1 => cnt_bit_time_reg(4),
      I2 => \^ser_data_out_en_reg_0\,
      I3 => cnt_bit_time_reg(3),
      I4 => cnt_bit_time_reg(1),
      I5 => cnt_bit_time_reg(0),
      O => ser_data_out_i_2_n_0
    );
ser_data_out_i_3: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000082"
    )
        port map (
      I0 => ser_data_out_i_6_n_0,
      I1 => cnt_bit_time_reg(3),
      I2 => cnt_bit_time_reg(4),
      I3 => cnt_bit_time_reg(0),
      I4 => cnt_bit_time_reg(1),
      O => ser_data_out_i_3_n_0
    );
ser_data_out_i_4: unisim.vcomponents.LUT5
    generic map(
      INIT => X"BEB28E82"
    )
        port map (
      I0 => ser_data_out_reg_i_7_n_0,
      I1 => \cnt_24_reg_n_0_[3]\,
      I2 => \cnt_24_reg_n_0_[4]\,
      I3 => ser_data_out_reg_i_8_n_0,
      I4 => ser_data_out_reg_i_9_n_0,
      O => ser_data_out_i_4_n_0
    );
ser_data_out_i_5: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000080000001"
    )
        port map (
      I0 => cnt_bit_time_reg(4),
      I1 => cnt_bit_time_reg(5),
      I2 => cnt_bit_time_reg(3),
      I3 => cnt_bit_time_reg(0),
      I4 => cnt_bit_time_reg(1),
      I5 => ser_data_out_i_10_n_0,
      O => ser_data_out_i_5_n_0
    );
ser_data_out_i_6: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0001"
    )
        port map (
      I0 => cnt_bit_time_reg(5),
      I1 => cnt_bit_time_reg(2),
      I2 => cnt_bit_time_reg(7),
      I3 => cnt_bit_time_reg(6),
      O => ser_data_out_i_6_n_0
    );
ser_data_out_reg: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => ser_data_out_i_1_n_0,
      Q => \^ser_data_out\,
      R => reset
    );
ser_data_out_reg_i_7: unisim.vcomponents.MUXF7
     port map (
      I0 => ser_data_out_i_11_n_0,
      I1 => ser_data_out_i_12_n_0,
      O => ser_data_out_reg_i_7_n_0,
      S => \cnt_24_reg_n_0_[2]\
    );
ser_data_out_reg_i_8: unisim.vcomponents.MUXF7
     port map (
      I0 => ser_data_out_i_13_n_0,
      I1 => ser_data_out_i_14_n_0,
      O => ser_data_out_reg_i_8_n_0,
      S => \cnt_24_reg_n_0_[2]\
    );
ser_data_out_reg_i_9: unisim.vcomponents.MUXF7
     port map (
      I0 => ser_data_out_i_15_n_0,
      I1 => ser_data_out_i_16_n_0,
      O => ser_data_out_reg_i_9_n_0,
      S => \cnt_24_reg_n_0_[2]\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    adr_out : out STD_LOGIC_VECTOR ( 8 downto 0 );
    data : in STD_LOGIC_VECTOR ( 23 downto 0 );
    ser_data_out : out STD_LOGIC;
    ser_data_out_en_disp : out STD_LOGIC;
    clk : in STD_LOGIC;
    reset : in STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "design_led_appl_led_driver_0_0,led_driver,{}";
  attribute downgradeipidentifiedwarnings : string;
  attribute downgradeipidentifiedwarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute ip_definition_source : string;
  attribute ip_definition_source of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "module_ref";
  attribute x_core_info : string;
  attribute x_core_info of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "led_driver,Vivado 2019.1";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  attribute x_interface_info : string;
  attribute x_interface_info of clk : signal is "xilinx.com:signal:clock:1.0 clk CLK";
  attribute x_interface_parameter : string;
  attribute x_interface_parameter of clk : signal is "XIL_INTERFACENAME clk, ASSOCIATED_RESET reset, FREQ_HZ 100000000, PHASE 0.0, CLK_DOMAIN /clk_wiz_1_clk_out1, INSERT_VIP 0";
  attribute x_interface_info of reset : signal is "xilinx.com:signal:reset:1.0 reset RST";
  attribute x_interface_parameter of reset : signal is "XIL_INTERFACENAME reset, POLARITY ACTIVE_HIGH, INSERT_VIP 0";
begin
U0: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_led_driver
     port map (
      Q(3 downto 1) => adr_out(8 downto 6),
      Q(0) => adr_out(0),
      clk => clk,
      \cnt_400_reg[1]_0\ => adr_out(1),
      \cnt_400_reg[2]_0\ => adr_out(2),
      \cnt_400_reg[3]_0\ => adr_out(3),
      \cnt_400_reg[4]_0\ => adr_out(4),
      \cnt_400_reg[5]_0\ => adr_out(5),
      data(23 downto 0) => data(23 downto 0),
      reset => reset,
      ser_data_out => ser_data_out,
      ser_data_out_en_reg_0 => ser_data_out_en_disp
    );
end STRUCTURE;
