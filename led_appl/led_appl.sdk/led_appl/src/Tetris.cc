/*
 * Tetris.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "Tetris.h"
#include "xintc.h"

/* variables */
BlockT Block[100];
u16 BlockCounter = 0;
BlockT* PlayerBlock = nullptr;
u32 DelayCounter = 0;

/* functions */
void Tetris_InitBlock(BlockT* Block);


/************** TETRIS *****************/

void Tetris_Init(void)
{
	DelayCounter = 0;
}

void Tetris_CycleCall(TetrisButtonsT TetrisButton)
{
	static TetrisButtonsT TetrisButton_old = TETRISBUTTON_UNDEFINED;

	/* if no Block selected for Player get next one in array */
	if(PlayerBlock==nullptr)
	{
		PlayerBlock = &Block[BlockCounter];
		Tetris_InitBlock(PlayerBlock);
		BlockCounter++;
	}

	/* Write all blocks into pixel array */
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


	/* drop player block down by one if delay is expired */
	if(DelayCounter == 500)
	{
		if(PlayerBlock != nullptr)
		{

			if(PlayerBlock->PositionY >=18) // TODO check if block collides with any other block */
			{
				PlayerBlock = nullptr;
			}
			else
			{
				PlayerBlock->PositionY += 1;
			}
		}
		DelayCounter++;
	}
	else
	{
		DelayCounter++;
	}

	DelayCounter %= 501;

	/* process Player input */
	if((TetrisButton_old != TetrisButton)&&(TetrisButton != TETRISBUTTON_UNDEFINED))
	{
		switch(TetrisButton)
		{
			case TETRISBUTTON_HARDDROP:
			{
				while(!Block_CollisionUnder(*PlayerBlock))
				{
					PlayerBlock->PositionY += 1;
				}
				PlayerBlock = nullptr;
				break;
			}
			case TETRISBUTTON_LEFT:
			{
				if(!Block_CollisionLeft(*PlayerBlock))
				{
					PlayerBlock->PositionX -= 1;
				}
				break;
			}
			case TETRISBUTTON_RIGHT:
			{
				if(!Block_CollisionRight(*PlayerBlock))
				{
					PlayerBlock->PositionX += 1;
				}
				break;
			}
			case TETRISBUTTON_ROTATE_LEFT:
			{

				break;
			}
			case TETRISBUTTON_ROTATE_RIGHT:
			{
				break;
			}
			default:
			{
				break;
			}
		}
	}

	TetrisButton_old = TetrisButton;



}

void Tetris_Reset(void)
{
	BlockCounter = 0;
}

void Tetris_InitBlock(BlockT* Block)
{
	static u8 BlockTypeCounter = 0;
	switch(BlockTypeCounter)
	{
		case 0:
		{
			Block->BlockType = BLOCK_SMASHBOY;
			break;
		}
		case 1:
		{
			Block->BlockType = BLOCK_HERO;
			break;
		}
		case 2:
		{
			Block->BlockType = BLOCK_TEEWEE;
			break;
		}
	}
	BlockTypeCounter++;
	BlockTypeCounter %= 3;
	Block->PositionX = 9;
	Block->PositionY = 2;
	Block->Rotation = 0;
}



/************** TETRIS END ***************/

