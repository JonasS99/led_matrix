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

    /* Harri is here and there*/


    LedMatrixDriver_Init();
    MainFsm_Init();

    while(1)
	{
		LedMatrixDriver_Update();
		for (u32 i = 0; i<100000;i++);
		MainFsm_StateMachine();
		// Test
	}
	// Test von Bastian 2
	// Test von Bastian
	/* Disable Cache */
	Xil_DCacheDisable();
    Xil_ICacheDisable();
	return 0;
}









