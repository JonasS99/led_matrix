/*
 * StaticLedAnimations.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#include "StaticLED.h" /* Include own header file */

shapes state = StaticLED_state_IDLE;



void StaticLED_ColorController(u8 R, u8 G, u8 B){
	LedMatrixDriver_SetAllLed(R, G, B); // Set all LEDs to the delivered value
}

void StaticLED_Shapes(shapes selection){
	switch(selection){
		case StaticLED_state_IDLE:{
			//do nothing
			break;
		}
		case StaticLED_state_ChristmasTree:{
			StaticLED_ChristmasTree();
			break;
		}
	}
}


void StaticLED_ChristmasTree(void){
	for(u16 i=9; i<=10; i++) for(u16 j=0; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 0);
	for(u16 i=8; i<=11; i++) for(u16 j=2; j<=3; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=7; i<=12; i++) for(u16 j=4; j<=5; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=6; i<=13; i++) for(u16 j=6; j<=7; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=5; i<=14; i++) for(u16 j=8; j<=9; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=4; i<=15; i++) for(u16 j=10; j<=11; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=3; i<=16; i++) for(u16 j=12; j<=13; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=2; i<=17; i++) for(u16 j=14; j<=15; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=1; i<=18; i++) for(u16 j=16; j<=17; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for(u16 i=8; i<=11; i++) for(u16 j=18; j<=19; j++) LedMatrixDriver_SetLed(i, j, 105, 65, 0);
}

