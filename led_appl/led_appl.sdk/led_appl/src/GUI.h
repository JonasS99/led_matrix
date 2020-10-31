/*
 * GUI.h
 *
 *  Created on: 15.10.2020
 *      Author: Keller
 */

#ifndef SRC_GUI_H_
#define SRC_GUI_H_

typedef enum {
	BTN_ID_STATIC_LED = 0,
	BTN_ID_TETRIS,
	BTN_ID_DYNAMIC_LED,
	BTN_ID_WEL_FPGA
} button_id_t;

typedef enum {
	FSM_IDLE =0,
	FSM_MAIN_DISP,
	FSM_STATIC_LED,
	FSM_TETRIS
} gui_fsm_t;




//test
void GUI_MainFunction(void);
void GUI_Init(void);








#endif /* SRC_GUI_H_ */


