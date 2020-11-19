/*
 * Tetris.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_TETRIS_H_
#define SRC_TETRIS_H_

#include "MyTypdefs.h"
#include "xil_types.h"
#include "Block.h"

typedef struct
{
	u8 PositionX;
	u8 PositionY;
	u16 Rotation;
	TetrisBlockT BlockType;
}BlockT;




void Tetris_CycleCall(void);







#endif /* SRC_TETRIS_H_ */
