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
			LedMatrixDriver_ClearAllLed();
			StaticLED_ChristmasTree();
			break;
		}
		case StaticLED_state_EmojiSmile:{
			LedMatrixDriver_ClearAllLed();
			StaticLED_EmojiSmile();
			break;
		}
		case StaticLED_state_EmojiSad:{
			LedMatrixDriver_ClearAllLed();
			StaticLED_EmojiSad();
			break;
		}
		case StaticLED_state_Mario:{
			LedMatrixDriver_ClearAllLed();
			StaticLED_Mario();
			break;
		}
		case StaticLED_state_Minion:{
			LedMatrixDriver_ClearAllLed();
			StaticLED_Minion();
			break;
		}
		default:{
			//do nothing
			break;
		}
	}
}


void StaticLED_ChristmasTree(void){
	//Star on the top, yellow
	LEDMatrixDriver_SetLEDs_ForLoop(9, 10, 0, 1, 255, 255, 0);
	//main part of the tree, green
	LEDMatrixDriver_SetLEDs_ForLoop(8, 11, 2, 3, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 4, 5, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 6, 7, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 8, 9, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 15, 10, 11, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(3, 16, 12, 13, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(2, 17, 14, 15, 0, 120, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(1, 18, 16, 17, 0, 120, 0);
	//trunk, brown
	LEDMatrixDriver_SetLEDs_ForLoop(8, 11, 18, 19, 105, 65, 0);
}

void StaticLED_EmojiSmile(void){
	//Set the Yellow circle for the emoji (Yellow)
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 0, 0, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 1, 1, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 15, 2, 2, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(3, 16, 3, 3, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(2, 17, 4, 4, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(1, 18, 5, 6, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(0, 19, 7, 12, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(1, 18, 13, 14, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(2, 17, 15, 15, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(3, 16, 16, 16, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 15, 17, 17, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 18, 18, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 19, 19, 255, 188, 0);
	//Set the eyes from the emoji (brown)
	//Left eye
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 4, 4, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 8, 5, 6, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 7, 7, 70, 25, 0);
	//right Eye
	LEDMatrixDriver_SetLEDs_ForLoop(12, 13, 4, 4, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 14, 5, 6, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 13, 7, 7, 70, 25, 0);
	//Set the mouth (White)
	LEDMatrixDriver_SetLEDs_ForLoop(5, 5, 10, 10, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(14, 14, 10, 10, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 7, 11, 11, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 14, 11, 11, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 12, 12, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 13, 13, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 14, 14, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(8, 11, 15, 15, 255, 255, 255);
}

void StaticLED_EmojiSad(void){
	//Set the Yellow circle for the Emoji (Yellow)
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 0, 0, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 1, 1, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 15, 2, 2, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(3, 16, 3, 3, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(2, 17, 4, 4, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(1, 18, 5, 6, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(0, 19, 7, 12, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(1, 18, 13, 14, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(2, 17, 15, 15, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(3, 16, 16, 16, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 15, 17, 17, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 18, 18, 255, 188, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 19, 19, 255, 188, 0);
	//Set the eyes from the Emoji (brown)
	//Left eye
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 4, 4, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 8, 5, 6, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 7, 7, 70, 25, 0);
	//right Eye
	LEDMatrixDriver_SetLEDs_ForLoop(12, 13, 4, 4, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 14, 5, 6, 70, 25, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 13, 7, 7, 70, 25, 0);
	//Set the mouth (White)
	LEDMatrixDriver_SetLEDs_ForLoop(8, 11, 11, 11, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 12, 12, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 13, 13, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 13, 13, 13, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 6, 14, 14, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(13, 14, 14, 13, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 5, 15, 15, 255, 255, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(14, 14, 15, 15, 255, 255, 255);
}

void StaticLED_Mario(void){
	/*RGB-Values:
	(255, 0, 0); Red
	(43, 17, 0); Brown, Hairs and face
	(255, 179, 128); skin color
	(29, 29, 255); Blue
	(255, 255, 0); yellow
 	(80, 45, 22); brown shoes*/

	//Cap
	LEDMatrixDriver_SetLEDs_ForLoop(7, 11, 2, 2, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 14, 3, 3, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 12, 4, 4, 255, 0, 0);
	//Face skin color
	LEDMatrixDriver_SetLEDs_ForLoop(6, 11, 4, 4, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 13, 5, 5, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 6, 6, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 13, 7, 7, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 8, 8, 255, 179, 128);
	//Hairs + Face
	LedMatrixDriver_SetLed(6, 4, 43, 17, 0);
	LedMatrixDriver_SetLed(7, 4, 43, 17, 0);
	LedMatrixDriver_SetLed(8, 4, 43, 17, 0);
	LedMatrixDriver_SetLed(11, 4, 43, 17, 0);
	LedMatrixDriver_SetLed(5, 5, 43, 17, 0);
	LedMatrixDriver_SetLed(7, 5, 43, 17, 0);
	LedMatrixDriver_SetLed(11, 5, 43, 17, 0);
	LedMatrixDriver_SetLed(5, 6, 43, 17, 0);
	LedMatrixDriver_SetLed(7, 6, 43, 17, 0);
	LedMatrixDriver_SetLed(8, 6, 43, 17, 0);
	LedMatrixDriver_SetLed(12, 6, 43, 17, 0);
	LedMatrixDriver_SetLed(5, 7, 43, 17, 0);
	LedMatrixDriver_SetLed(6, 7, 43, 17, 0);
	LedMatrixDriver_SetLed(11, 7, 43, 17, 0);
	LedMatrixDriver_SetLed(12, 7, 43, 17, 0);
	LedMatrixDriver_SetLed(13, 7, 43, 17, 0);
	LedMatrixDriver_SetLed(14, 7, 43, 17, 0);
	//T-shirt
	LEDMatrixDriver_SetLEDs_ForLoop(6, 10, 9, 9, 29, 29, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 13, 10, 10, 29, 29, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 14, 11, 11, 29, 29, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 12, 12, 12, 29, 29, 255);
	//Hands
	LEDMatrixDriver_SetLEDs_ForLoop(4, 5, 12, 12, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 6, 13, 13, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(4, 5, 14, 14, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(13, 14, 15, 15, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(12, 14, 16, 16, 255, 179, 128);
	LEDMatrixDriver_SetLEDs_ForLoop(13, 14, 17, 17, 255, 179, 128);
	//Hands
	//trousers
	LedMatrixDriver_SetLed(8, 9, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 12, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 12, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 13, 13, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 14, 14, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 8, 15, 15, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 8, 16, 16, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 13, 15, 15, 255, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 13, 16, 16, 255, 0, 0);
	//Yellow dots
	LedMatrixDriver_SetLed(8, 13, 255, 255, 0);
	LedMatrixDriver_SetLed(11, 13, 255, 255, 0);
	//shoes
	LEDMatrixDriver_SetLEDs_ForLoop(5, 7, 17, 17, 80, 45, 22);
	LEDMatrixDriver_SetLEDs_ForLoop(10, 12, 17, 17, 80, 45, 22);
	//Green gras
	LEDMatrixDriver_SetLEDs_ForLoop(0, 19, 18, 18, 0, 200, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(0, 19, 19, 19, 0, 200, 0);
}

void StaticLED_Minion(void){
	//Background grey-brown
	LEDMatrixDriver_SetLEDs_ForLoop(0, 19, 0, 19, 209, 193, 158);
	//Minion, yellow
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 1, 1, 255, 255, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 2, 2, 255, 255, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 14, 3, 14, 255, 255, 0);
	//eyes, grey
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 3, 3, 209, 199, 214);
	LEDMatrixDriver_SetLEDs_ForLoop(9, 10, 3, 3, 209, 199, 214);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 11, 4, 5, 209, 199, 214);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 7, 6, 6, 209, 199, 214);
	LEDMatrixDriver_SetLEDs_ForLoop(9, 10, 6, 6, 209, 199, 214);
	// black
	LEDMatrixDriver_SetLEDs_ForLoop(12, 14, 4, 5, 0, 0, 0);
	//black
	LedMatrixDriver_SetLed(6, 5, 0, 0, 0);
	LedMatrixDriver_SetLed(9, 5, 0, 0, 0);
	//white
	LedMatrixDriver_SetLed(7, 5, 255, 255, 255);
	LedMatrixDriver_SetLed(10, 5, 255, 255, 255);
	LedMatrixDriver_SetLed(6, 4, 255, 255, 255);
	LedMatrixDriver_SetLed(7, 4, 255, 255, 255);
	LedMatrixDriver_SetLed(10, 4, 255, 255, 255);
	LedMatrixDriver_SetLed(11, 4, 255, 255, 255);
	//mouth, black
	LedMatrixDriver_SetLed(10, 8, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 9, 9, 9, 0, 0, 0);
	//trousers
	LedMatrixDriver_SetLed(5, 10, 0, 0, 255);
	LedMatrixDriver_SetLed(14, 10, 0, 0, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 11, 11, 0, 0, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 12, 12, 13, 0, 0, 255);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 13, 14, 16, 0, 0, 255);
	//legs, black
	LEDMatrixDriver_SetLEDs_ForLoop(4, 5, 15, 15, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(14, 15, 15, 15, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(5, 5, 16, 16, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(14, 14, 16, 16, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(7, 8, 17, 17, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 12, 17, 17, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(6, 8, 18, 18, 0, 0, 0);
	LEDMatrixDriver_SetLEDs_ForLoop(11, 13, 18, 18, 0, 0, 0);
}

void StaticLED_Wait(u32 k){
	u32 i=0;
	while(i<=k){
		i++;
	}
}

