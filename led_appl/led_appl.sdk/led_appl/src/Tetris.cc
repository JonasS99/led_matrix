/*
 * Tetris.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "Tetris.h"
#include "LedMatrixDriver.h"
#include "Block.h"

/************** PIXEL **************/
void TetrisPixel::SetColor(TetrisColorsT color)
{
	switch(color)
	{
	case OFF:
		colorR = 0x00;
		colorG = 0x00;
		colorB = 0x00;
	default:
		colorR = 0x0F;
		colorG = 0x00;
		colorB = 0x0F;
		break;
	}
}

u8 TetrisPixel::GetColorR(void)
{
	return colorR;
}

u8 TetrisPixel::GetColorG(void)
{
	return colorG;
}

u8 TetrisPixel::GetColorB(void)
{
	return colorR;
}

/************** PIXEL END **************/
/************** MATRIX *****************/

void TetrisMatrix::ClearAllPixel(void)
{
	for(u32 x = 0; x < 20; x++)
	{
		for(u32 y = 0; y < 20; y++)
		{
			Pixel_[x][y].SetColor(OFF);
		}
	}
}




void TetrisMatrix::SetPixel(u32 posX, u32 posY, TetrisColorsT color)
{
	Pixel_[posX][posY].SetColor(color);
}




void TetrisMatrix::WritePixelToMatrix(void)
{
	for(u32 x = 0; x < 20; x++)
	{
		for(u32 y = 0; y < 20; y++)
		{
			LedMatrixDriver_SetLed(x,y,Pixel_[x][y].GetColorR(), Pixel_[x][y].GetColorG(), Pixel_[x][y].GetColorB());
		}
	}
}


/************** MATRIX END *************/
/************** TETRIS *****************/
void Tetris::Init(void)
{


}



void Tetris::CycleCall(void)
{
	TetrisMatrix_obj->ClearAllPixel();
	for(u32 i; i <100; i++)
	{
		if(Blocks[i] != nullptr)
		{
			Blocks[i]->CycleCall();
		}
	}
	TetrisMatrix_obj->WritePixelToMatrix();
}





/************** TETRIS END ***************/

