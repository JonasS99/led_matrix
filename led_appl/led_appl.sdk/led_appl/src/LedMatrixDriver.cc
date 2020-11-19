/*
 * LedMatrixDriver.cc
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

/* Header file */
#include "LedMatrixDriver.h" /* Include own header file */
#include "MyTypDefs.h"
#include "xgpio.h"

/*defines*/
#define MATRIX_SIZE 20

/* Function declaration */


/* Variable */
XGpio GpioOutput0; /* The driver instance for GPIO Device configured as O/P */
XGpio GpioOutput1; /* The driver instance for GPIO Device configured as O/P */
u32 ledMatrix[20][20] = {0}; /* Led matrix rgb data */
u16 ledPosLut[400][2] = {0}; /* Look up table for matrix */


/* Function*/

/*
 * Init led matrix driver
 */
void LedMatrixDriver_Init(void)
{
	/* init gpios */
	XGpio_Initialize(&GpioOutput0, XPAR_AXI_GPIO_0_DEVICE_ID);
	XGpio_Initialize(&GpioOutput1, XPAR_AXI_GPIO_1_DEVICE_ID);

	/* Set the direction for all signals to be outputs */
	XGpio_SetDataDirection(&GpioOutput0, LED_DATA, 0x0);
	XGpio_SetDataDirection(&GpioOutput0, DATA_VALID, 0x0);
	XGpio_SetDataDirection(&GpioOutput1, ADDRESS, 0x0);

	for (u32 i = 0; i < 400; i++)
	{
	   // Set the GPIO outputs to low
		XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);
	    XGpio_DiscreteWrite(&GpioOutput1, ADDRESS,    i);
	    XGpio_DiscreteWrite(&GpioOutput0, LED_DATA,   0);
	    XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x1);
	}
	XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);

	u16 p = 0;
	for(u16 i=0; i<20; i++)
	{
		for(u16 j=0; j<20; j++)
		{
			if(i%2 == 0)
			{
				ledPosLut[p][0] = j;
			}
			else
			{
				ledPosLut[p][0] = 19-j;
			}
			ledPosLut[p][1] = i;
			p++;
		}
	}
}

/*
 * Update matrix from ledMatrix array
 * has to be called to make ledMatrix array
 * visible on physical array
 */
void LedMatrixDriver_Update(void)
{

	for (u32 i = 0; i < 400; i++)
	{
	   // Set the GPIO outputs to low
		XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);
	   XGpio_DiscreteWrite(&GpioOutput1, ADDRESS,    i);
	   XGpio_DiscreteWrite(&GpioOutput0, LED_DATA,   ledMatrix[ledPosLut[i][0]][ledPosLut[i][1]]);
	   XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x1);
	}
	XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);

}

/*
 * Set one led to rgb color in ledMatrix array
 */
void LedMatrixDriver_SetLed(u8 PosX, u8 PosY, u8 R, u8 G, u8 B)
{
	ledMatrix[PosX][PosY] = ((u32)R<<16) | ((u32)G<<8) | ((u32)B);
}

void LedMatrixDriver_ClearLed(u8 PosX, u8 PosY)
{
	ledMatrix[PosX][PosY] = 0;
}

/*
 * Set all led to one color in ledMatrix array
 */
void LedMatrixDriver_SetAllLed(u8 R, u8 G, u8 B)
{
	for(u16 i=0; i<20; i++) for(u16 j=0; j<20; j++) LedMatrixDriver_SetLed(i ,j ,R ,G ,B );
}

/*
 * Clear all led
 */
void LedMatrixDriver_ClearAllLed(void)
{
	for(u16 i=0; i<20; i++) for(u16 j=0; j<20; j++) LedMatrixDriver_ClearLed(i ,j);
}

/*
 * Slide all led to the right
 */
void LedMatrixDriver_SlideAllLed(void)
{
	u32 last;
	for(u8 y=0 ; y<20 ; y++)
	{
		last = ledMatrix[19][y];
		for(u8 x=19 ; x>0 ; x--)
		{
			ledMatrix[x][y] = ledMatrix[x-1][y];
		}
		ledMatrix[0][y] = last;
	}
}

/*
 * create square
 */
void LedMatrixDriver_CreateSquare(u8 startX, u8 startY, u8 size)
{
	static u8 r = 255;
	static u8 g = 0;
	static u8 b = 255;
	static u8 x,y = 0;
	LedMatrixDriver_ClearAllLed();
	u8 side = 0;
	x = startX;
	y = startY;
	while(side<4)
	{
		for(u8 a=0 ; a<size ; a++)
		{
			if(side==0) LedMatrixDriver_SetLed(x+a,y,r,g,b);
			else if(side==1) LedMatrixDriver_SetLed(x+size-1,y+a,r,g,b);
			else if(side==2) LedMatrixDriver_SetLed(x+a,y+size-1,r,g,b);
			else if(side==3) LedMatrixDriver_SetLed(x,y+a,r,g,b);
		}
		side++;
	}
}
/*
 * change rgb color smoothly
 */
void LEDMatrixDriver_SetLEDs_ForLoop(u16 i1,u16 i2,u16 j1,u16 j2,u16 r,u16 g,u16 b){
	for(u16 i=i1; i<=i2; i++) for(u16 j=j1; j<=j2; j++) LedMatrixDriver_SetLed(i, j, r, g, b);
}


void LEDMatrixDriver_Pixelmatrix(void){
	u8 bild[]={0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x88,0xf6,0x55,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x88,0xf6,0x55,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xfd,0xee,0x1c,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62,0xbd,0xef,0x62};

	u16 r = 0;
	u16 g = 1;
	u16 b = 2;
	LedMatrixDriver_ClearAllLed();
	for(u8 y = 0 ; y<20 ; y++){
		for (u8 x = 0 ; x<20 ; x++){
			LedMatrixDriver_SetLed(x , y, bild[r], bild[g], bild[b]);
			r = r + 3;
			g = g + 3;
			b = b + 3;
		}
	}
}


void LEDMatrixDriver_Set_Pixel_Array(u8 Pixel_Array[20][20][3]){
	for(u8 i = 0 ; i<20 ; i++){
		for(u8 j = 0 ; j<20 ; j++){
			LedMatrixDriver_SetLed(i , j, Pixel_Array[i][j][0], Pixel_Array[i][j][1], Pixel_Array[i][j][2]);
		}
	}
}






