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
/*	mydisp.createButton(BTN_ID_STATIC_LED,(char *)"Static.bmp", 10, 90);
	mydisp.createButton(BTN_ID_TETRIS,(char *)"Tetris.bmp", 125, 90);
	mydisp.createButton(BTN_ID_DYNAMIC_LED,(char *)"Dynamic.bmp", 10, 205);
	mydisp.createButton(BTN_ID_WEL_FPGA,(char *)"FPGA.bmp", 125, 205);

	mydisp.createButton(BTN_ID_REGULATOR,(char *)"Regulator.bmp",0,82);
	mydisp.createButton(BTN_ID_FORMS,(char *)"Form.bmp",0,(82+99));

	mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

	mydisp.createButton(BTN_ID_LEFT,(char *)"left.bmp", 5,170);
	mydisp.createButton(BTN_ID_HARDDROP,(char *)"harddrop.bmp",5+70+10,240);
	mydisp.createButton(BTN_ID_ROTATE,(char *)"rotate.bmp", 5+70+10,100);
	mydisp.createButton(BTN_ID_RIGHT,(char *)"right.bmp", 5+70+10+70+10,170);*/

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
	mydisp.drawButton(BTN_ID_LEFT, BUTTON_UP);
	mydisp.drawButton(BTN_ID_HARDDROP, BUTTON_UP);
	mydisp.drawButton(BTN_ID_ROTATE, BUTTON_UP);
	mydisp.drawButton(BTN_ID_RIGHT, BUTTON_UP);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_DynamicLedDraw()
{
	mydisp.drawImage((char *)"Dynamic_LED.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_SQUARE, BUTTON_UP);
	mydisp.drawButton(BTN_ID_RAINBOW, BUTTON_UP);
	mydisp.drawButton(BTN_ID_SPIRAL, BUTTON_UP);
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
	mydisp.drawButton(BTN_ID_MINION, BUTTON_UP);
	mydisp.drawButton(BTN_ID_MARIO, BUTTON_UP);
	mydisp.drawButton(BTN_ID_SMILE, BUTTON_UP);
	mydisp.drawButton(BTN_ID_CHRISTREE, BUTTON_UP);
}

void DisplayDriver_RegulatorDraw()
{
	mydisp.drawImage((char *)"Regulator.bmp", 0, 0);
	mydisp.drawButton(BTN_ID_BACK, BUTTON_UP);
}

void DisplayDriver_HomeEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_STATIC_LED,(char *)"Static.bmp", 10, 90);
		mydisp.createButton(BTN_ID_TETRIS,(char *)"Tetris.bmp", 125, 90);
		mydisp.createButton(BTN_ID_DYNAMIC_LED,(char *)"Dynamic.bmp", 10, 205);
		mydisp.createButton(BTN_ID_WEL_FPGA,(char *)"FPGA.bmp", 125, 205);

		mydisp.enableButton(BTN_ID_STATIC_LED, ctrl);
		mydisp.enableButton(BTN_ID_TETRIS, ctrl);
		mydisp.enableButton(BTN_ID_DYNAMIC_LED, ctrl);
		mydisp.enableButton(BTN_ID_WEL_FPGA, ctrl);

		DisplayDriver_HomeDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_STATIC_LED);
		mydisp.deleteButton(BTN_ID_TETRIS);
		mydisp.deleteButton(BTN_ID_DYNAMIC_LED);
		mydisp.deleteButton(BTN_ID_WEL_FPGA);
	}

}

void DisplayDriver_StaticLedEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_REGULATOR,(char *)"Regulator.bmp",0,82);
		mydisp.createButton(BTN_ID_FORMS,(char *)"Form.bmp",0,(82+99));
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

		mydisp.enableButton(BTN_ID_REGULATOR, ctrl);
		mydisp.enableButton(BTN_ID_FORMS, ctrl);
		mydisp.enableButton(BTN_ID_BACK, ctrl);

		DisplayDriver_StaticLedDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_REGULATOR);
		mydisp.deleteButton(BTN_ID_FORMS);
		mydisp.deleteButton(BTN_ID_BACK);
	}
}

