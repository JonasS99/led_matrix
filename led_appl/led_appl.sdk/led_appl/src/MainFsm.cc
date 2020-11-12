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
#include "DynamicLed.h"


/* Function declaration */
/* Variable declaration */
static bool firstAccess = 0;

/* Function*/
void MainFsm_Init(void)
{
	DisplayDriver_Init();
	LedMatrixDriver_Init();
}

void MainFsm_StateMachine(void)
{
	static fsm_t state = FSM_IDLE;
	button_id_t button_touched;
	LedMatrixDriver_Update();

	switch(state)
	{
		case FSM_IDLE:
		{
			DisplayDriver_HomeEnableButtons(true);
			state = FSM_STATIC_LED;

			break;
		}
		case FSM_HOME:
		{
			DisplayDriver_HomeDraw();
			button_touched = DispalyDriver_CheckButtons();

			if (button_touched >= 0)
			{
				/* action if one button is pressed  */
				DisplayDriver_HomeEnableButtons(false);
				DisplayDriver_ClearDisp();

				if (button_touched == BTN_ID_STATIC_LED)
				{
					/* Switch state to static led */
					DisplayDriver_StaticLedEnableButtons(true);
					state = FSM_STATIC_LED;
				}
				else if (button_touched == BTN_ID_TETRIS)
				{
					/* Switch state to tetris */
					state = FSM_TETRIS;
				}
				else if (button_touched == BTN_ID_DYNAMIC_LED)
				{
					/* Switch state to dynamic led */
					state = FSM_DYNMAMIC_LED;
					firstAccess = 1;
				}
				else if (button_touched == BTN_ID_WEL_FPGA)
				{
					/* Switch state to fpga */
					state = FSM_FPGA;
				}
			}
			break;
		}

		case FSM_STATIC_LED:
		{
			DisplayDriver_StaticLedDraw();
			button_touched = DispalyDriver_CheckButtons();
			StaticLED_Minion();
			if (button_touched >= 0)
			{
				/* action if one button is pressed  */
				DisplayDriver_StaticLedEnableButtons(false);
				DisplayDriver_ClearDisp();

				if (button_touched == BTN_ID_REGULATOR)
				{
					/* Switch state to color regulator */
					state = FSM_REGULATOR;
				}
				else if (button_touched == BTN_ID_FORMS)
				{
					/* Switch state to forms */
					state = FSM_FORMS;
				}
				else if (button_touched == BTN_ID_BACK)
				{
					/* Switch state to home */
					DisplayDriver_HomeEnableButtons(true);
					state = FSM_HOME;
				}
			}
			break;
		}

		case FSM_DYNMAMIC_LED:
		{
			DynamicLed_animation(rainbow, firstAccess);
			firstAccess = 0;
			break;
		}

		case FSM_REGULATOR:
		{
			break;
		}

		case FSM_FORMS:
		{
			break;
		}

		case FSM_FPGA:
		{
			break;
		}

		case FSM_TETRIS:
		{
			break;
		}
	}

}




