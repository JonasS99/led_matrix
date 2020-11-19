/*
 * IBlock.h
 *
 *  Created on: 05.11.2020
 *      Author: Jonas
 */

#ifndef SRC_IBLOCK_H_
#define SRC_IBLOCK_H_

class IBlock
{
public:
	IBlock(){}
	virtual void CycleCall() = 0;
	virtual void ControlDown() = 0;
	virtual void ControlLeft() = 0;
	virtual void ControlRight() = 0;
};



#endif /* SRC_IBLOCK_H_ */
