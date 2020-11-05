/*
 * DynamicLed.cc
 *
 *  Created on: 29.10.2020
 *      Author: Melchior
 */
#include "DynamicLed.h"
#include "LedMatrixDriver.h"

/* Function declaration */
static void rainbowAnimation(void);
static void lauflichtAnimation(void);
static void stroboAnimation(void);
static void weihnachtAnimation(void);

void DynamicLed_animation(dynamicLedMode_t animation)
{
	switch(animation)
	{
		case rainbow:
		{
			rainbowAnimation();
		}break;

		case lauflicht:
		{
			lauflichtAnimation();
		}break;

		case strobo:
		{
			stroboAnimation();
		}break;

		case weihnachtsanimation:
		{
			weihnachtAnimation();
		}break;
		default: break;
	}
}

//139,0,139 dunkles lila
//0,0,180 irgendein blau
//0,180,0 irgendein gruen
//180,180,0 irgendein gelb
//180,0,0 irgendein rot
u32 colorArray[5][3] = {{139,139,139},{0,0,180},{0,180,0},{180,180,0},{180,0,0}};
static void rainbowAnimation(void)
{
	static u32 animationCount = 0;
	static u8 colorCount = 0;
	for(u8 y=0 ; y<20 ; y++)
	{
		colorCount = 0;
		for(u8 x=0 ; x<20 ; x++)
		{
			LedMatrixDriver_SetLed(x,y,colorArray[colorCount][0],colorArray[colorCount][1],colorArray[colorCount][2]);
			if(x==4 || x==9 || x==14 || x==19) colorCount++;
		}
	}
	LedMatrixDriver_SlideAllLed();
	LedMatrixDriver_Update();
	animationCount++;
}


