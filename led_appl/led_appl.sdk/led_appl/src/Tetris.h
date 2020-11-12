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


class TetrisPixel
{
public:
	void SetColor(TetrisColorsT color);
	u8 	GetColorR(void);
	u8 	GetColorG(void);
	u8 	GetColorB(void);
private:
	u8 colorR;
	u8 colorG;
	u8 colorB;
};


class TetrisMatrix
{
public:
	void SetPixel(u32 posX, u32 posY, TetrisColorsT color);
	void ClearAllPixel(void);
	void WritePixelToMatrix(void);
private:
	TetrisPixel Pixel_[20][20];
};



class Tetris
{
public:
	Tetris(){}
	void Init(void);
	void CycleCall(void);
private:
	TetrisMatrix TetrisMatrix_obj;
	IBlock* Blocks[100];
};

#endif /* SRC_TETRIS_H_ */
