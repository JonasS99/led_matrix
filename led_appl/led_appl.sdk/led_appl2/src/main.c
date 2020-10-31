#include <stdio.h>
#include "xparameters.h"
#include "xil_cache.h"
#include "xintc.h"
#include "xgpio.h"
//#include <mtds.h>
//#include <MyDisp.h>

#define LED_DATA 1
#define DATA_VALID 2
#define ADDRESS 1
#define LED_DELAY	  100000

#define SQUARE_SIZE 4
#define LETTER_SIZE 9

static void createSquare(u16 width, u16 heigth, u8 benchmark);
static void switchOffLed();
static u8 ccwFsm();
static u8 cwFsm();
static void writeToMatrix(u32 * squareArrayPointer, u8 arraySize);
static u16 getRowSum(u8 benchmark);

static u32 squareArray[SQUARE_SIZE];
static u16 rowSumArray[] = {23,39,55,71,87,103,119,135,151,167,183};
static u32 letterIndexArray[4][9] = {
		{4,6,17,19,20,21,22,23,4},		// F
		{8,9,10,13,15,24,25,26,27},		// P {4,5,6,17,19,20,21,22,23,},
		{6,16,17,19,20,23,33,34,6},		// G
		{9,10,11,13,15,25,26,27,9}		// A {5,6,7,17,19,21,22,23,5}
};


static u8 startingPoint = 4;

typedef enum
{
	forward = 0,
	left,
	backward,
	right
}direction;

typedef enum
{
	rot 	= 0xFF0000,
	gruen 	= 0x00FF00,
	blau 	= 0x0000FF
}colorVal;


XGpio GpioOutput0; /* The driver instance for GPIO Device configured as O/P */
XGpio GpioOutput1; /* The driver instance for GPIO Device configured as O/P */

int main()
{
	u32 Delay;
	s32 i;
    Xil_ICacheEnable();
	Xil_DCacheEnable();

	/* init gpios */
	XGpio_Initialize(&GpioOutput0, XPAR_AXI_GPIO_0_DEVICE_ID);
	XGpio_Initialize(&GpioOutput1, XPAR_AXI_GPIO_1_DEVICE_ID);

	/* Set the direction for all signals to be outputs */
	XGpio_SetDataDirection(&GpioOutput0, LED_DATA, 0x0);
    XGpio_SetDataDirection(&GpioOutput0, DATA_VALID, 0x0);
	XGpio_SetDataDirection(&GpioOutput1, ADDRESS, 0x0);

	/* Set data valid to zero */
	XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);

	/* Initialize Matrix with switched off LEDs */
	switchOffLed();

	/* -------------------------Animation------------------------------*/
	u32 * letterIndexArrayPointer = letterIndexArray;
	u8 t;
	u16 rowSum;
	u32 nextIndex;
	while(1)
	{
		letterIndexArray[0][0] = 4;
		letterIndexArray[0][1] = 6;
		letterIndexArray[0][2] = 17;
		letterIndexArray[0][3] = 19;
		letterIndexArray[0][4] = 20;
		letterIndexArray[0][5] = 21;
		letterIndexArray[0][6] = 22;
		letterIndexArray[0][7] = 23;
		letterIndexArray[0][8] = 4;

		letterIndexArray[1][0] = 8;
		letterIndexArray[1][1] = 9;
		letterIndexArray[1][2] = 10;
		letterIndexArray[1][3] = 13;
		letterIndexArray[1][4] = 15;
		letterIndexArray[1][5] = 24;
		letterIndexArray[1][6] = 25;
		letterIndexArray[1][7] = 26;
		letterIndexArray[1][8] = 27;

		letterIndexArray[2][0] = 6;
		letterIndexArray[2][1] = 16;
		letterIndexArray[2][2] = 17;
		letterIndexArray[2][3] = 19;
		letterIndexArray[2][4] = 20;
		letterIndexArray[2][5] = 23;
		letterIndexArray[2][6] = 33;
		letterIndexArray[2][7] = 34;
		letterIndexArray[2][8] = 6;

		letterIndexArray[3][0] = 9;
		letterIndexArray[3][1] = 10;
		letterIndexArray[3][2] = 11;
		letterIndexArray[3][3] = 13;
		letterIndexArray[3][4] = 15;
		letterIndexArray[3][5] = 25;
		letterIndexArray[3][6] = 26;
		letterIndexArray[3][7] = 27;
		letterIndexArray[3][8] = 9;


	for (t=0; t<10; t++)
	{
		switchOffLed();
		writeToMatrix(letterIndexArrayPointer,LETTER_SIZE);
		if(t > 2)
		{
			for (i = 0; i<LETTER_SIZE; i++) letterIndexArrayPointer++; // shift array pointer to next letter p

			writeToMatrix(letterIndexArrayPointer,LETTER_SIZE);
			for (i = 0; i<LETTER_SIZE;i++) // left shift P
			{
				rowSum = getRowSum(*letterIndexArrayPointer);
				nextIndex = rowSum - *letterIndexArrayPointer;
				*letterIndexArrayPointer = nextIndex;
				letterIndexArrayPointer++;
			}
			if (t > 6)
			{
				writeToMatrix(letterIndexArrayPointer,LETTER_SIZE);
				for (i = 0; i<LETTER_SIZE;i++) // left shift G
				{
					rowSum = getRowSum(*letterIndexArrayPointer);
					nextIndex = rowSum - *letterIndexArrayPointer;
					*letterIndexArrayPointer = nextIndex;
					letterIndexArrayPointer++;
				}

				if (t>8)
				{
					writeToMatrix(letterIndexArrayPointer,LETTER_SIZE);
				}
				for (i = LETTER_SIZE-1; i>=0; i--) letterIndexArrayPointer--;  // shift array pointer to previous letter g
			}

			for (i = LETTER_SIZE-1; i>=0; i--) letterIndexArrayPointer--; // shift array pointer to previous letter p
			for (i = LETTER_SIZE-1; i>=0; i--) letterIndexArrayPointer--; // shift array pointer to previous letter f
		}
		for (i = 0; i<LETTER_SIZE;i++) // left shift F
		{
			rowSum = getRowSum(*letterIndexArrayPointer);
			nextIndex = rowSum - *letterIndexArrayPointer;
			*letterIndexArrayPointer = nextIndex;
			letterIndexArrayPointer++;
		}
		for (i = LETTER_SIZE-1; i>=0; i--) letterIndexArrayPointer--; // shift array pointer to previous letter f

		for (Delay = 0; Delay < LED_DELAY+1000000; Delay++); // wait for next loop iteration
	}
		for (Delay = 0; Delay < LED_DELAY+1000000; Delay++); // wait for next loop iteration


		startingPoint = cwFsm();
		switchOffLed(); // switch off every led
		createSquare(2, 2, startingPoint); // calculate squareArray
		writeToMatrix(squareArray,SQUARE_SIZE); // write square to matrix

		for (Delay = 0; Delay < LED_DELAY+100000; Delay++);

}

	Xil_DCacheDisable();
    Xil_ICacheDisable();
    return 0;
}

