/*
 * LedMatrixDriver.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_LEDMATRIXDRIVER_H_
#define SRC_LEDMATRIXDRIVER_H_
#include "xil_types.h"

/* Defines */
#define DATA_VALID 2
#define LED_DATA 1
#define ADDRESS 1

/* Function declaration */
void LedMatrixDriver_Init(void);
void LedMatrixDriver_Update(void);

void LedMatrixDriver_SetLed(u8 PosX, u8 PosY, u8 R, u8 G, u8 B);
void LedMatrixDriver_ClearLed(u8 PosX, u8 PosY);
void LedMatrixDriver_SetAllLed(u8 R, u8 G, u8 B);
void LedMatrixDriver_ClearAllLed(void);
void LedMatrixDriver_SlideAllLed(void);
void LEDMatrixDriver_SetLEDs_ForLoop(u16 i1,u16 i2,u16 j1,u16 j2,u16 r,u16 g,u16 b);
void LEDMatrixDriver_Pixelmatrix(void);


#endif /* SRC_LEDMATRIXDRIVER_H_ */
