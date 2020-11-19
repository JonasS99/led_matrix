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
static void squareAnimation(void);
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

		case square:
		{
			squareAnimation();
		}break;

		case spiral:
		{
			spiralAnimation();
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

static void squareAnimation(void)
{
	static u32 animationCount = 0;
	u8 size = 20;
	u8 position = 0;
	if(animationCount>=150)
	{
		animationCount = 0;
		while(size>3)
		{
			LedMatrixDriver_CreateSquare(position,position,size);
			position++;
			size = size - 2;
		}
	}
	animationCount++;
}

typedef enum
{
	forward=0,
	downward,
	backward,
	upward
}direction;
direction route  = forward;
static void spiralAnimation(void)
{
	static u8 r = 255;
	static u8 g = 255;
	static u8 b = 0;

	u8 x = 0;
	u8 y = 0;
	static u32 animationCount = 0;
	static u8 step = 0;
	static u8 stepMax = 19;
	u8 jumpCnt = 0;
	if(animationCount>=150)
	{
			animationCount = 0;

			switch(route)
			{
				case(forward):
				{
					if(jumpCnt==3)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					x = x + step;
					LedMatrixDriver_SetLed(x,y,r,g,b);
					if(step==stepMax)
					{
						route = downward;
						jumpCnt++;
						step = 0;
					}
					step++;
				}
				break;
				case(downward):
				{
					if(jumpCnt==3)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					y = y - step;
					LedMatrixDriver_SetLed(x,y,r,g,b);
					{
						route = backward;
						jumpCnt++;
						step = 0;
					}
					step++;
				}break;
				case(backward):
				{
					if(jumpCnt==3)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					x = x - step;
					LedMatrixDriver_SetLed(x,y,r,g,b);
					if(step==stepMax)
					{
						route = upward;
						jumpCnt++;
						step = 0;
					}
					step++;
				}break;
				case(upward):
				{
					if(jumpCnt==3)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
						step = 0;
					}
					y = y + step;
					LedMatrixDriver_SetLed(x,y,r,g,b);
					if(step==stepMax)
					{
						route = forward;
						jumpCnt++;
						step = 0;
					}
					step++;
				}break;
				default:
				{
					break;
				}
			}


		}
		animationCount++;
}


