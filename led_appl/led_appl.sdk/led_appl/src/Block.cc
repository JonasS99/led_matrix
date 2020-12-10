/*
 * Block.cc
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */



#include "Block.h"
#include "LedMatrixDriver.h"

u8 pixel_Array[20][20][3] = {0};
u8 pixel_ArrayWithoutPlayerBlock[20][20][3] = {0};
bool Block_checkPixelOn(u8 posX, u8 posY);
//Names for the Block: https://www.netzpanorama.de/tetris-bloecke-ein-altes-nintendo-handbuch-kennt-die-namen-der-7-tetriminos/


void Block_CheckFullRow(void)
{
	for (u8 i = 0; i < 20; i++)
	{
		if(Block_CheckRow(i) == true)
		{
			Block_RemoveRow(i);
		}
	}
}

void Block_RemoveRow(u8 row)
{
	for(u8 i = 0; i < 20; i++)
	{
		pixel_Array[i][row][0] = 0;
		pixel_Array[i][row][1] = 0;
		pixel_Array[i][row][2] = 0;
	}
	for(i = row; row == 0; row--)
	{
		pixel_Array[i][row][0] = pixel_Array[i][row-1][0];
		pixel_Array[i][row][1] = pixel_Array[i][row-1][1];
		pixel_Array[i][row][2] = pixel_Array[i][row-1][2];
	}
}

void Block_Set_Block(BlockT* block)
{
	switch(block->BlockType)
	{
		case BLOCK_HERO:
			Block_Hero(block->Rotation,block->PositionX, block->PositionY);
			break;

		case BLOCK_TEEWEE:
			Block_Teewee(block->Rotation, block->PositionX, block->PositionY);
			break;

		case BLOCK_SMASHBOY:
			Block_Smashboy(block->Rotation, block->PositionX, block->PositionY);
			break;

		default:
			break;
	}
}

void Block_Set_Array(){
	LEDMatrixDriver_Set_Pixel_Array(pixel_Array);
}

void Block_Clear_Array(){
	for(u8 i = 0; i<20; i++)
	{
		for(u8 p = 0; p<20; p++)
		{
			pixel_Array[i][p][0] = 0;
			pixel_Array[i][p][1] = 0;
			pixel_Array[i][p][2] = 0;
		}
	}
}

void Block_Save_Array()
{
	for(u8 i = 0; i < 20; i++)
		for(u8 p = 0; p < 20; p++)
			for(u8 u = 0; u < 3; u++)
				pixel_ArrayWithoutPlayerBlock[i][p][u] = pixel_Array[i][p][u];
}

void Block_RemovePlayerBlockFromArray()
{
	for(u8 i = 0; i < 20; i++)
		for(u8 p = 0; p < 20; p++)
			for(u8 u = 0; u < 3; u++)
				pixel_Array[i][p][u] = pixel_ArrayWithoutPlayerBlock[i][p][u] ;
}

bool Block_CheckRow(u8 row)
{
  bool ret = true;
  for(u8 i = 0; i < 20; i++)
  {
	  if(!Block_Field_Emty(i, row))
		  ret = false;
  }
  return ret;
}


void Block_Smashboy(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		default:
			pixel_Array[PositionX][PositionY][0] = 255;
			pixel_Array[PositionX][PositionY][1] = 255;
			pixel_Array[PositionX + 1][PositionY][0] = 255;
			pixel_Array[PositionX + 1][PositionY][1] = 255;
			pixel_Array[PositionX][PositionY + 1][0] = 255;
			pixel_Array[PositionX][PositionY + 1][1] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][0] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][1] = 255;
			break;
	}
}



