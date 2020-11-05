/*
 * MainFsm.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

/* Header file */
#include "MainFsm.h" /* Include own header file */
#include "MyTypDefs.h"
#include "Tetris.h"
/* Function declaration */

Tetris Tetris_obj;

/* Function*/
void MainFsm_Init(void)
{
	Tetris_obj.Init();
//ratatatatatatata
	//hallllooooo
}

void MainFsm_StateMachine(void)
{
	static fsm_t state = FSM_HOME;

	switch(state)
	{
		case FSM_HOME:
		{
			if (1)
			{
				state = FSM_STATIC_LED;
			}
			break;
		}

		case FSM_STATIC_LED:
		{
			Tetris_obj.CycleCall();
			break;
		}

		case FSM_DYNMAMIC_LED:
		{
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




