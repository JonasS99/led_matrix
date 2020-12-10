/*
 * MainFsm.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

/* Header file */
#include "MainFsm.h" /* Include own header file */
#include "MyTypDefs.h"
#include "DisplayDriver.h"
#include "LedMatrixDriver.h"
#include <MyDisp.h>

/* Function declaration */
#include "DynamicLed.h"
#include "Tetris.h"


/* Function declaration */
/* Variable declaration */
static bool firstAccess = 0;

/* Functions */
void MainFsm_Init(void)
{
	LedMatrixDriver_Init();
	DisplayDriver_Init();
}

void MainFsm_StateMachine(void)
{
	static fsm_t state = FSM_IDLE;
	LedMatrixDriver_Update();
	static bool first_entry = true;


	switch(state)
	{
		case FSM_IDLE:
		{
			/* First entry in Idle State */
			state = FSM_FPGA;
			first_entry = true;
			
			firstAccess = 1;
			break;
		}
		
		case FSM_HOME:
		{
			if (first_entry)
			{
				/* First entry in home state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_HomeEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
			}
			else
			{
				mydisp.checkTouch();
				/* Action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_STATIC_LED) == BUTTON_DOWN)
				{
					/* Switch state to static led */
					state = FSM_STATIC_LED;
					DisplayDriver_HomeEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_TETRIS) == BUTTON_DOWN )
				{
					/* Switch state to tetris */
					state = FSM_TETRIS;
					DisplayDriver_HomeEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_DYNAMIC_LED) == BUTTON_DOWN)
				{
					/* Switch state to dynamic led */
					state = FSM_DYNMAMIC_LED;
					DisplayDriver_HomeEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_WEL_FPGA) == BUTTON_DOWN)
				{
					/* Switch state to fpga */
					state = FSM_FPGA;
					DisplayDriver_HomeEnableButtons(false);
					first_entry = true;
				}
			}
			/* Application code begin */

			/* Application code end */
			break;
		}

		case FSM_STATIC_LED:
		{
			if (first_entry)
			{
				/* First entry in static state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_StaticLedEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
			}
			else
			{
				mydisp.checkTouch();
				/* Action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_REGULATOR) == BUTTON_DOWN)
				{
					/* Switch state to color regulator */
					state = FSM_REGULATOR;
					DisplayDriver_StaticLedEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_FORMS) == BUTTON_DOWN)
				{
					/* Switch state to forms */
					state = FSM_FORMS;
					DisplayDriver_StaticLedEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
				{
					/* Switch state to home */
					state = FSM_HOME;
					DisplayDriver_StaticLedEnableButtons(false);
					first_entry = true;
				}
			}
			/* Application code begin */
			
			/* Application code end */
			break;
		}

		case FSM_DYNMAMIC_LED:
		{
			static dynamicLedMode_t last_button_dyn = idle;
			if (first_entry)
			{
				/* First entry in dynamic led state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DynamicLedEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
				firstAccess = 1;
				last_button_dyn = idle;
			}
			else
			{
				mydisp.checkTouch();
				/* action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
				{
					/* Switch state to home */
					state = FSM_HOME;
					DisplayDriver_DynamicLedEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_SQUARE) == BUTTON_DOWN)
				{
					/* Application code begin */
					LedMatrixDriver_SetAllLed(0,0,0);
					last_button_dyn = square;
					firstAccess = 1;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_RAINBOW) == BUTTON_DOWN)
				{
					/* Application code begin */
					LedMatrixDriver_SetAllLed(0,0,0);
					last_button_dyn = rainbow;
					firstAccess = 1;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_SPIRAL) == BUTTON_DOWN)
				{
					/* Application code begin */
					LedMatrixDriver_SetAllLed(0,0,0);
					last_button_dyn = spiral;
					firstAccess = 1;
					/* Application code end */
				}

			}

			/* Application code begin */
			DynamicLed_animation(last_button_dyn, firstAccess);
			firstAccess = 0;
			/* Application code end */

			break;
		}

		case FSM_REGULATOR:
		{
			static MDFNG finger_info;
			static u8 r_val , g_val, b_val;
			if (first_entry)
			{
				/* First entry in regulator state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_RegulatorEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
				finger_info.x = 0;
				finger_info.y = 0;
				r_val = 0;
				g_val = 0;
				b_val = 0;
			}
			else
			{
				mydisp.checkTouch();
				mydisp.getFinger(0, &finger_info);
				/* action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
					{
						/* Switch state to home */
						state = FSM_STATIC_LED;
						DisplayDriver_DynamicLedEnableButtons(false);
						first_entry = true;
					}
			}
			/* Application code begin */
			if ((finger_info.x > 5) && (finger_info.x <235) && (finger_info.y > 105) && (finger_info.y <153))
			{
				r_val = (u8)(255*((u16)(finger_info.x-5))/230);
			}
			else if ((finger_info.x > 5) && (finger_info.x <235) && (finger_info.y > 170) && (finger_info.y <215))
			{
				g_val = (u8)(255*((u16)(finger_info.x-5))/230);
			}
			else if ((finger_info.x > 5) && (finger_info.x <235) && (finger_info.y > 232) && (finger_info.y <277))
			{
				b_val = (u8)(255*((u16)(finger_info.x-5))/230);
			}
			 StaticLED_ColorController(r_val,g_val,b_val);
			/* Application code end */
			break;
		}

		case FSM_FORMS:
		{
			static shapes last_button_forms = StaticLED_state_IDLE;
			if (first_entry)
			{
				/* First entry in froms state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_FormEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
				last_button_forms = StaticLED_state_IDLE;
			}
			else
			{
				mydisp.checkTouch();
				/* action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
					{
						/* Switch state to home */
						state = FSM_STATIC_LED;
						DisplayDriver_DynamicLedEnableButtons(false);
						first_entry = true;
					}
				else if (mydisp.isTouched(BTN_ID_MINION) == BUTTON_DOWN)
				{
					/* Application code begin */
					last_button_forms = StaticLED_state_Minion;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_MARIO) == BUTTON_DOWN)
				{
					/* Application code begin */
					last_button_forms = StaticLED_state_Mario;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_SMILE) == BUTTON_DOWN)
				{
					/* Application code begin */
					last_button_forms = StaticLED_state_EmojiSmile;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_CHRISTREE) == BUTTON_DOWN)
				{
					/* Application code begin */
					last_button_forms = StaticLED_state_ChristmasTree;
					/* Application code end */
				}
			}
			/* Application code begin */
			StaticLED_Shapes(last_button_forms);
			/* Application code end */
			break;
		}

		case FSM_FPGA:
		{
			if (first_entry)
			{
				/* First entry in fpga state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_FPGAEnableButtons(true);
				LedMatrixDriver_SetAllLed(20,0,0);
				firstAccess = 1;
			}
			else
			{
				mydisp.checkTouch();
				/* action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
				{
					/* Switch state to home */
					state = FSM_HOME;
					DisplayDriver_FPGAEnableButtons(false);
					first_entry = true;
				}
			}
			/* Application code begin */
			DynamicLed_animation(fpga, firstAccess);
			firstAccess = 0;
			/* Application code end */
			break;
		}

		case FSM_TETRIS:
		{
			TetrisButtonsT TetrisButtonState = TETRISBUTTON_UNDEFINED;
			if (first_entry)
			{
				/* First entry in tetris state */
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_TetrisEnableButtons(true);
				LedMatrixDriver_SetAllLed(0,0,0);
				Tetris_Init();
			}
			else
			{
				mydisp.checkTouch();
				/* action if one button is pressed  */
				if (mydisp.isTouched(BTN_ID_BACK) == BUTTON_DOWN)
				{
					/* Switch state to home */
					state = FSM_HOME;
					DisplayDriver_TetrisEnableButtons(false);
					first_entry = true;
				}
				else if (mydisp.isTouched(BTN_ID_LEFT) == BUTTON_DOWN)
				{
					/* Application code begin */
					TetrisButtonState = TETRISBUTTON_LEFT;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_HARDDROP) == BUTTON_DOWN)
				{
					/* Application code begin */
					TetrisButtonState = TETRISBUTTON_HARDDROP;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_ROTATE) == BUTTON_DOWN)
				{
					/* Application code begin */
					TetrisButtonState = TETRISBUTTON_ROTATE_RIGHT;
					/* Application code end */
				}
				else if (mydisp.isTouched(BTN_ID_RIGHT) == BUTTON_DOWN)
				{
					/* Application code begin */
					TetrisButtonState = TETRISBUTTON_RIGHT;
					/* Application code end */
				}
			}
			/* Application code begin */
			Block_Clear_Array();
			Tetris_CycleCall(TetrisButtonState);
			Block_Set_Array();
			/* Application code end */
			break;
		}
	}
}




