/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:EXTI           ****************/
/**************************************************************/
/**************************************************************/


#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#define LOW_LEVEL        1
#define ON_CHANGE        2
#define FALLING_EDGE     3
#define RISING_EDGE      4

#define INT0             1
#define INT1             2
#define INT2             3

void EXTI_voidInt0Init(void);

void EXTI_voidInt1Init(void);

void EXTI_voidInt2Init(void);

u8 EXTI_u8Int0SenseControl(u8 Copy_u8Sense);

u8 EXTI_u8Int1SenseControl(u8 Copy_u8Sense);

u8 EXTI_u8Int2SenseControl(u8 Copy_u8Sense);

u8 EXTI_u8Enable(u8 Copy_u8Pin);

u8 EXTI_u8Disable(u8 Copy_u8Pin);


u8 EXTI_u8Int0SetCallBack(void (* Copy_pfIsrAdress)(void));

#endif
