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
static void fpgaAnimation(void);

/* variable declaration */
static bool firstAccessCheck;

typedef enum
{
	init=0,
	forward,
	downward,
	backward,
	upward
}direction;

void DynamicLed_animation(dynamicLedMode_t animation, bool firstAccess)
{
	firstAccessCheck = firstAccess;
	switch(animation)
	{
		case idle:
		{
			//do nothing
		}break;

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

		case fpga:
		{
			fpgaAnimation();
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
	static u8 r = 255;
	static u8 g = 0;
	static u8 b = 0;
	if(firstAccessCheck==1)
	{
		LedMatrixDriver_ClearAllLed();
		for(u8 x=0 ; x<20 ; x++)
		{
			//colorCount = 0;
			for(u8 y=0 ; y<20 ; y++)
			{
				LedMatrixDriver_SetLed(x,y,r,g,b);
				LedMatrixDriver_ShiftColors(&r,&g,&b);
				//colorArray[colorCount][0],colorArray[colorCount][1],colorArray[colorCount][2]);
				//if(x==3 || x==7 || x==11 || x==15) colorCount++;
			}
		}
	}
	firstAccessCheck = 0;
	if(animationCount>=40)
	{
		LedMatrixDriver_SlideAllLedUp();
		LedMatrixDriver_SlideAllLedRight();
		animationCount = 0;
	}
	animationCount++;
}

static void fpgaAnimation(void)
{
	static u16 tmp;
	static u8 r = 255;
	static u8 g = 0;
	static u8 b = 0;
	static u32 animationCount = 0;
	if(firstAccessCheck==1) //create "FPGA"
	{
		static uint32_t fpga[9]=
		{(0b11110111101111011110),
		(0b10000100101000010010),
		(0b10000100101000010010),
		(0b11100111101000011110),
		(0b10000100001011010010),
		(0b10000100001001010010),
		(0b10000100001001010010),
		(0b10000100001001010010),
		(0b10000100001111010010)};

		 for(u8 y = 0 ; y < 9 ; y++)
		 {
			 for (u8 x = 0 ; x <20 ; x++)
			 {
				 tmp = (fpga[y]>>x);
				 tmp = tmp & 0b00000000000000000001;
				 if(tmp==1)
				 {
					 LedMatrixDriver_SetLed(y+5,x,r,g,b);
				 }
			 }
		 }
		 for(u8 x=0 ; x < 20 ; x+=5)LedMatrixDriver_CreateSquare(x,0,4);
		 for(u8 x=0 ; x < 20 ; x+=5)LedMatrixDriver_CreateSquare(x,16,4);
	}
	if(animationCount > 50)
	{
		animationCount = 0;

		LedMatrixDriver_SlideAllLedRight();
		LedMatrixDriver_ShiftAllColors();
	}
	animationCount++;
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


static void spiralAnimation(void)
{
	static direction route  = init;
	static u8 r = 255;
	static u8 g = 0;
	static u8 b = 0;
	static u32 animationCount = 0;
	static u8 jumpLimit = 3;
    static u8 x,y = 0;
    static u8 step = 0;
    static u8 stepMax = 20;
    static u8 jumpCnt = 0;
	static u8 xTmp, yTmp = 0;

	if (firstAccessCheck)
	 route = init;


	if(animationCount>=10)
	{
			animationCount = 0;
			LedMatrixDriver_ShiftColors(&r,&g,&b);
			switch(route)
			{
				case(init):
				{
					LedMatrixDriver_ClearAllLed();
					jumpLimit = 3;
					x = 0;
				    y = 0;
					step = 0;
					stepMax = 20;
					jumpCnt = 0;
					route = forward;
				}break;
				case(forward):
				{
					if(jumpCnt==jumpLimit)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					xTmp = x + step;
					step++;
					LedMatrixDriver_SetLed(xTmp,y,r,g,b);
					if(step==stepMax)
					{
						route = downward;
						jumpCnt++;
						step = 0;
						x = xTmp;
					}
				}break;
				case(downward):
				{
					if(jumpCnt==jumpLimit)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					yTmp = y + step;
					step++;
					LedMatrixDriver_SetLed(x,yTmp,r,g,b);
					if(step==stepMax)
					{
						route = backward;
						jumpCnt++;
						step = 0;
						y = yTmp;
					}
				}break;
				case(backward):
				{
					if(jumpCnt==jumpLimit)
					{
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					xTmp = x - step;
					step++;
					LedMatrixDriver_SetLed(xTmp,y,r,g,b);
					if(step==stepMax)
					{
						route = upward;
						jumpCnt++;
						step = 0;
						x = xTmp;
					}
				}break;
				case(upward):
				{
					if(jumpCnt==jumpLimit)
					{
						jumpLimit = 2;
						stepMax=stepMax-2;
						jumpCnt = 0;
					}
					yTmp = y - step;
					step++;
					LedMatrixDriver_SetLed(x,yTmp,r,g,b);
					if(step==stepMax)
					{
						jumpLimit = 2;
						route = forward;
						jumpCnt++;
						step = 0;
						y = yTmp;
						if(stepMax==2)
						{
							route = init;
						}
					}
				}break;
				default: break;
			}
		}
		animationCount++;
}




