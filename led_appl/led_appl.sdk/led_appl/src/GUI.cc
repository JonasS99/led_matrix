/*
 * GUI.cc
 *
 *  Created on: 15.10.2020
 *      Author: Keller
 */

#include "GUI.h"
#include <mtds.h>
#include <MyDisp.h>

void GUI_EraseMenuButtons(void);
void GUI_EnableMenuButtons(void);
void GUI_DisableMenuButtons(void);


void GUI_Init()
{
	mydisp.begin();
	mydisp.createButton(BTN_ID_STATIC_LED,"Menu/Tetris.bmp", 10, 90);
	mydisp.createButton(BTN_ID_TETRIS,"Menu/LED_Gelb.bmp", 125, 90);
	mydisp.createButton(BTN_ID_DYNAMIC_LED,"Menu/LED_Gelb.bmp", 10, 205);
	mydisp.createButton(BTN_ID_WEL_FPGA,"Menu/LED_Rot.bmp", 125, 205);
}

void GUI_MainFunction()
{
	mydisp.checkTouch();
		static gui_fsm_t gui_fsm = FSM_IDLE;

		switch(gui_fsm)
		{
			case FSM_IDLE:
			{
				GUI_EnableMenuButtons();
				gui_fsm = FSM_MAIN_DISP;
				break;

			}

			case FSM_MAIN_DISP:
			{
				mydisp.drawImage("Menu/Menu.bmp", 0, 0);

				if (mydisp.isTouched(BTN_ID_STATIC_LED))
				{
					/* Button is pressed */
					GUI_EraseMenuButtons();
					GUI_DisableMenuButtons();
					mydisp.clearDisplay(clrBlack); /* Erase */
					mydisp.enableButton(BTN_ID_TETRIS, true);
					gui_fsm = FSM_STATIC_LED;
				}
				else
				{
					mydisp.drawButton(BTN_ID_STATIC_LED, BUTTON_UP);
				}
				mydisp.drawButton(BTN_ID_STATIC_LED, mydisp.isTouched(BTN_ID_STATIC_LED) ? BUTTON_DOWN : BUTTON_UP);
			    mydisp.drawButton(BTN_ID_TETRIS, mydisp.isTouched(BTN_ID_TETRIS) ? BUTTON_DOWN : BUTTON_UP);
			    mydisp.drawButton(BTN_ID_DYNAMIC_LED, mydisp.isTouched(BTN_ID_DYNAMIC_LED) ? BUTTON_DOWN : BUTTON_UP);
			    mydisp.drawButton(BTN_ID_WEL_FPGA, mydisp.isTouched(BTN_ID_WEL_FPGA) ? BUTTON_DOWN : BUTTON_UP);
				break;
			}

			case FSM_STATIC_LED:
			{
				mydisp.drawButton(BTN_ID_TETRIS, mydisp.isTouched(1) ? BUTTON_DOWN : BUTTON_UP);
				break;


			}

		}


}

void GUI_EraseMenuButtons()
{
	mydisp.drawButton(BTN_ID_STATIC_LED, BUTTON_ERASE);
	mydisp.drawButton(BTN_ID_TETRIS, BUTTON_ERASE);
	mydisp.drawButton(BTN_ID_DYNAMIC_LED, BUTTON_ERASE);
	mydisp.drawButton(BTN_ID_WEL_FPGA, BUTTON_ERASE);
}

void GUI_EnableMenuButtons(void)
{
	mydisp.enableButton(BTN_ID_STATIC_LED, true);
	mydisp.enableButton(BTN_ID_TETRIS, true);
	mydisp.enableButton(BTN_ID_DYNAMIC_LED, true);
	mydisp.enableButton(BTN_ID_WEL_FPGA, true);
}

void GUI_DisableMenuButtons(void)
{
	mydisp.enableButton(BTN_ID_STATIC_LED, false);
	mydisp.enableButton(BTN_ID_TETRIS, false);
	mydisp.enableButton(BTN_ID_DYNAMIC_LED, false);
	mydisp.enableButton(BTN_ID_WEL_FPGA, false);
}






