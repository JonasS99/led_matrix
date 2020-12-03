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

/* Function*/
void MainFsm_Init(void)
{
	LedMatrixDriver_Init();
	LedMatrixDriver_SetAllLed(0,0,0);
	DisplayDriver_Init();
}

void MainFsm_StateMachine(void)
{
	static fsm_t state = FSM_IDLE;
	button_id_t button_touched;
	LedMatrixDriver_Update();
	static bool first_entry = true;

	switch(state)
	{
		case FSM_IDLE:
		{
			// first entry in Idle State
			state = FSM_HOME;
			first_entry = true;
			
			firstAccess = 1;
			break;
		}
		
		case FSM_HOME:
		{
			if (first_entry)
			{
								// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_HomeEnableButtons(true);
				DisplayDriver_HomeDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* Action if one button is pressed  */
					if (button_touched == BTN_ID_STATIC_LED)
					{
						/* Switch state to static led */
						state = FSM_STATIC_LED;
						first_entry = true;
					}
					else if (button_touched == BTN_ID_TETRIS)
					{
						/* Switch state to tetris */
						state = FSM_TETRIS;
						first_entry = true;
					}
					else if (button_touched == BTN_ID_DYNAMIC_LED)
					{
						/* Switch state to dynamic led */
						state = FSM_DYNMAMIC_LED;
						first_entry = true;
					}
					else if (button_touched == BTN_ID_WEL_FPGA)
					{
						/* Switch state to fpga */
						state = FSM_FPGA;
						first_entry = true;
					}
			}
			
			//DynamicLed_animation(rainbow, firstAccess);
		    DynamicLed_animation(square, firstAccess);
			firstAccess = 0;
			break;
		}

		case FSM_STATIC_LED:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_StaticLedEnableButtons(true);
				DisplayDriver_StaticLedDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* Action if one button is pressed  */
					if (button_touched == BTN_ID_REGULATOR)
					{
						/* Switch state to color regulator */
						state = FSM_REGULATOR;
						first_entry = true;
					}
					else if (button_touched == BTN_ID_FORMS)
					{
						/* Switch state to forms */
						state = FSM_FORMS;
						first_entry = true;
					}
					else if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_HOME;
						first_entry = true;
					}
				}
			}
			
			
			break;
		}

		case FSM_DYNMAMIC_LED:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_DynamicLedEnableButtons(true);
				DisplayDriver_DynamicLedDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* action if one button is pressed  */
					if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_HOME;
						first_entry = true;
					}
				}
			}
			DynamicLed_animation(rainbow, firstAccess);
			firstAccess = 0;
			break;
		}

		case FSM_REGULATOR:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_RegulatorEnableButtons(true);
				DisplayDriver_RegulatorDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();

				if (button_touched >= 0)
				{
					/* action if one button is pressed  */
					if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_STATIC_LED;
						first_entry = true;
					}
				}
			}
			break;
		}

		case FSM_FORMS:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_FormEnableButtons(true);
				DisplayDriver_FormDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* action if one button is pressed  */
					if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_STATIC_LED;
						first_entry = true;
					}
				}
			}
			
			StaticLED_Shapes(StaticLED_state_Minion);
			break;
		}

		case FSM_FPGA:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_FPGAEnableButtons(true);
				DisplayDriver_FPGADraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* action if one button is pressed  */
					if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_HOME;
						first_entry = true;
					}
				}
			}
			break;
		}

		case FSM_TETRIS:
		{
			if (first_entry)
			{
				// First entry in Idle State
				first_entry = false;
				DisplayDriver_ClearDisp();
				DisplayDriver_DisableAllButtons();
				DisplayDriver_TetrisEnableButtons(true);
				DisplayDriver_TetrisDraw();
			}
			else
			{
				button_touched = DispalyDriver_CheckButtons();
				if (button_touched >= 0)
				{
					/* action if one button is pressed  */
					if (button_touched == BTN_ID_BACK)
					{
						/* Switch state to home */
						state = FSM_HOME;
						first_entry = true;
					}
				}
			}
			Block_Clear_Array();
			Tetris_CycleCall(TETRISBUTTON_UNDEFINED);
			Block_Set_Array();
			break;
		}
	}
}




