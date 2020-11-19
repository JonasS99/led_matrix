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
#include "IBlock.h"
#include "Block.h"
#include "TetrisMatrix.h"





class Tetris
{
public:
	Tetris(TetrisMatrix* TetrisMatrix_object);
	void Init(void);
	void CycleCall(void);
private:
	Square firstSquare;
	TetrisMatrix* TetrisMatrix_obj;
	IBlock* Blocks[100] = {nullptr};
};



#endif /* SRC_TETRIS_H_ */
