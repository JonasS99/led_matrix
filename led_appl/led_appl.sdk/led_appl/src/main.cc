/*
 * Empty C++ Application
 */

#include <stdio.h>
#include "xparameters.h"
#include "xil_cache.h"
#include "xintc.h"
#include "xgpio.h"
#include "MainFsm.h"
#include "LedMatrixDriver.h"



int main()
{
	/* Enable Cache */
	Xil_ICacheEnable();
    Xil_DCacheEnable();

    MainFsm_Init();
	while(1)
	{
		MainFsm_StateMachine();
		LedMatrixDriver_Update();

	}

	/* Disable Cache */
	Xil_DCacheDisable();
    Xil_ICacheDisable();
	return 0;
}









