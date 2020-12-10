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
#include "Tetris.h"


typedef struct
{
	u8 PositionX;
	u8 PositionY;
	u16 Rotation;
	TetrisBlockT BlockType;
}BlockT;

void Block_Set_Array();
void Block_Save_Array();
void Block_Clear_Array();
void Block_Set_Block(BlockT* block);
void Block_RemovePlayerBlockFromArray();
void Block_Smashboy(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Hero(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Teewee(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Orange_Ricky(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Blue_Ricky(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Cleveland_Z(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Rhode_Island_Z(u16 Rotation, u8 PositionX, u8 PositionY);
bool Block_Field_Emty(u8 PositionX, u8 PositionY);
bool Block_CheckRow(u8 row);

bool Block_CollisionUnder(BlockT TetrisBlock);
bool Block_CollisionRight(BlockT TetrisBlock);
bool Block_CollisionLeft(BlockT TetrisBlock);
bool Block_CollisionRotate(BlockT TetrisBlock);




#endif /* SRC_BLOCK_H_ */
