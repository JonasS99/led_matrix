/*
 * Tetris.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "Tetris.h"





/************** PIXEL **************/

/************** PIXEL END **************/

/************** TETRIS *****************/

Tetris::Tetris(TetrisMatrix* TetrisMatrix_object)
:TetrisMatrix_obj(TetrisMatrix_object)
{
}

void Tetris::Init(void)
{
	for(u16 i = 0; i<100; i++)
	{
		Blocks[i] = nullptr;
	}

	Blocks[0] = &firstSquare;
}



void Tetris::CycleCall(void)
{
	TetrisMatrix_obj->ClearAllPixel();
	for(u16 i = 0; i <100; i++)
	{
		if(Blocks[i] != nullptr)
		{
			Blocks[i]->CycleCall();
		}
	}
	TetrisMatrix_obj->WritePixelToMatrix();
}





/************** TETRIS END ***************/

