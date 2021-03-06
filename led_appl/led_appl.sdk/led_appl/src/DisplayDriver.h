/*
 * DisplayDriver.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_DISPLAYDRIVER_H_
#define SRC_DISPLAYDRIVER_H_


typedef enum {
	BTN_ID_NO_BTN = -1,
	BTN_ID_STATIC_LED = 0,
	BTN_ID_TETRIS,
	BTN_ID_DYNAMIC_LED,
	BTN_ID_WEL_FPGA,
	BTN_ID_REGULATOR,
	BTN_ID_FORMS,
	BTN_ID_BACK,
	BTN_ID_HARDDROP,
	BTN_ID_LEFT,
	BTN_ID_RIGHT,
	BTN_ID_ROTATE,
	BTN_ID_MINION,
	BTN_ID_MARIO,
	BTN_ID_SMILE,
	BTN_ID_CHRISTREE,
	BTN_ID_SQUARE,
	BTN_ID_RAINBOW,
	BTN_ID_SPIRAL
} button_id_t;

void DisplayDriver_Init(void);
void DisplayDriver_HomeDraw();
void DisplayDriver_StaticLedDraw();
void DisplayDriver_TetrisDraw();
void DisplayDriver_DynamicLedDraw();
void DisplayDriver_FPGADraw();
void DisplayDriver_FormDraw();
void DisplayDriver_RegulatorDraw();

void DisplayDriver_HomeEnableButtons(bool ctrl);
void DisplayDriver_StaticLedEnableButtons(bool ctrl);
void DisplayDriver_TetrisEnableButtons(bool ctrl);
void DisplayDriver_DynamicLedEnableButtons(bool ctrl);
void DisplayDriver_FPGAEnableButtons(bool ctrl);
void DisplayDriver_FormEnableButtons(bool ctrl);
void DisplayDriver_RegulatorEnableButtons(bool ctrl);

void DisplayDriver_ClearDisp(void);

#endif /* SRC_DISPLAYDRIVER_H_ */
