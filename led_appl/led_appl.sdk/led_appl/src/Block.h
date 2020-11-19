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
extern u8 pixel_Array[20][20][3];

void Block_cicle();
void Block_Smashboy(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Hero(u16 Rotation, u8 PositionX, u8 PositionY);
void Block_Teewee(u16 Rotation, u8 PositionX, u8 PositionY);


#endif /* SRC_BLOCK_H_ */
