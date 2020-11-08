/*
 * StaticLedAnimations.h
 *
 *  Created on: 29.10.2020
 *      Author: Keller
 */

#ifndef SRC_STATICLED_H_
#define SRC_STATICLED_H_

#include "LedMatrixDriver.h"
#include "MyTypDefs.h"

/* Defines */

/* Function declaration */
void StaticLED_ColorController(u8 R, u8 G, u8 B);
void StaticLED_Shapes(shapes selection);
void StaticLED_ChristmasTree(void);
void StaticLED_EmojiSmile(void);
void StaticLED_EmojiSad(void);
void StaticLED_Mario(void);
void StaticLED_Minion(void);



#endif /* SRC_STATICLED_H_ */