void Block_Hero(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
		case 180:
			pixel_Array[PositionX][PositionY][1] = 255;
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX][PositionY + 1][1] = 255;
			pixel_Array[PositionX][PositionY + 1][2] = 255;
			pixel_Array[PositionX][PositionY + 2][1] = 255;
			pixel_Array[PositionX][PositionY + 2][2] = 255;
			pixel_Array[PositionX][PositionY + 3][1] = 255;
			pixel_Array[PositionX][PositionY + 3][2] = 255;
			break;
		case 90:
		case 270:
			pixel_Array[PositionX][PositionY][1] = 255;
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX + 1][PositionY][1] = 255;
			pixel_Array[PositionX + 1][PositionY][2] = 255;
			pixel_Array[PositionX + 2][PositionY][1] = 255;
			pixel_Array[PositionX + 2][PositionY][2] = 255;
			pixel_Array[PositionX + 3][PositionY][1] = 255;
			pixel_Array[PositionX + 3][PositionY][2] = 255;
			break;
	}
}

void Block_Teewee(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
			pixel_Array[PositionX + 1][PositionY][0] = 130;
			pixel_Array[PositionX + 1][PositionY][2] = 255;
			pixel_Array[PositionX][PositionY + 1][0] = 130;
			pixel_Array[PositionX][PositionY + 1][2] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][0] = 130;
			pixel_Array[PositionX + 1][PositionY + 1][2] = 255;
			pixel_Array[PositionX + 2][PositionY + 1][0] = 130;
			pixel_Array[PositionX + 2][PositionY + 1][2] = 255;
			break;
		case 90:
			pixel_Array[PositionX][PositionY][0] = 130;
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX][PositionY + 1][0] = 130;
			pixel_Array[PositionX][PositionY + 1][2] = 255;
			pixel_Array[PositionX][PositionY + 2][0] = 130;
			pixel_Array[PositionX][PositionY + 2][2] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][0] = 130;
			pixel_Array[PositionX + 1][PositionY + 1][2] = 255;
			break;
		case 180:
			pixel_Array[PositionX][PositionY][0] = 130;
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX + 1][PositionY][0] = 130;
			pixel_Array[PositionX + 1][PositionY][2] = 255;
			pixel_Array[PositionX + 2][PositionY][0] = 130;
			pixel_Array[PositionX + 2][PositionY][2] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][0] = 130;
			pixel_Array[PositionX + 1][PositionY + 1][2] = 255;
			break;
		case 270:
			pixel_Array[PositionX + 1][PositionY][0] = 130;
			pixel_Array[PositionX + 1][PositionY][2] = 255;
			pixel_Array[PositionX + 1][PositionY + 1][0] = 130;
			pixel_Array[PositionX + 1][PositionY + 1][2] = 255;
			pixel_Array[PositionX + 1][PositionY + 2][0] = 130;
			pixel_Array[PositionX + 1][PositionY + 2][2] = 255;
			pixel_Array[PositionX][PositionY + 1][0] = 130;
			pixel_Array[PositionX][PositionY + 1][2] = 255;
			break;
	}
}



void Block_Orange_Ricky(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
			pixel_Array[PositionX+2][PositionY][0] = 255;
			pixel_Array[PositionX+2][PositionY][1] = 130;
			pixel_Array[PositionX][PositionY+1][0] = 255;
			pixel_Array[PositionX][PositionY+1][1] = 130;
			pixel_Array[PositionX+1][PositionY+1][0] = 255;
			pixel_Array[PositionX+1][PositionY+1][1] = 130;
			pixel_Array[PositionX+2][PositionY+1][0] = 255;
			pixel_Array[PositionX+2][PositionY+1][1] = 130;
			break;
		case 90:
			pixel_Array[PositionX][PositionY][0] = 255;
			pixel_Array[PositionX][PositionY][1] = 130;
			pixel_Array[PositionX][PositionY+1][0] = 255;
			pixel_Array[PositionX][PositionY+1][1] = 130;
			pixel_Array[PositionX][PositionY+2][0] = 255;
			pixel_Array[PositionX][PositionY+2][1] = 130;
			pixel_Array[PositionX+1][PositionY+2][0] = 255;
			pixel_Array[PositionX+1][PositionY+2][1] = 130;
			break;
		case 180:
			pixel_Array[PositionX][PositionY][0] = 255;
			pixel_Array[PositionX][PositionY][1] = 130;
			pixel_Array[PositionX][PositionY+1][0] = 255;
			pixel_Array[PositionX][PositionY+1][1] = 130;
			pixel_Array[PositionX+1][PositionY][0] = 255;
			pixel_Array[PositionX+1][PositionY][1] = 130;
			pixel_Array[PositionX+2][PositionY][0] = 255;
			pixel_Array[PositionX+2][PositionY][1] = 130;
			break;
		case 270:
			pixel_Array[PositionX][PositionY][0] = 255;
			pixel_Array[PositionX][PositionY][1] = 130;
			pixel_Array[PositionX+1][PositionY][0] = 255;
			pixel_Array[PositionX+1][PositionY][1] = 130;
			pixel_Array[PositionX+1][PositionY+1][0] = 255;
			pixel_Array[PositionX+1][PositionY+1][1] = 130;
			pixel_Array[PositionX+1][PositionY+2][0] = 255;
			pixel_Array[PositionX+1][PositionY+2][1] = 130;
			break;
	}
}

