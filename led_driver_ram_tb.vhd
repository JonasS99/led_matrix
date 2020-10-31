----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 26.06.2020 10:52:10
-- Design Name: 
-- Module Name: led_driver_ram_tb - Behavioral
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

entity led_driver_ram_tb is
--  Port ( );
end led_driver_ram_tb;

architecture Behavioral of led_driver_ram_tb is
component led_driver is 
    Port ( adr_out : out unsigned (7 downto 0);
           data : in STD_LOGIC_VECTOR (23 downto 0);
           ser_data_out : out STD_LOGIC;
           clk: in STD_LOGIC;
           reset: in STD_LOGIC);
    end component;
    
component led_ram is 
    Port ( data_in_mb : in STD_LOGIC_VECTOR (23 downto 0);
           data_valid_mb : in STD_LOGIC;
           clk : in STD_LOGIC;
           reset: in STD_LOGIC;
           adr_in_mb : in unsigned (7 downto 0);
           adr_in_led : in unsigned (7 downto 0);
           data_out_led : out STD_LOGIC_VECTOR (23 downto 0)
           );
    end component;
    
        
    signal clk, reset, ser_data_out: STD_LOGIC;
    signal data : STD_LOGIC_VECTOR(23 downto 0);
    signal adr_out : unsigned (7 downto 0);
    
    signal data_in_mb : STD_LOGIC_VECTOR (23 downto 0);
    signal data_valid_mb : STD_LOGIC;
    signal adr_in_mb : unsigned (7 downto 0);
    signal adr_in_led : unsigned (7 downto 0);
    signal data_out_led : STD_LOGIC_VECTOR (23 downto 0);
    
    constant period : time := 10 ns;
    constant data_test :STD_LOGIC_VECTOR(23 downto 0) := "101011110000111100001111";
    

begin
    
    dut1: led_driver port map (clk => clk, reset =>reset, ser_data_out =>ser_data_out, adr_out =>adr_out ,data=>data);
    dut2: led_ram port map(data_in_mb => data_in_mb, data_valid_mb => data_valid_mb, clk => clk, reset => reset, adr_in_mb => adr_in_mb, adr_in_led => adr_in_led, data_out_led=> data_out_led);
    process begin
        clk <= '0'; wait for period/2;
        clk <= '1'; wait for period/2;
    end process;
    adr_in_led <= adr_out;
    data <= data_out_led;
    process begin 
    for i in 0 to 99 loop
        wait until clk  = '1';
         data_valid_mb <= '1';
         data_in_mb <=  data_test; 
         adr_in_mb <= to_unsigned(i,adr_in_mb'length);
         wait until clk  = '0';
    end loop;

    end process;
    
    
    
    reset <= '1', '0' after period*3;
    

end Behavioral;
