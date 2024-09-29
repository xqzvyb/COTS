/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:PORT           ****************/
/**************************************************************/
/**************************************************************/

#ifndef PORT_REGISTER_H_
#define PORT_REGISTER_H_



#define DDRB  *((volatile u8*) 0x24)
#define DDRC  *((volatile u8*) 0x27)
#define DDRD  *((volatile u8*) 0x2A)


#define PORTB *((volatile u8*) 0x25)
#define PORTC *((volatile u8*) 0x28)
#define PORTD *((volatile u8*) 0x2B)


#endif