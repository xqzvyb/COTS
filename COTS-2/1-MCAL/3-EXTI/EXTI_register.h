	/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:EXTI           ****************/
/**************************************************************/
/**************************************************************/

#ifndef EXTI_REGISTER_H_
#define EXTI_REGISTER_H_

/*Sense Control Register*/
#define EICRA           *((volatile u8*) 0x69)
#define EICRA_ISC00     0
#define EICRA_ISC01     1
#define EICRA_ISC10     2
#define EICRA_ISC11     3

/*Flag Register*/
#define EIFR            *((volatile u8*) 0x3C)
#define EIFR_INTF0      0
#define EIFR_INTF1      1



/*Interrupt Request Enable */
#define EIMSK          *((volatile u8*) 0x3D)
#define EIMSK_INT0     0
#define EIMSK_INT1     1


#endif