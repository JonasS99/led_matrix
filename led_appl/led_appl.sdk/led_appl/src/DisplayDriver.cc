/*
 * DisplayDriver.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "DisplayDriver.h" /* Inclcude own header file */
#include <mtds.h>
#include <MyDisp.h>

void DisplayDriver_Init()
{
	mydisp.begin();

	/* Create all used buttons */
	mydisp.createButton(BTN_ID_STATIC_LED,(char *)"Menu/LED_Gelb.bmp", 10, 90);
	mydisp.createButton(BTN_ID_TETRIS,(char *)"Menu/Tetris.bmp", 125, 90);
	mydisp.createButton(BTN_ID_DYNAMIC_LED,(char *)"Menu/LED_Gruen.bmp", 10, 205);
	mydisp.createButton(BTN_ID_WEL_FPGA,(char *)"Menu/FPGA.bmp", 125, 205);

	mydisp.createButton(BTN_ID_REGULATOR,(char *)"Menu/Regulator.bmp",0,82);
	mydisp.createButton(BTN_ID_FORMS,(char *)"Menu/From.bmp",0,(82+99));

	mydisp.createButton(BTN_ID_BACK,(char *)"Menu/back2.bmp", 0,(82+99+99));
}

void DisplayDriver_HomeDraw()
{
	mydisp.drawImage((char *)"Menu/Home.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_STATIC_LED, BUTTON_UP);
	mydisp.drawButton(BTN_ID_TETRIS, BUTTON_UP);
	mydisp.drawButton(BTN_ID_DYNAMIC_LED,BUTTON_UP);
	mydisp.drawButton(BTN_ID_WEL_FPGA, BUTTON_UP);
}

button_id_t DispalyDriver_CheckButtons(void)
{
	mydisp.checkTouch();
	button_id_t button_touched = BTN_ID_NO_BTN;
	for (u8 i = 0; i< NUM_BUTTONS_USED; i++)
	{
		if (mydisp.isTouched(i) == BUTTON_DOWN)
		{
			button_touched = (button_id_t)i;
		}
	}
	return button_touched;
}

void DisplayDriver_HomeEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_STATIC_LED, ctrl);
	mydisp.enableButton(BTN_ID_TETRIS, ctrl);
	mydisp.enableButton(BTN_ID_DYNAMIC_LED, ctrl);
	mydisp.enableButton(BTN_ID_WEL_FPGA, ctrl);
}

void DisplayDriver_ClearDisp()
{
	mydisp.clearDisplay(clrBlack); /* Erase */
}

void DisplayDriver_StaticLedDraw()
{
	mydisp.drawImage((char *)"Menu/Static_Led.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_REGULATOR, BUTTON_UP);
	mydisp.drawButton(BTN_ID_FORMS,BUTTON_UP);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_StaticLedEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_REGULATOR, ctrl);
	mydisp.enableButton(BTN_ID_FORMS, ctrl);
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

