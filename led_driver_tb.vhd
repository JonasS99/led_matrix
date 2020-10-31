----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05.06.2020 11:44:36
-- Design Name: 
-- Module Name: led_driver_tb - Behavioral
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

entity led_driver_tb is
--  Port ( );
end led_driver_tb;

architecture Behavioral of led_driver_tb is
component led_driver is 
    Port ( adr_out : out unsigned (7 downto 0);
           data : in STD_LOGIC_VECTOR (23 downto 0);
           ser_data_out : out STD_LOGIC;
           clk: in STD_LOGIC;
           reset: in STD_LOGIC);
    end component;
    
        
    signal clk, reset, ser_data_out: STD_LOGIC;
    signal data : STD_LOGIC_VECTOR(23 downto 0);
    signal adr_out : unsigned (7 downto 0);
    constant period : time := 10 ns;

begin
    dut: led_driver port map (clk => clk, reset =>reset, ser_data_out =>ser_data_out, adr_out =>adr_out,data=>data);
    data <= "000011110000111100001111";
    process begin
        clk <= '0'; wait for period/2;
        clk <= '1'; wait for period/2;
    end process;
    
    reset <= '1', '0' after period*3;


end Behavioral;
