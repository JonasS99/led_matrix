--Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
--Date        : Thu Oct 29 09:15:31 2020
--Host        : DESKTOP-M2MR233 running 64-bit major release  (build 9200)
--Command     : generate_target design_led_appl_wrapper.bd
--Design      : design_led_appl_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_led_appl_wrapper is
  port (
    MTDS_SPI_Out_io0_io : inout STD_LOGIC;
    MTDS_SPI_Out_io1_io : inout STD_LOGIC;
    MTDS_SPI_Out_sck_io : inout STD_LOGIC;
    MTDS_SPI_Out_ss_io : inout STD_LOGIC;
    clk_100MHz : in STD_LOGIC;
    reset_rtl_0 : in STD_LOGIC;
    ser_data_out : out STD_LOGIC;
    ser_data_out_en_disp : out STD_LOGIC;
    uart_rtl_0_rxd : in STD_LOGIC;
    uart_rtl_0_txd : out STD_LOGIC
  );
end design_led_appl_wrapper;

architecture STRUCTURE of design_led_appl_wrapper is
  component design_led_appl is
  port (
    clk_100MHz : in STD_LOGIC;
    reset_rtl_0 : in STD_LOGIC;
    ser_data_out : out STD_LOGIC;
    ser_data_out_en_disp : out STD_LOGIC;
    MTDS_SPI_Out_sck_t : out STD_LOGIC;
    MTDS_SPI_Out_io1_o : out STD_LOGIC;
    MTDS_SPI_Out_ss_t : out STD_LOGIC;
    MTDS_SPI_Out_io0_o : out STD_LOGIC;
    MTDS_SPI_Out_sck_i : in STD_LOGIC;
    MTDS_SPI_Out_ss_o : out STD_LOGIC;
    MTDS_SPI_Out_io0_t : out STD_LOGIC;
    MTDS_SPI_Out_io1_t : out STD_LOGIC;
    MTDS_SPI_Out_sck_o : out STD_LOGIC;
    MTDS_SPI_Out_ss_i : in STD_LOGIC;
    MTDS_SPI_Out_io1_i : in STD_LOGIC;
    MTDS_SPI_Out_io0_i : in STD_LOGIC;
    uart_rtl_0_rxd : in STD_LOGIC;
    uart_rtl_0_txd : out STD_LOGIC
  );
  end component design_led_appl;
  component IOBUF is
  port (
    I : in STD_LOGIC;
    O : out STD_LOGIC;
    T : in STD_LOGIC;
    IO : inout STD_LOGIC
  );
  end component IOBUF;
  signal MTDS_SPI_Out_io0_i : STD_LOGIC;
  signal MTDS_SPI_Out_io0_o : STD_LOGIC;
  signal MTDS_SPI_Out_io0_t : STD_LOGIC;
  signal MTDS_SPI_Out_io1_i : STD_LOGIC;
  signal MTDS_SPI_Out_io1_o : STD_LOGIC;
  signal MTDS_SPI_Out_io1_t : STD_LOGIC;
  signal MTDS_SPI_Out_sck_i : STD_LOGIC;
  signal MTDS_SPI_Out_sck_o : STD_LOGIC;
  signal MTDS_SPI_Out_sck_t : STD_LOGIC;
  signal MTDS_SPI_Out_ss_i : STD_LOGIC;
  signal MTDS_SPI_Out_ss_o : STD_LOGIC;
  signal MTDS_SPI_Out_ss_t : STD_LOGIC;
begin
MTDS_SPI_Out_io0_iobuf: component IOBUF
     port map (
      I => MTDS_SPI_Out_io0_o,
      IO => MTDS_SPI_Out_io0_io,
      O => MTDS_SPI_Out_io0_i,
      T => MTDS_SPI_Out_io0_t
    );
MTDS_SPI_Out_io1_iobuf: component IOBUF
     port map (
      I => MTDS_SPI_Out_io1_o,
      IO => MTDS_SPI_Out_io1_io,
      O => MTDS_SPI_Out_io1_i,
      T => MTDS_SPI_Out_io1_t
    );
MTDS_SPI_Out_sck_iobuf: component IOBUF
     port map (
      I => MTDS_SPI_Out_sck_o,
      IO => MTDS_SPI_Out_sck_io,
      O => MTDS_SPI_Out_sck_i,
      T => MTDS_SPI_Out_sck_t
    );
MTDS_SPI_Out_ss_iobuf: component IOBUF
     port map (
      I => MTDS_SPI_Out_ss_o,
      IO => MTDS_SPI_Out_ss_io,
      O => MTDS_SPI_Out_ss_i,
      T => MTDS_SPI_Out_ss_t
    );
design_led_appl_i: component design_led_appl
     port map (
      MTDS_SPI_Out_io0_i => MTDS_SPI_Out_io0_i,
      MTDS_SPI_Out_io0_o => MTDS_SPI_Out_io0_o,
      MTDS_SPI_Out_io0_t => MTDS_SPI_Out_io0_t,
      MTDS_SPI_Out_io1_i => MTDS_SPI_Out_io1_i,
      MTDS_SPI_Out_io1_o => MTDS_SPI_Out_io1_o,
      MTDS_SPI_Out_io1_t => MTDS_SPI_Out_io1_t,
      MTDS_SPI_Out_sck_i => MTDS_SPI_Out_sck_i,
      MTDS_SPI_Out_sck_o => MTDS_SPI_Out_sck_o,
      MTDS_SPI_Out_sck_t => MTDS_SPI_Out_sck_t,
      MTDS_SPI_Out_ss_i => MTDS_SPI_Out_ss_i,
      MTDS_SPI_Out_ss_o => MTDS_SPI_Out_ss_o,
      MTDS_SPI_Out_ss_t => MTDS_SPI_Out_ss_t,
      clk_100MHz => clk_100MHz,
      reset_rtl_0 => reset_rtl_0,
      ser_data_out => ser_data_out,
      ser_data_out_en_disp => ser_data_out_en_disp,
      uart_rtl_0_rxd => uart_rtl_0_rxd,
      uart_rtl_0_txd => uart_rtl_0_txd
    );
end STRUCTURE;
