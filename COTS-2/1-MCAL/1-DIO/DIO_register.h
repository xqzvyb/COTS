/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:DIO            ****************/
/**************************************************************/
/**************************************************************/


#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_




#define PORTB *((volatile u8*) 0x25)
#define PINB  *((volatile u8*) 0x23)

#define PORTC *((volatile u8*) 0x28)
#define PINC  *((volatile u8*) 0x26)

#define PORTD *((volatile u8*) 0x2B)
#define PIND  *((volatile u8*) 0x29)

#endif
