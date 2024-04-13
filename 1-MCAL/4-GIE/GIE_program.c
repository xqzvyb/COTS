/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:GIE            ****************/
/**************************************************************/
/**************************************************************/


#include "STD_Types.h"
#include "BIT_MATH.h"
#include "GIE_register.h"
#include "GIE_interface.h"


void GIE_voidGieEnable(void)
{
	SET_BIT(SREG,SREG_GIE);
}

void GIE_voidGieDisable(void)
{
	CLR_BIT(SREG,SREG_GIE);
}