void DisplayDriver_TetrisEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_LEFT,(char *)"left.bmp", 5,170);
		mydisp.createButton(BTN_ID_HARDDROP,(char *)"harddrop.bmp",5+70+10,240);
		mydisp.createButton(BTN_ID_ROTATE,(char *)"rotate.bmp", 5+70+10,100);
		mydisp.createButton(BTN_ID_RIGHT,(char *)"right.bmp", 5+70+10+70+10,170);
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

		mydisp.enableButton(BTN_ID_LEFT, ctrl);
		mydisp.enableButton(BTN_ID_HARDDROP, ctrl);
		mydisp.enableButton(BTN_ID_ROTATE, ctrl);
		mydisp.enableButton(BTN_ID_RIGHT, ctrl);
		mydisp.enableButton(BTN_ID_BACK, ctrl);

		DisplayDriver_TetrisDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_LEFT);
		mydisp.deleteButton(BTN_ID_HARDDROP);
		mydisp.deleteButton(BTN_ID_ROTATE);
		mydisp.deleteButton(BTN_ID_RIGHT);
		mydisp.deleteButton(BTN_ID_BACK);
	}
}

void DisplayDriver_DynamicLedEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));
		mydisp.createButton(BTN_ID_SQUARE,(char *)"Square.bmp", 5,100);
		mydisp.createButton(BTN_ID_RAINBOW,(char *)"Rainbow.bmp",5+70+10,170);
		mydisp.createButton(BTN_ID_SPIRAL,(char *)"Spiral.bmp", 5+70+10+70+10,240);

		mydisp.enableButton(BTN_ID_BACK, ctrl);
		mydisp.enableButton(BTN_ID_SQUARE, ctrl);
		mydisp.enableButton(BTN_ID_RAINBOW, ctrl);
		mydisp.enableButton(BTN_ID_SPIRAL, ctrl);

		DisplayDriver_DynamicLedDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_BACK);
		mydisp.deleteButton(BTN_ID_SQUARE);
		mydisp.deleteButton(BTN_ID_RAINBOW);
		mydisp.deleteButton(BTN_ID_SPIRAL);
	}
}

void DisplayDriver_FPGAEnableButtons(bool ctrl)
{

	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

		mydisp.enableButton(BTN_ID_BACK, ctrl);

		DisplayDriver_FPGADraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_BACK);

	}

}

void DisplayDriver_FormEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));
		mydisp.createButton(BTN_ID_MINION,(char *)"Minion.bmp", 5,170);
		mydisp.createButton(BTN_ID_MARIO,(char *)"Mario.bmp",5+70+10,240);
		mydisp.createButton(BTN_ID_SMILE,(char *)"Smile.bmp", 5+70+10,100);
		mydisp.createButton(BTN_ID_CHRISTREE,(char *)"ChrisTree.bmp", 5+70+10+70+10,170);

		mydisp.enableButton(BTN_ID_BACK, ctrl);
		mydisp.enableButton(BTN_ID_MINION, ctrl);
		mydisp.enableButton(BTN_ID_MARIO, ctrl);
		mydisp.enableButton(BTN_ID_SMILE, ctrl);
		mydisp.enableButton(BTN_ID_CHRISTREE, ctrl);

		DisplayDriver_FormDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_BACK);
		mydisp.deleteButton(BTN_ID_MINION);
		mydisp.deleteButton(BTN_ID_MARIO);
		mydisp.deleteButton(BTN_ID_SMILE);
		mydisp.deleteButton(BTN_ID_CHRISTREE);
	}
}

void DisplayDriver_RegulatorEnableButtons(bool ctrl)
{
	if (ctrl == true)
	{
		mydisp.createButton(BTN_ID_BACK,(char *)"back.bmp", 0,(82+99+99));

		mydisp.enableButton(BTN_ID_BACK, ctrl);

		DisplayDriver_RegulatorDraw();
	}
	else
	{
		mydisp.deleteButton(BTN_ID_BACK);
	}
}

void DisplayDriver_ClearDisp()
{
	mydisp.clearDisplay(clrBlack); /* Erase */
}





