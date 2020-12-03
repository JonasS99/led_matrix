/*
 * DisplayDriver.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "DisplayDriver.h" /* Include own header file */
#include <mtds.h>
#include <MyDisp.h>

void DisplayDriver_Init()
{
	mydisp.begin();

	/* Create all used buttons */
	mydisp.createButton(BTN_ID_STATIC_LED,(char *)"Static.bmp", 10, 90);
	mydisp.createButton(BTN_ID_TETRIS,(char *)"Tetris.bmp", 125, 90);
	mydisp.createButton(BTN_ID_DYNAMIC_LED,(char *)"Dynamic.bmp", 10, 205);
	mydisp.createButton(BTN_ID_WEL_FPGA,(char *)"FPGA.bmp", 125, 205);

	mydisp.createButton(BTN_ID_REGULATOR,(char *)"Regulator.bmp",0,82);
	mydisp.createButton(BTN_ID_FORMS,(char *)"Form.bmp",0,(82+99));

	mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

	mydisp.createButton(BTN_ID_HARDDROP,(char *)"harddrop.bmp", 0,(82+99+99));
	mydisp.createButton(BTN_ID_LEFT,(char *)"left.bmp", 0,(82+99+99));
	mydisp.createButton(BTN_ID_RIGHT,(char *)"right.bmp", 0,(82+99+99));
	mydisp.createButton(BTN_ID_ROTATE,(char *)"rotate.bmp", 0,(82+99+99));
}

void DisplayDriver_HomeDraw()
{
	mydisp.drawImage((char *)"Home.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_STATIC_LED, BUTTON_UP);
	mydisp.drawButton(BTN_ID_TETRIS, BUTTON_UP);
	mydisp.drawButton(BTN_ID_DYNAMIC_LED,BUTTON_UP);
	mydisp.drawButton(BTN_ID_WEL_FPGA, BUTTON_UP);
}

void DisplayDriver_StaticLedDraw()
{
	mydisp.drawImage((char *)"Static_Led.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_REGULATOR, BUTTON_UP);
	mydisp.drawButton(BTN_ID_FORMS,BUTTON_UP);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_TetrisDraw()
{
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_DynamicLedDraw()
{
	mydisp.drawImage((char *)"Dynamic_LED.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_FPGADraw()
{
	mydisp.drawImage((char *)"Troll.bmp", 0, 20);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_FormDraw()
{
	mydisp.drawImage((char *)"Form.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_RegulatorDraw()
{
	mydisp.drawImage((char *)"Regulator.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_HomeEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_STATIC_LED, ctrl);
	mydisp.enableButton(BTN_ID_TETRIS, ctrl);
	mydisp.enableButton(BTN_ID_DYNAMIC_LED, ctrl);
	mydisp.enableButton(BTN_ID_WEL_FPGA, ctrl);
}

void DisplayDriver_StaticLedEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_REGULATOR, ctrl);
	mydisp.enableButton(BTN_ID_FORMS, ctrl);
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

void DisplayDriver_TetrisEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

void DisplayDriver_DynamicLedEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

void DisplayDriver_FPGAEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

void DisplayDriver_FormEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}

void DisplayDriver_RegulatorEnableButtons(bool ctrl)
{
	mydisp.enableButton(BTN_ID_BACK, ctrl);
}


void DisplayDriver_ClearDisp()
{
	mydisp.clearDisplay(clrBlack); /* Erase */
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

void DisplayDriver_DisableAllButtons(void)
{
	for (u8 i = 0; i< NUM_BUTTONS_USED; i++)
	{
		mydisp.enableButton(i, false);
	}


}




