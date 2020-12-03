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
	BTN_ID_BACK
} button_id_t;

#define NUM_BUTTONS_USED 8

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
button_id_t DispalyDriver_CheckButtons(void);
void DisplayDriver_DisableAllButtons(void);


#endif /* SRC_DISPLAYDRIVER_H_ */
