/*
 * Block.cc
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */



#include "Block.h"
#include "LedMatrixDriver.h"
u8 pixel_Array[20][20][3] = {0};

//Names for the Block: https://www.netzpanorama.de/tetris-bloecke-ein-altes-nintendo-handbuch-kennt-die-namen-der-7-tetriminos/

void Block_cicle(){
	LEDMatrixDriver_Set_Pixel_Array(pixel_Array);

	for(u8 i = 0 ; i<20 ; i++){
		for(u8 j = 1 ; j<20 ; j++){
			pixel_Array[i][j][0] = pixel_Array[i][j-1][0];
			pixel_Array[i][j][1] = pixel_Array[i][j-1][1];
			pixel_Array[i][j][2] = pixel_Array[i][j-1][2];
		}
		pixel_Array[i][0][0] = 0;
		pixel_Array[i][0][1] = 0;
		pixel_Array[i][0][2] = 0;
	}
	//wait.....
	for(u32 k = 0 ; k<200000 ; k++){}
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
