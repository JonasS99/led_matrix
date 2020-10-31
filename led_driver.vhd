----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05.06.2020 09:52:11
-- Design Name: 
-- Module Name: led_driver - Behavioral
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

entity led_driver is
    Port ( adr_out : out unsigned (8 downto 0);
           data : in STD_LOGIC_VECTOR (23 downto 0);
           ser_data_out : out STD_LOGIC;
           ser_data_out_en_disp : out STD_LOGIC;
           clk: in STD_LOGIC;
           reset: in STD_LOGIC);
end led_driver;

architecture Behavioral of led_driver is
signal cnt_bit_time : unsigned (7 downto 0); -- to count time for low and high time one bit
signal cnt_24: unsigned(4 downto 0); -- to count  24 bits in one ram element
signal cnt_400: unsigned(8 downto 0); -- to run through led ram
signal ser_data_out_en: STD_LOGIC;
signal cnt_reset: unsigned(8 downto 0); -- for reset time



begin

process(clk) begin
    if rising_edge(clk) then
        if reset = '1' then
            cnt_bit_time <= (others => '0');
            cnt_24 <= (others => '0');
            cnt_400 <= (others => '0');
            ser_data_out <=  '0';
            adr_out <= (others => '0');
            ser_data_out_en <= '0';
            cnt_reset <= (others=>'0');
        else
            cnt_bit_time <= cnt_bit_time + 1;  -- increment cnt_bit_time for one bit time
            if cnt_bit_time = 124 then -- 125 * 10 ns = 1,25 탎
                cnt_bit_time <= (others => '0'); -- reset cnt_bit_time
                cnt_24 <= cnt_24 +1; -- increment cnt_24 for 24 bit rgb data values
                if cnt_24 = 23 then -- 24 * 1,25 탎 = 30 탎
                    cnt_24 <= (others => '0'); -- reset cnt_24
                    if cnt_400 < 399 then 
                        cnt_400 <= cnt_400+1; -- increment cnt_400 for 400 LEDs
                    end if; 
                    cnt_reset <= cnt_reset + 1; -- increment cnt_reset for reset code
                    if cnt_reset = 399 then
                        ser_data_out_en <= '0'; -- reset ser_data_out_en 
                    elsif cnt_reset = 450 then
                        cnt_400 <= (others => '0'); -- reset cnt_100
                        cnt_reset <= (others => '0'); -- reseet cnt_reset
                        ser_data_out_en <= '1'; -- restart data stream
                    end if;
                end if;
            end if;
            
            if ser_data_out_en = '1' then
                -- data(to_integer(23-cnt_24))  to send msb first
                if data(to_integer(23-cnt_24)) = '0' then  -- send 0
                    if cnt_bit_time = 0 then -- high time for 0 -> 250 ns
                        ser_data_out <=  '1'; 
                    elsif cnt_bit_time = 24 then -- low time for 0 -> 1 탎
                        ser_data_out <=  '0'; 
                    end if;
                else                    -- send 1
                    if cnt_bit_time = 0 then -- high time for 1 -> 600 ns
                        ser_data_out <=  '1';
                    elsif cnt_bit_time = 59 then -- low time for 1 -> 650 ns
                        ser_data_out <=  '0';
                    end if;          
                end if;
             else
                ser_data_out <=  '0'; -- low for reset
             end if;
            end if;
        end if;
    adr_out <= cnt_400;        
end process;
ser_data_out_en_disp <= ser_data_out_en;
end Behavioral;
