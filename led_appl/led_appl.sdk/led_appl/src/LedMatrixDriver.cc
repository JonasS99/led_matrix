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




