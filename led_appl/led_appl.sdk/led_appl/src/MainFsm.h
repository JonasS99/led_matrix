/*
 * MainFSM.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_MAINFSM_H_
#define SRC_MAINFSM_H_

#include "StaticLED.h"
#include "Block.h"


extern u8 rand0to2;

/* Function declaration */
void MainFsm_Init(void);
void MainFsm_StateMachine(void);

/* Defines */



#endif /* SRC_MAINFSM_H_ */
