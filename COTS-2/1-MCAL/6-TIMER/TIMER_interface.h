/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:TIMER          ****************/
/**************************************************************/
/**************************************************************/


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

void TIMER_voidTimer0Init(void);

void TIMER_voidTimer0SetCompareMatch(u8 Copy_u8CompareMatch);

void TIMER_IsrTimer0(void (* Copy_voidpfIsrTimer0) (void));

void TIMER_voidTimer1PwmInit(void);

void TIMER_voidTimer1SetTopPwm(u16 Copy_u16Top);

void TIMER_voidTimer1CompareMatchPwm(u16 Copy_u16CompareMatch);

#endif
