/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:EXTI           ****************/
/**************************************************************/
/**************************************************************/

#include"STD_Types.h"
#include"BIT_MATH.h"

#include"EXTI_register.h"
#include"EXTI_interface.h"
#include"EXTI_config.h"
#include"EXTI_private.h"


/*global pointer to function*/
void (* EXTI_pfInt0IsrAddress)(void) = NULL;

/*pre Build configuration */
void EXTI_voidInt0Init(void)
{
#if INT0_ENABLE == ENABLE
	SET_BIT(GICR,GICR_INT0);
#else
	CLR_BIT(GICR,GICR_INT0);
#endif

#if   INT0_SENSE_CONTROL == LOW_LEVEL
	CLR_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_SENSE_CONTROL == ON_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_SENSE_CONTROL == FALLING_EDGE
	CLR_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
#elif INT0_SENSE_CONTROL == RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
#else #warning "EXTI_config.h has wrong INT0_SENSE_CONTROL value"
#endif

}
/********************************************************************************************************/
/*post Build configuration */
u8 EXTI_u8Int0SenseControl(u8 Copy_u8Sense)
{
	u8 Local_u8ErrorState= 0;



	switch(Copy_u8Sense)
	{
	case LOW_LEVEL:
		CLR_BIT(MCUCR,MCUCR_ISC00);
		CLR_BIT(MCUCR,MCUCR_ISC01);
		break;
	case ON_CHANGE:
		SET_BIT(MCUCR,MCUCR_ISC00);
		CLR_BIT(MCUCR,MCUCR_ISC01);
		break;
	case FALLING_EDGE:
		CLR_BIT(MCUCR,MCUCR_ISC00);
		SET_BIT(MCUCR,MCUCR_ISC01);
		break;
	case RISING_EDGE:
		SET_BIT(MCUCR,MCUCR_ISC00);
		SET_BIT(MCUCR,MCUCR_ISC01);
		break;
	default : Local_u8ErrorState =1;
	}
	return Local_u8ErrorState;
}



u8 EXTI_u8Int1SenseControl(u8 Copy_u8Sense)
{
	u8 Local_u8ErrorState= 0;



	switch(Copy_u8Sense)
	{
	case LOW_LEVEL:
		CLR_BIT(MCUCR,MCUCR_ISC10);
		CLR_BIT(MCUCR,MCUCR_ISC11);
		break;
	case ON_CHANGE:
		SET_BIT(MCUCR,MCUCR_ISC10);
		CLR_BIT(MCUCR,MCUCR_ISC11);
		break;
	case FALLING_EDGE:
		CLR_BIT(MCUCR,MCUCR_ISC10);
		SET_BIT(MCUCR,MCUCR_ISC11);
		break;
	case RISING_EDGE:
		SET_BIT(MCUCR,MCUCR_ISC10);
		SET_BIT(MCUCR,MCUCR_ISC11);
		break;
	default : Local_u8ErrorState =1;
	}
	return Local_u8ErrorState;
}

u8 EXTI_u8Int2SenseControl(u8 Copy_u8Sense)
{
	u8 Local_u8ErrorState= 0;

	SET_BIT(GICR, GICR_INT0);

	switch(Copy_u8Sense)
	{
	case FALLING_EDGE:
		CLR_BIT(MCUCSR,MCUCSR_ISC2);
		break;
	case RISING_EDGE:
		SET_BIT(MCUCSR,MCUCSR_ISC2);
		break;
	default : Local_u8ErrorState =1;
	}
	return Local_u8ErrorState;
}

u8 EXTI_u8Enable(u8 Copy_u8Pin)
{
	u8 Local_u8Error=0;
	switch(Copy_u8Pin)
	{
	case INT0: SET_BIT(GICR, GICR_INT0);  break;
	case INT1: SET_BIT(GICR, GICR_INT1);  break;
	case INT2: SET_BIT(GICR, GICR_INT2);  break;
	default: Local_u8Error=1;
	}
	return Local_u8Error;
}

u8 EXTI_u8Disable(u8 Copy_u8Pin)
{
	u8 Local_u8Error=0;
	switch(Copy_u8Pin)
	{
	case INT0: CLR_BIT(GICR, GICR_INT0);  break;
	case INT1: CLR_BIT(GICR, GICR_INT1);  break;
	case INT2: CLR_BIT(GICR, GICR_INT2);  break;
	default: Local_u8Error=1;
	}
	return Local_u8Error;
}




/************************************************************************/


u8 EXTI_u8Int0SetCallBack(void (* Copy_pfIsrAdress)(void))
{
	u8 Local_u8Error=0;
	if(Copy_pfIsrAdress != NULL)
	{
		EXTI_pfInt0IsrAddress=Copy_pfIsrAdress;
	}
	else
	{
		Local_u8Error = 1;
	}

	return Local_u8Error;
}






void __vector_1 (void) __attribute__((signal));

void __vector_1 (void)
{
	EXTI_pfInt0IsrAddress();
	//TOG_BIT(*((volatile u8*) 0x3B), 0);
}
