/*
 * Block.cc
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */



#include "Block.h"
#include "LedMatrixDriver.h"

/************** SQUARE **************/
Square::Square(Tetris* Tetris_object, u32 posX, u32 posY, TetrisColorsT color)
:positionX(posX),
 positionY(posY),
 color(color),
 Tetris_obj(Tetris_object)
{

}

void Square::CycleCall(void)
{
	Tetris_obj->SetPixel(positionX, positionY, color);
	Tetris_obj->SetPixel(positionX+1, positionY, color);
	Tetris_obj->SetPixel(positionX, positionY+1, color);
	Tetris_obj->SetPixel(positionX+1, positionY+1, color);
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
