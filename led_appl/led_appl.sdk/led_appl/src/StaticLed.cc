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
	u16 i, j;
	for( i=9; i<=10; i++) for( j=0; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 0);
	for( i=8; i<=11; i++) for( j=2; j<=3; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=7; i<=12; i++) for( j=4; j<=5; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=6; i<=13; i++) for( j=6; j<=7; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=5; i<=14; i++) for( j=8; j<=9; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=4; i<=15; i++) for( j=10; j<=11; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=3; i<=16; i++) for( j=12; j<=13; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=2; i<=17; i++) for( j=14; j<=15; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=1; i<=18; i++) for( j=16; j<=17; j++) LedMatrixDriver_SetLed(i, j, 0, 120, 0);
	for( i=8; i<=11; i++) for( j=18; j<=19; j++) LedMatrixDriver_SetLed(i, j, 105, 65, 0);
}

void StaticLED_EmojiSmile(void){
	u16 i, j;
	//Set the Yellow circle for the emoji (Yellow)
	for( i=7; i<=12; i++) for( j=0; j<=0; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=5; i<=14; i++) for( j=1; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=4; i<=15; i++) for( j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=3; i<=16; i++) for( j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=2; i<=17; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=1; i<=18; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=0; i<=19; i++) for( j=7; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=1; i<=18; i++) for( j=13; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=2; i<=17; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=3; i<=16; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=4; i<=15; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=5; i<=14; i++) for( j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=7; i<=12; i++) for( j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	//Set the eyes from the emoji (broun)
	//Left eye
	for( i=6; i<=7; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=5; i<=8; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=6; i<=7; i++) for( j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//right Eye
	for( i=12; i<=13; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=11; i<=14; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=12; i<=13; i++) for( j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//Set the mouth (White)
	for( i=5; i<=5; i++) for( j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=14; i<=14; i++) for( j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=5; i<=7; i++) for( j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=12; i<=14; i++) for( j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=5; i<=14; i++) for( j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=6; i<=13; i++) for( j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=7; i<=12; i++) for( j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=8; i<=11; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
}

void StaticLED_EmojiSad(void){
	u16 i, j;
	//Set the Yellow circle for the emoji (Yellow)
	for(i=7; i<=12; i++) for( j=0; j<=0; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=5; i<=14; i++) for( j=1; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=4; i<=15; i++) for( j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=3; i<=16; i++) for( j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=2; i<=17; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=1; i<=18; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=0; i<=19; i++) for( j=7; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=1; i<=18; i++) for( j=13; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=2; i<=17; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=3; i<=16; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=4; i<=15; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=5; i<=14; i++) for( j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	for( i=7; i<=12; i++) for( j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 255, 188, 0);
	//Set the eyes from the emoji (brown)
	//Left eye
	for( i=6; i<=7; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=5; i<=8; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=6; i<=7; i++) for( j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//right Eye
	for( i=12; i<=13; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=11; i<=14; i++) for( j=5; j<=6; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	for( i=12; i<=13; i++) for( j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 70, 25, 0);
	//Set the mouth (White)
	for( i=8; i<=11; i++) for( j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=7; i<=12; i++) for( j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);

	for( i=6; i<=7; i++) for( j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=12; i<=13; i++) for( j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=5; i<=6; i++) for( j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=13; i<=14; i++) for( j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=5; i<=5; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
	for( i=14; i<=14; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 255);
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
	u16 i, j;
	for(i=7; i<=11; i++) for(j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(i=6; i<=14; i++) for(j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for(i=12; i<=12; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	//Face skin color
	for( i=6; i<=11; i++) for( j=4; j<=4; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=5; i<=13; i++) for( j=5; j<=5; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=5; i<=14; i++) for( j=6; j<=6; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=5; i<=13; i++) for( j=7; j<=7; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=7; i<=12; i++) for( j=8; j<=8; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
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
	for( i=6; i<=10; i++) for( j=9; j<=9; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for( i=5; i<=13; i++) for( j=10; j<=10; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for( i=4; i<=14; i++) for( j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	for( i=6; i<=12; i++) for( j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 29, 29, 255);
	//Hands
	for( i=4; i<=5; i++) for( j=12; j<=12; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=4; i<=6; i++) for( j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=4; i<=5; i++) for( j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=13; i<=14; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=12; i<=14; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	for( i=13; i<=14; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 255, 179, 128);
	//trousers
	LedMatrixDriver_SetLed(8, 9, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 12, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 10, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 11, 255, 0, 0);
	LedMatrixDriver_SetLed(11, 12, 255, 0, 0);
	for( i=7; i<=12; i++) for( j=13; j<=13; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for( i=6; i<=13; i++) for( j=14; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for( i=6; i<=8; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for( i=6; i<=8; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for( i=11; i<=13; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	for( i=11; i<=13; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 255, 0, 0);
	LedMatrixDriver_SetLed(8, 13, 255, 255, 0); //Yellow dots
	LedMatrixDriver_SetLed(11, 13, 255, 255, 0); //Yellow dots
	//shoes
	for( i=5; i<=7; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 80, 45, 22);
	for( i=10; i<=12; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 80, 45, 22);
	//Green gras
	for( i=0; i<=19; i++) for( j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 0, 200, 0);
	for( i=0; i<=19; i++) for( j=19; j<=19; j++) LedMatrixDriver_SetLed(i, j, 0, 200, 0);
}

void StaticLED_Minion(void){
	u16 i, j;
	//Background grey-brown
	for( i=0; i<=19; i++) for( j=0; j<=19; j++) LedMatrixDriver_SetLed(i, j, 209, 193, 158);
	//Minion, yellow
	for( i=7; i<=12; i++) for( j=1; j<=1; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 0);
	for( i=6; i<=13; i++) for( j=2; j<=2; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 0);
	for( i=5; i<=14; i++) for( j=3; j<=14; j++) LedMatrixDriver_SetLed(i, j, 255, 255, 0);
	//eyes, grey
	for( i=6; i<=7; i++) for( j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 209, 199, 214);
	for( i=9; i<=10; i++) for( j=3; j<=3; j++) LedMatrixDriver_SetLed(i, j, 209, 199, 214);
	for( i=5; i<=11; i++) for( j=4; j<=5; j++) LedMatrixDriver_SetLed(i, j, 209, 199, 214);
	for( i=6; i<=7; i++) for( j=6; j<=6; j++) LedMatrixDriver_SetLed(i, j, 209, 199, 214);
	for( i=9; i<=10; i++) for( j=6; j<=6; j++) LedMatrixDriver_SetLed(i, j, 209, 199, 214);
	// black
	for( i=12; i<=14; i++) for( j=4; j<=5; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
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
	for( i=7; i<=9; i++) for( j=9; j<=9; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	//trousers
	LedMatrixDriver_SetLed(5, 10, 0, 0, 255);
	LedMatrixDriver_SetLed(14, 10, 0, 0, 255);
	for( i=6; i<=13; i++) for( j=11; j<=11; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 255);
	for( i=7; i<=12; i++) for( j=12; j<=13; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 255);
	for( i=6; i<=13; i++) for( j=14; j<=16; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 255);
	//legs, black
	for( i=4; i<=5; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=14; i<=15; i++) for( j=15; j<=15; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=5; i<=5; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=14; i<=14; i++) for( j=16; j<=16; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=7; i<=8; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=11; i<=12; i++) for( j=17; j<=17; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=6; i<=8; i++) for( j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);
	for( i=11; i<=13; i++) for( j=18; j<=18; j++) LedMatrixDriver_SetLed(i, j, 0, 0, 0);

}