void Block_Blue_Ricky(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX][PositionY+1][2] = 255;
			pixel_Array[PositionX+1][PositionY+1][2] = 255;
			pixel_Array[PositionX+2][PositionY+1][2] = 255;
			break;
		case 90:
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX+1][PositionY][2] = 255;
			pixel_Array[PositionX][PositionY+1][2] = 255;
			pixel_Array[PositionX][PositionY+2][2] = 255;
			break;
		case 180:
			pixel_Array[PositionX][PositionY][2] = 255;
			pixel_Array[PositionX+1][PositionY][2] = 255;
			pixel_Array[PositionX+2][PositionY][2] = 255;
			pixel_Array[PositionX+2][PositionY+1][2] = 255;
			break;
		case 270:
			pixel_Array[PositionX][PositionY+2][2] = 255;
			pixel_Array[PositionX+1][PositionY][2] = 255;
			pixel_Array[PositionX+1][PositionY+1][2] = 255;
			pixel_Array[PositionX+1][PositionY+2][2] = 255;
			break;
	}
}

void Block_Cleveland_Z(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
		case 180:
			pixel_Array[PositionX][PositionY][0] = 255;
			pixel_Array[PositionX+1][PositionY][0] = 255;
			pixel_Array[PositionX+1][PositionY + 1][0] = 255;
			pixel_Array[PositionX+1][PositionY + 1][0] = 255;
			break;
		case 90:
		case 270:
			pixel_Array[PositionX+1][PositionY][0] = 255;
			pixel_Array[PositionX+1][PositionY+1][0] = 255;
			pixel_Array[PositionX][PositionY+1][0] = 255;
			pixel_Array[PositionX][PositionY+2][0] = 255;
			break;
	}
}

void Block_Rhode_Island_Z(u16 Rotation, u8 PositionX, u8 PositionY){
	switch(Rotation){
		case 0:
		case 180:
			pixel_Array[PositionX+1][PositionY][1] = 255;
			pixel_Array[PositionX+2][PositionY][1] = 255;
			pixel_Array[PositionX][PositionY+1][1] = 255;
			pixel_Array[PositionX+1][PositionY+1][1] = 255;
			break;
		case 90:
		case 270:
			pixel_Array[PositionX][PositionY][1] = 255;
			pixel_Array[PositionX][PositionY+1][1] = 255;
			pixel_Array[PositionX+1][PositionY+1][1] = 255;
			pixel_Array[PositionX+1][PositionY+2][1] = 255;
			break;
	}
}

bool Block_Field_Emty(u8 PositionX, u8 PositionY){
	if(pixel_Array[PositionX][PositionY][0] != 0 ||pixel_Array[PositionX][PositionY][1] != 0 ||pixel_Array[PositionX][PositionY][1] != 0){
		return true;
	}
	return false;
}

