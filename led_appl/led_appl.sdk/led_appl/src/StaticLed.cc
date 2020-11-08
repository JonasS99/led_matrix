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

void StaticLED_EmojiSmile(void){
	//Set the Yellow circle for the emoji (Yellow)
	for(u16 i=7; i<=12; i++) for(u16 j=0; j<=0; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=5; i<=14; i++) for(u16 j=1; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=4; i<=15; i++) for(u16 j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=3; i<=16; i++) for(u16 j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=2; i<=17; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=1; i<=18; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=0; i<=19; i++) for(u16 j=7; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=1; i<=18; i++) for(u16 j=13; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=2; i<=17; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=3; i<=16; i++) for(u16 j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=4; i<=15; i++) for(u16 j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=5; i<=14; i++) for(u16 j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=7; i<=12; i++) for(u16 j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	//Set the eyes from the emoji (broun)
	//Left eye
	for(u16 i=6; i<=7; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=5; i<=8; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=6; i<=7; i++) for(u16 j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//right Eye
	for(u16 i=12; i<=13; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=11; i<=14; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=12; i<=13; i++) for(u16 j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//Set the mouth (White)
	for(u16 i=5; i<=5; i++) for(u16 j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=14; i<=14; i++) for(u16 j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=5; i<=7; i++) for(u16 j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=12; i<=14; i++) for(u16 j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=5; i<=14; i++) for(u16 j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=6; i<=13; i++) for(u16 j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=7; i<=12; i++) for(u16 j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=8; i<=11; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
}

void StaticLED_EmojiSad(void){
	//Set the Yellow circle for the emoji (Yellow)
	for(u16 i=7; i<=12; i++) for(u16 j=0; j<=0; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=5; i<=14; i++) for(u16 j=1; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=4; i<=15; i++) for(u16 j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=3; i<=16; i++) for(u16 j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=2; i<=17; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=1; i<=18; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=0; i<=19; i++) for(u16 j=7; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=1; i<=18; i++) for(u16 j=13; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=2; i<=17; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=3; i<=16; i++) for(u16 j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=4; i<=15; i++) for(u16 j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=5; i<=14; i++) for(u16 j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for(u16 i=7; i<=12; i++) for(u16 j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	//Set the eyes from the emoji (brown)
	//Left eye
	for(u16 i=6; i<=7; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=5; i<=8; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=6; i<=7; i++) for(u16 j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//right Eye
	for(u16 i=12; i<=13; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=11; i<=14; i++) for(u16 j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for(u16 i=12; i<=13; i++) for(u16 j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//Set the mouth (White)
	for(u16 i=8; i<=11; i++) for(u16 j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=7; i<=12; i++) for(u16 j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);

	for(u16 i=6; i<=7; i++) for(u16 j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=12; i<=13; i++) for(u16 j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=5; i<=6; i++) for(u16 j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=13; i<=14; i++) for(u16 j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=5; i<=5; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for(u16 i=14; i<=14; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
}

void StaticLED_Mario(void){
	/*RGB-Values:
	(255, 0, 0); Red
	(43, 17, 0); Brown, Hairs and face
	(255, 179, 128); skin color
	(29, 29, 255); Blue
	(255, 255, 0); yellow
 	(80, 45, 22); brown shoes
	*/
	//Cap
	for(u16 i=7; i<=11; i++) for(u16 j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=6; i<=14; i++) for(u16 j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=12; i<=12; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	//Face skin color
	for(u16 i=6; i<=11; i++) for(u16 j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=5; i<=13; i++) for(u16 j=5; j<=5; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=5; i<=14; i++) for(u16 j=6; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=5; i<=13; i++) for(u16 j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=7; i<=12; i++) for(u16 j=8; j<=8; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
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
	for(u16 i=6; i<=10; i++) for(u16 j=9; j<=9; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for(u16 i=5; i<=13; i++) for(u16 j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for(u16 i=4; i<=14; i++) for(u16 j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for(u16 i=6; i<=12; i++) for(u16 j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	//Hands
	for(u16 i=4; i<=5; i++) for(u16 j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=4; i<=6; i++) for(u16 j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=4; i<=5; i++) for(u16 j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=13; i<=14; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=12; i<=14; i++) for(u16 j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for(u16 i=13; i<=14; i++) for(u16 j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	//trousers
	LedMatrixDriver_SetLed(8, 9, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 12, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 12, 255, 0, 0);
	for(u16 i=7; i<=12; i++) for(u16 j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=6; i<=13; i++) for(u16 j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=6; i<=8; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=6; i<=8; i++) for(u16 j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=11; i<=13; i++) for(u16 j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(u16 i=11; i<=13; i++) for(u16 j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 13, 255, 255, 0); //Yellow dots
	LedMatrixDriver_SetLed(11, 13, 255, 255, 0); //Yellow dots
	//shoes
	for(u16 i=5; i<=7; i++) for(u16 j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 80, 45, 22);
	for(u16 i=10; i<=12; i++) for(u16 j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 80, 45, 22);
	//Green gras
	for(u16 i=0; i<=19; i++) for(u16 j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 0, 200, 0);
	for(u16 i=0; i<=19; i++) for(u16 j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 0, 200, 0);
}






