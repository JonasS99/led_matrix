/*
 * Block.cc
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */



#include "Block.h"
#include "LedMatrixDriver.h"

u8 pixel_Array[20][20][3] = {0};
bool Block_checkPixelOn(u8 posX, u8 posY);
//Names for the Block: https://www.netzpanorama.de/tetris-bloecke-ein-altes-nintendo-handbuch-kennt-die-namen-der-7-tetriminos/

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






bool Block_CollisionUnder(BlockT TetrisBlock)
{

	switch(TetrisBlock.BlockType)
	{
	case BLOCK_SMASHBOY:
	{
		if(TetrisBlock.PositionY==18){
				return true;
			}
		if(Block_checkPixelOn(TetrisBlock.PositionX, TetrisBlock.PositionY+2)||
		   Block_checkPixelOn(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2))
		{
			return true;
		}

		break;
	}
	case BLOCK_HERO:
	{
		if(TetrisBlock.PositionY==16){
			return true;
		}
		if(Block_checkPixelOn(TetrisBlock.PositionX, TetrisBlock.PositionY+4))
		{
			return true;
		}

		break;
	}
	case BLOCK_TEEWEE:
	{
		if(TetrisBlock.PositionY==18){
			return true;
		}
		if(Block_checkPixelOn(TetrisBlock.PositionX, TetrisBlock.PositionY+2)||
		   Block_checkPixelOn(TetrisBlock.PositionX+1, TetrisBlock.PositionY+2)||
		   Block_checkPixelOn(TetrisBlock.PositionX+2, TetrisBlock.PositionY+2))
		{
			return true;
		}

		break;
	}

	}
	return false;


}

bool Block_checkPixelOn(u8 posX, u8 posY)
{
	return (pixel_Array[posX][posY][0] != 0 || pixel_Array[posX][posY][1] != 0 || pixel_Array[posX][posY][2] != 0);
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



bool Block_CollisionLeft(BlockT TetrisBlock){
	// Block Smashboy
	if(TetrisBlock.BlockType == BLOCK_SMASHBOY){
		if(TetrisBlock.PositionX==0){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][2] != 0){
			return true;
		}
		return false;
	}

	// Block Teewee, without rotation
	if(TetrisBlock.BlockType == BLOCK_TEEWEE){
		if(TetrisBlock.PositionX==0){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][2] != 0){
			return true;
		}
		return false;
	}

	// Block Hero, without rotation
	if(TetrisBlock.BlockType == BLOCK_HERO){
		if(TetrisBlock.PositionX==0){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+1][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+2][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+2][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+2][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+3][0] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+3][1] != 0 || pixel_Array[TetrisBlock.PositionX-1][TetrisBlock.PositionY+3][2] != 0){
			return true;
		}
		return false;
	}

}

bool Block_CollisionRight(BlockT TetrisBlock){
	// Block Smashboy
	if(TetrisBlock.BlockType == BLOCK_SMASHBOY){
		if(TetrisBlock.PositionX==19){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][2] != 0){
			return true;
		}
		return false;
	}

	// Block Teewee, without rotation
	if(TetrisBlock.BlockType == BLOCK_TEEWEE){
		if(TetrisBlock.PositionX==0){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][2] != 0){
			return true;
		}
		return false;
	}

	// Block Hero, without rotation
	if(TetrisBlock.BlockType == BLOCK_HERO){
		if(TetrisBlock.PositionX==0){
			return true;
		}
		if(pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+1][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+2][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+2][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+2][2] != 0 ||
		   pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+3][0] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+3][1] != 0 || pixel_Array[TetrisBlock.PositionX+1][TetrisBlock.PositionY+3][2] != 0){
			return true;
		}
		return false;
	}
}


