----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05.06.2020 10:37:09
-- Design Name: 
-- Module Name: clock_div_tb - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity clock_div_tb is
--  Port ( );
end clock_div_tb;

architecture Behavioral of clock_div_tb is

    component clock_div is 
    Port ( clk : in STD_LOGIC;
           reset : in STD_LOGIC;
           clk_10M : out STD_LOGIC);
    end component;
        
    signal clk, reset, clk_10M  : STD_LOGIC;
    constant period : time := 10 ns;


begin
    dut: clock_div port map (clk => clk, reset =>reset, clk_10M =>clk_10M);
    process begin
        clk <= '0'; wait for period/2;
        clk <= '1'; wait for period/2;
    end process;
    reset <= '1', '0' after period*3;
end Behavioral;
