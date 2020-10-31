----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 19.06.2020 09:39:53
-- Design Name: 
-- Module Name: led_ram - Behavioral
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

entity led_ram is
    Port ( data_in_mb : in STD_LOGIC_VECTOR (23 downto 0);
           data_valid_mb : in STD_LOGIC;
           clk : in STD_LOGIC;
           reset: in STD_LOGIC;
           adr_in_mb : in unsigned (8 downto 0);
           adr_in_led : in unsigned (8 downto 0);
           data_out_led : out STD_LOGIC_VECTOR (23 downto 0)
           );
end led_ram;

architecture Behavioral of led_ram is
    type RAM_type is array (0 to 399) of std_logic_vector(23 downto 0); -- 100 ram elements with 24 bit
    signal RAM : RAM_type;
begin

 process(clk) begin
    if rising_edge(clk) then
         if data_valid_mb = '1' then
            RAM(to_integer(adr_in_mb)) <= data_in_mb; -- synchronous write data into ram
         end if;
      end if;
 end process;

data_out_led <= RAM(to_integer(adr_in_led)); -- asynchronous read data 
end Behavioral;
