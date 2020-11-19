/*
 * Tetris.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "Tetris.h"


/* variables */
BlockT Block[100];
u8 BlockCounter = 0;
BlockT* PlayerBlock = nullptr;

/* functions */
void Tetris_InitBlock(BlockT* Block);


/************** TETRIS *****************/

void Tetris_Init(void)
{

}

void Tetris_CycleCall(void)
{
	static u16 DelayCounter = 0;

	if(PlayerBlock==nullptr)
	{
		PlayerBlock = &Block[BlockCounter];
		Tetris_InitBlock(PlayerBlock);
		BlockCounter++;
	}

	for(u8 i = 0; i<BlockCounter; i++)
	{
		switch(Block[i].BlockType)
		{
			case BLOCK_HERO:
				Block_Hero(Block[i].Rotation,Block[i].PositionX, Block[i].PositionY);
				break;
			case BLOCK_TEEWEE:
				Block_Teewee(Block[i].Rotation,Block[i].PositionX, Block[i].PositionY);
				break;

			case BLOCK_SMASHBOY:
				Block_Smashboy(Block[i].Rotation,Block[i].PositionX, Block[i].PositionY);
				break;

			default:
				break;
		}
	}


	if(DelayCounter == 50000)
	{
		if(PlayerBlock->PositionY >=19)
		{
			PlayerBlock = nullptr;
		}
		else
		{
			PlayerBlock->PositionY += 1;
		}
		DelayCounter++;
	}
	else
	{
		DelayCounter++;
	}
	DelayCounter %= 50001;

}

void Tetris_Reset(void)
{
	BlockCounter = 0;
}

void Tetris_InitBlock(BlockT* Block)
{
	Block->BlockType = BLOCK_SMASHBOY;
	Block->PositionX = 9;
	Block->PositionY = 2;
	Block->Rotation = 0;
}



/************** TETRIS END ***************/

