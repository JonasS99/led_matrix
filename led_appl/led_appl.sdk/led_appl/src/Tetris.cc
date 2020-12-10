/*
 * Tetris.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "Tetris.h"
#include "xintc.h"
#include "MainFsm.h"
#define MAX_NUM_BLOCKS 50
/* variables */
BlockT Block[2];
u16 BlockCounter = 0;
BlockT* PlayerBlock = nullptr;
u32 DelayCounter = 0;

/* functions */
void Tetris_InitBlock(BlockT* Block);


/************** TETRIS *****************/

void Tetris_Init(void)
{
	BlockCounter = 0;
	DelayCounter = 0;
	PlayerBlock=nullptr;
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
		BlockCounter %= 2;
	}


	Block_Save_Array();

	switch(PlayerBlock->BlockType)
	{
		case BLOCK_HERO:
			Block_Hero(PlayerBlock->Rotation,PlayerBlock->PositionX, PlayerBlock->PositionY);
			break;

		case BLOCK_TEEWEE:
			Block_Teewee(PlayerBlock->Rotation,PlayerBlock->PositionX, PlayerBlock->PositionY);
			break;

		case BLOCK_SMASHBOY:
			Block_Smashboy(PlayerBlock->Rotation,PlayerBlock->PositionX, PlayerBlock->PositionY);
			break;

		default:
			break;
	}

	Block_Set_Array();

	/* drop player block down by one if delay is expired */
	if(DelayCounter == 500)
	{
		if(PlayerBlock != nullptr)
		{

			if(Block_CollisionUnder(*PlayerBlock)) // TODO check if block collides with any other block */
			{
				if (PlayerBlock->PositionX == 9 && PlayerBlock->PositionY == 2)
					Tetris_Init();
				else
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
				if (!Block_CollisionRotate(*PlayerBlock))
				{
					if(PlayerBlock->Rotation != 270)
						PlayerBlock->Rotation += 90;
					else
						PlayerBlock->Rotation = 0;
				}
				break;
			}
			default:
			{
				break;
			}
		}
	}
	if(PlayerBlock != nullptr)
	{
		Block_RemovePlayerBlockFromArray();
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
	switch(rand0to2)
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