static u8 ccwFsm()
{
    static direction course = forward;

	switch(course)
	{
		case forward:
		{
			startingPoint+=16;
			if (startingPoint == 84) course = left;
			return startingPoint;
		}
		break;
		case left:
		{
			startingPoint+=2;
			if (startingPoint == 90) course = backward;
			return startingPoint;
		}
		break;
		case backward:
		{
			startingPoint-=16;
			if (startingPoint == 10) course = right;
			return startingPoint;
		}
		break;
		case right:
		{
			startingPoint-=2;
			if (startingPoint == 4) course = forward;
			return startingPoint;
		}
		break;
		default:
			return 0;
	}
}

static u8 cwFsm()
{
    static direction course = left;

	switch(course)
	{
		case left:
		{
			startingPoint+=2;
			if (startingPoint == 10) course = forward;
			return startingPoint;
		}
		case forward:
		{
			startingPoint+=16;
			if (startingPoint == 90) course = right;
			return startingPoint;
		}
		break;
		case right:
		{
			startingPoint-=2;
			if (startingPoint == 84) course = backward;
			return startingPoint;
		}
		break;
		case backward:
		{
			startingPoint-=16;
			if (startingPoint == 4) course = left;
			return startingPoint;
		}
		break;
		default:
			return 0;

	}
}

static void createSquare(u16 width, u16 height, u8 benchmark)
{
	static u16 w,h;
	u16 count = 0;
	u8 startPoint = benchmark;
	u16 rowSum = getRowSum(benchmark);
	u16 rowCount = 0;

	for(h = 0; h < height; h++) // calculate LED indices for height dimension
	{
		for(w = startPoint; w < startPoint + width; w++) // calculate LED indices for width dimension
		{
			squareArray[count] = w;
			count++;
		}
		if(rowCount % 2 == 0) // even row index
		{
			startPoint = rowSum - squareArray[count-1];
		}
		else // odd row index
		{
			startPoint = squareArray[count-1] + 1;
		}
		rowSum += 16;
		rowCount++;
	}
}

static u16 getRowSum(u8 benchmark)
{
	static u8 i;
	for (i = 0; i < 12; i++)
	{
		if (((4 + 8 * i) <= benchmark) && (benchmark <= (11 + 8 * i)))
		{
			return rowSumArray[i];
		}
	}
	return 0;

}

static void switchOffLed()
{
	u8 i;
	for (i = 0; i < 100; i++)
	{
	   /* Set the GPIO outputs to low */
	   XGpio_DiscreteWrite(&GpioOutput1, ADDRESS,    i);
	   XGpio_DiscreteWrite(&GpioOutput0, LED_DATA,   0x000000);
	   XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x1);
	}
	XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);
}

static void writeToMatrix(u32 * squareArrayPointer, u8 arraySize)
{
	//switchOffLed();
	u8 i;
	static colorVal colorVal = gruen;
    for(i = 0; i < arraySize; i ++)
	{
    	colorVal = blau;

		XGpio_DiscreteWrite(&GpioOutput1, ADDRESS,    *squareArrayPointer); // Adresse 0 ... 99
		XGpio_DiscreteWrite(&GpioOutput0, LED_DATA,   colorVal); // RGB with green color
		XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x1); // valid = 1
		XGpio_DiscreteWrite(&GpioOutput0, DATA_VALID, 0x0);
		squareArrayPointer++;
	}
}
