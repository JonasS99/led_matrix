/*
 * MyTypdefs.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_MYTYPDEFS_H_
#define SRC_MYTYPDEFS_H_

typedef enum {
	FSM_IDLE = 0,
	FSM_HOME,
	FSM_STATIC_LED,
	FSM_DYNMAMIC_LED,
	FSM_REGULATOR,
	FSM_FORMS,
	FSM_FPGA,
	FSM_TETRIS
} fsm_t;


typedef enum{
    OFF = 0,
    BLUE,
    GREEN,
    YELLOW,
    RED,
    ORANGE,
    TURQUOIS,
    PURPLE
}TetrisColorsT;


typedef enum {
    StaticLED_state_IDLE = 0,
    StaticLED_state_ChristmasTree,
	StaticLED_state_EmojiSmile,
	StaticLED_state_EmojiSad,
	StaticLED_state_Mario,
	StaticLED_state_Minion
} shapes;

typedef enum {
	rainbow = 0,
	spiral,
	strobo,
	weihnachtsanimation
}dynamicLedMode_t;


typedef enum{
	BLOCK_HERO,
	BLOCK_TEEWEE,
	BLOCK_SMASHBOY
}TetrisBlockT;

#endif /* SRC_MYTYPDEFS_H_ */
