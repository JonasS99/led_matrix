/*
 * Block.h
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */

#ifndef SRC_BLOCK_H_
#define SRC_BLOCK_H_

#include "xil_types.h"
#include "MyTypdefs.h"
#include "IBlock.h"
#include "Tetris.h"

class Square : public IBlock
{
public:
	Square(Tetris* Tetris_object, u32 posX, u32 posY, TetrisColorsT color);
	void CycleCall(void) 	override;
	void ControlDown(void) 	override;
	void ControlLeft(void) 	override;
	void ControlRight(void) override;
private:
	u32 positionX;
	u32 positionY;
	TetrisColorsT color;
	Tetris* Tetris_obj;
};


#endif /* SRC_BLOCK_H_ */
