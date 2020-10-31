----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.09.2020 11:42:16
-- Design Name: 
-- Module Name: vmodtft_driver - Behavioral
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

entity vmodtft_driver is
 Port (    clk: in STD_LOGIC;
           reset: in STD_LOGIC;
           TFT_B: out STD_LOGIC_VECTOR(7 downto 0);
           TFT_R: out STD_LOGIC_VECTOR(7 downto 0);
           TFT_G: out STD_LOGIC_VECTOR(7 downto 0);
           TFT_CLK: out STD_LOGIC;
           TFT_EN: out STD_LOGIC;
           TFT_DISP: out STD_LOGIC;
           LED_EN: out STD_LOGIC;
           TFT_DE: out STD_LOGIC            
           );
end vmodtft_driver;

architecture Behavioral of vmodtft_driver is
    type state_t is (IDLE,POWER_UP_BEGIN, POWER_UP_MIDDLE,POWER_UP_END,ACTIVE);
    signal state: state_t;
    signal t1_cnt: unsigned(16 downto 0); -- 17 Bit for 1ms-> 100000 clk cylces (100000*10ns)
    signal t3_cnt: unsigned(23 downto 0); -- 24 Bit for 160ms-> 16000000 clk cylces (16000000*10ns)
    signal t_cnt: unsigned(23 downto 0); -- undefined time
    signal t4_cnt: unsigned(19 downto 0); -- 20 Bit for 100ms-> 10000000 clk cylces (10000000*10ns)
    

begin


process(clk) begin
    if rising_edge(clk) then
        if reset = '1' then
          state <= IDLE;  
          t1_cnt <= (others=>'0');
          t3_cnt <= (others=>'0');
        else
            case state is
                when IDLE =>
                    state <= POWER_UP_BEGIN;
                 
                when POWER_UP_BEGIN =>
                    TFT_EN <= '1'; 
                    -- t1:
                    if t1_cnt < 100000 then
                        t1_cnt <= t1_cnt + 1; 
                    else
                        --t2 = 0ms
                        --t3:
                        TFT_DISP<= '1';
                        t3_cnt <= t3_cnt + 1;
                        if t3_cnt = 16000000 then
                            state <= POWER_UP_MIDDLE;
                            t1_cnt <= (others=>'0');
                            t3_cnt <= (others=>'0');
                            t4_cnt <= (others=>'0');
                            t_cnt <= (others=>'0');
                        end if;     
                    end if;
                    
                when POWER_UP_MIDDLE =>
                    -- generate pwm for tft backlight pin led enable
                    LED_EN <= '1';
                    t_cnt <= t_cnt + 1;
                    if t_cnt = 100000 then
                        state <= POWER_UP_END;
                        t_cnt <= (others=>'0');
                    end if;
                    
                when POWER_UP_END =>
                    -- t3:
                    if t3_cnt < 16000000 then
                        t3_cnt <= t3_cnt + 1; 
                    else
                        --t2 = 0ms
                        --t1:
                        TFT_DISP <= '0';
                        
                        if t1_cnt < 100000 then
                            t1_cnt <= t1_cnt + 1;
                        else
                            TFT_EN <= '0';
                            t4_cnt <= t4_cnt + 1;                            
                            if t4_cnt = 1000000 then 
                                state <= ACTIVE;
                                t1_cnt <= (others=>'0');
                                t3_cnt <= (others=>'0');
                                t4_cnt <= (others=>'0');
                                t_cnt <= (others=>'0');
                            end if;
                        end if;     
                    end if;
                
                when ACTIVE =>
                    TFT_EN <= '1';
                    
                
                   
                    
  
            end case;
        end if;
    end if;
end process;


end Behavioral;
