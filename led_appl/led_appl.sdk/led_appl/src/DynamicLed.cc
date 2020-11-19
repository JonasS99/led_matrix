/*
 * DynamicLed.cc
 *
 *  Created on: 29.10.2020
 *      Author: Melchior
 */
#include "DynamicLed.h"
#include "LedMatrixDriver.h"

/* module global function declaration */
static void rainbowAnimation(void);
static void spiralAnimation(void);
static void stroboAnimation(void);
static void weihnachtAnimation(void);

/* variable declaration */
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

		case spiral:
		{
			spiralAnimation();
		}break;

		case strobo:
		{
			//stroboAnimation();
		}break;

		case weihnachtsanimation:
		{
//			weihnachtAnimation();
		}break;
		default: break;
	}
}

//139,0,139 dunkles lila
//0,0,180 irgendein blau
//0,180,0 irgendein gruen
//180,180,0 irgendein gelb
//180,0,0 irgendein rot
u32 colorArray[5][3] = {{255,0,255},{0,0,255},{0,255,0},{255,255,0},{255,0,0}};
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

static void weihnachtAnimation(void)
{

}

static void spiralAnimation(void)
{
	static u32 animationCount = 0;
	static u8 size[3] = {5,10,20};
	if(animationCount>=80)
	{
		animationCount = 0;
		static u8 index = 0;
		LedMatrixDriver_CreateSquare(0,0,size[index]);
		if(index>1) index = 0;
		else index++;
	}
	animationCount++;
}



