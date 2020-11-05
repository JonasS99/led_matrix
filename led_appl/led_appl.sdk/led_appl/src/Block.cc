/*
 * Block.cc
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */



#include "Block.h"
#include "LedMatrixDriver.h"

/************** SQUARE **************/
Square::Square(TetrisMatrix* TetrisMatrix_obj, u32 posX, u32 posY, TetrisColorsT color)
:positionX(posX),
 positionY(posY),
 color(color),
 TetrisMatrix_obj(TetrisMatrix_obj)
{

}

void Square::CycleCall(void)
{
	TetrisMatrix_obj->SetPixel(positionX, positionY, color);
	TetrisMatrix_obj->SetPixel(positionX+1, positionY, color);
	TetrisMatrix_obj->SetPixel(positionX, positionY+1, color);
	TetrisMatrix_obj->SetPixel(positionX+1, positionY+1, color);
}

void Square::ControlDown(void)
{

}
void Square::ControlLeft(void)
{

}

void Square::ControlRight(void)
{

}


/************** SQUARE END **************/
