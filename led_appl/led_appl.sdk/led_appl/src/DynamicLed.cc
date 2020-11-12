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

/* Variable declaration */
static bool firstAccessCheck;

void DynamicLed_animation(dynamicLedMode_t animation, bool firstAccess)
{
	firstAccessCheck = firstAccess;
	switch(animation)
	{
		case rainbow:
		{
			rainbowAnimation();
		}break;

		case lauflicht:
		{
			//lauflichtAnimation();
		}break;

		case strobo:
		{
			//stroboAnimation();
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
u32 colorArray[5][3] = {{139,0,139},{0,0,180},{0,180,0},{180,180,0},{255,0,0}};
static void rainbowAnimation(void)
{
	static u32 animationCount = 0;
	static u8 colorCount = 0;
	if(firstAccessCheck==1)
	{
		LedMatrixDriver_ClearAllLed();
		for(u8 y=0 ; y<20 ; y++)
		{
			colorCount = 0;
			for(u8 x=0 ; x<20 ; x++)
			{
				LedMatrixDriver_SetLed(x,y,colorArray[colorCount][0],colorArray[colorCount][1],colorArray[colorCount][2]);
				if(x==3 || x==7 || x==11 || x==15) colorCount++;
			}
		}
	}
	firstAccessCheck = 0;
	if(animationCount>=40)
	{
		LedMatrixDriver_SlideAllLed();
		animationCount = 0;
	}
	animationCount++;
}

const u8 weihnachtsmann[]={0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x88,0xf6,0x55,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x88,0xf6,0x55,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62};
static void weihnachtAnimation(void)
{
	static u16 r = 0;
	static u16 g = 1;
	static u16 b = 2;
	LedMatrixDriver_ClearAllLed();
	for(u8 y = 0 ; y<20 ; y++)
	{
		for (u8 x = 0 ; x<20 ; x++)
		{
			LedMatrixDriver_SetLed(x,y,weihnachtsmann[0],weihnachtsmann[1],weihnachtsmann[2]);
			r = r + 3;
			g = g + 3;
			b = b + 3;
		}
	}
}

