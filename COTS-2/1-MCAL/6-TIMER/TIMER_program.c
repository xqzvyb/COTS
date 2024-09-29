/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:TIMER          ****************/
/**************************************************************/
/**************************************************************/


#include "STD_Types.h"
#include "BIT_MATH.h"
#include "TIMER_interface.h"
#include "TIMER_register.h"
#include "TIMER_config.h"
#include "TIMER_private.h"

void (* Global_IsrCounter0) (void)= 0 ;

void TIMER_voidTimer0Init(void)
{
	/*Waveform Generation mode to CTC*/
	CLR_BIT(TCCR0A, TCCR0A_WGM00);
	SET_BIT(TCCR0A, TCCR0A_WGM01);
	CLR_BIT(TCCR0B, TCCR0B_WGM02);
	/*Clock selection to divide by 64*/
	SET_BIT(TCCR0B, TCCR0B_CS00);
	SET_BIT(TCCR0B, TCCR0B_CS01);
	CLR_BIT(TCCR0B, TCCR0B_CS02);
	/*Compare match event Interrupt Enable*/
	SET_BIT(TIMSK0, TIMSK0_OCIE0A);
	/*Global Interrupt Enable*/
	SET_BIT(SREG, SREG_GIE);
}

void TIMER_voidTimer0SetCompareMatch(u8 Copy_u8CompareMatch)
{
	/*Output Compare value to 250*/
	OCR0A=Copy_u8CompareMatch;
}
void TIMER_voidTimer1PwmInit(void)
{
	//setting OC1A to CTC on Fast PWM mode =corresponds to= BOTTOM-non inverting mode
	SET_BIT(TCCR1A, TCCR1A_COM1A1);
	CLR_BIT(TCCR1A, TCCR1A_COM1A0);
	//Waveform Generation mode to Fast PWM with top value being ICR1 register
	CLR_BIT(TCCR1A, TCCR1A_WGM10);
	SET_BIT(TCCR1A, TCCR1A_WGM11);
	SET_BIT(TCCR1B, TCCR1B_WGM12);
	SET_BIT(TCCR1B, TCCR1B_WGM13);
	//Clock selection to 8
	CLR_BIT(TCCR1B, TCCR1B_CS10);
	SET_BIT(TCCR1B, TCCR1B_CS11);
	CLR_BIT(TCCR1B, TCCR1B_CS12);
}

void TIMER_voidTimer1SetTopPwm(u16 Copy_u16Top)
{
	/*Setting the output register to 20ms -> 40000 max*/
	ICR1L=Copy_u16Top;
}

void TIMER_voidTimer1CompareMatchPwm(u16 Copy_u16CompareMatch)
{
	/*Compare match value to 20ms -> 4000*/
	OCR1AL=Copy_u16CompareMatch;
}



void TIMER_IsrTimer0(void (* Copy_voidpfIsrTimer0) (void))
{
	if (Copy_voidpfIsrTimer0)
	{
		Global_IsrCounter0 = Copy_voidpfIsrTimer0;
	}
}

void __vector_14 (void) __attribute__((signal));
void __vector_14 (void)
{
	if(Global_IsrCounter0)
	{
		Global_IsrCounter0();
	}
}