bool Block_CollisionLeft(BlockT TetrisBlock){
	switch(TetrisBlock.BlockType){
		case BLOCK_SMASHBOY:{
			if(TetrisBlock.PositionX==0){
				return true;
			}
			if(Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY) ||
				Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+1)){
				return true;
			}
			break;
		}
		case BLOCK_TEEWEE:{
			switch(TetrisBlock.Rotation){
				case 0:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				}
				case 90:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				}
				case 180:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				}
				case 270:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				}
			}
			break;
		}
		case BLOCK_HERO:{
			switch(TetrisBlock.Rotation){
				case 0:
				case 180:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+2) ||
						Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY+3)){
						return true;
					}
					break;
				}
				case 90:
				case 270:{
					if(TetrisBlock.PositionX==0){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX-1, TetrisBlock.PositionY)){
						return true;
					}
					break;
				}
			}
			break;
		}
	}
	return false;
}


bool Block_CollisionRotate(BlockT TetrisBlock){
	switch(TetrisBlock.BlockType){
		case BLOCK_TEEWEE:{
			switch(TetrisBlock.Rotation){
				case 0:
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY)){
						return true;
					}
					break;
				case 90:
					if(Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY)){
						return true;
					}
					break;
				case 180:
					if(Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				case 270:
					if(Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
			}
			break;
		}
		case BLOCK_HERO:{
			switch(TetrisBlock.Rotation){
				case 0:
				case 180:
					if(Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+3, TetrisBlock.PositionY)){
						return true;
					}
					break;
				case 90:
				case 270:
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+2) ||
						Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+3)){
						return true;
					}
					break;
			}
			break;
		}
	}
	return false;
}


bool Block_CollisionRight(BlockT TetrisBlock){
	switch(TetrisBlock.BlockType){
		case BLOCK_SMASHBOY:{
			if(TetrisBlock.PositionX==18){
				return true;
			}
			if(Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY) ||
				Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)){
				return true;
			}
			break;
		}
		case BLOCK_TEEWEE:{
			switch(TetrisBlock.Rotation){
				case 0:{
					if(TetrisBlock.PositionX==17){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+3, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				}
				case 90:{
					if(TetrisBlock.PositionX==18){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				}
				case 180:{
					if(TetrisBlock.PositionX==17){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+3, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				}
				case 270:{
					if(TetrisBlock.PositionX==18){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				}
			}
			break;
		}
		case BLOCK_HERO:{
			switch(TetrisBlock.Rotation){
				case 0:
				case 180:{
					if(TetrisBlock.PositionX==19){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY) ||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+1) ||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2) ||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+3)){
						return true;
					}
					break;
				}
				case 90:
				case 270:{
					if(TetrisBlock.PositionX==16){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX+4, TetrisBlock.PositionY)){
						return true;
					}
					break;
				}
			}
			break;
		}
	}
	return false;
}



bool Block_CollisionUnder(BlockT TetrisBlock){
	switch(TetrisBlock.BlockType){
		case BLOCK_SMASHBOY:{
			if(TetrisBlock.PositionY==18){
					return true;
			}
			if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+2)||
				Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)){
				return true;
			}
			break;
		}
		case BLOCK_TEEWEE:{
			switch(TetrisBlock.Rotation){
				case 0:
					if(TetrisBlock.PositionY==18){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+2)||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				case 90:
					if(TetrisBlock.PositionY==17){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+3)||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)){
						return true;
					}
					break;
				case 180:
					if(TetrisBlock.PositionY==18){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+1)||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
				case 270:
					if(TetrisBlock.PositionY==18){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+2)||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+3)){
						return true;
					}
					break;
			}
			break;
		}
		case BLOCK_HERO:{
			switch(TetrisBlock.Rotation){
				case 0:
				case 180:
					if(TetrisBlock.PositionY==16){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+4)){
						return true;
					}
					break;
				case 90:
				case 270:
					if(TetrisBlock.PositionY==19){
						return true;
					}
					if(Block_Field_Emty(TetrisBlock.PositionX, TetrisBlock.PositionY+1)||
						Block_Field_Emty(TetrisBlock.PositionX+1, TetrisBlock.PositionY+1)||
						Block_Field_Emty(TetrisBlock.PositionX+2, TetrisBlock.PositionY+1)||
						Block_Field_Emty(TetrisBlock.PositionX+3, TetrisBlock.PositionY+1)){
						return true;
					}
					break;
			}
			break;
		}
	}
	return false;
}
