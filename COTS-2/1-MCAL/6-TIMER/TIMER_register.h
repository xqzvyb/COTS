/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:TIMER          ****************/
/**************************************************************/
/**************************************************************/

#ifndef TIMER_REGISTER_H_
#define TIMER_REGISTER_H_

#define TCCR1A           *((volatile u8*)0x80)
#define TCCR1A_WGM10     0
#define TCCR1A_WGM11     1
#define TCCR1A_COM1B0    4
#define TCCR1A_COM1B1    5
#define TCCR1A_COM1A0    6
#define TCCR1A_COM1A1    7

#define TCCR1B           *((volatile u8*)0x81)
#define TCCR1B_CS10      0
#define TCCR1B_CS11      1
#define TCCR1B_CS12      2
#define TCCR1B_WGM12     3
#define TCCR1B_WGM13     4
#define TCCR1B_ICES1     6
#define TCCR1B_ICNC1     7


#define TCCR1C           *((volatile u8*)0x82)
#define TCCR1C_FOC1B     6
#define TCCR1C_FOC1A     7


#define OCR1AH           *((volatile u8*)0x89)
#define OCR1AL           *((volatile u16*)0x88)
#define OCR1BH	         *((volatile u8*)0x8B)
#define OCR1BL           *((volatile u16*)0x8A)
#define ICR1H            *((volatile u8*)0x87)
#define ICR1L            *((volatile u16*)0x86)

#define TCCR0A         *((volatile u8*)0x44)
#define TCCR0A_WGM00   0
#define TCCR0A_WGM01   1
#define TCCR0A_COM0B0  4
#define TCCR0A_COM0B1  5
#define TCCR0A_COM0A0  6
#define TCCR0A_COM0A1  7
#define TCCR0B         *((volatile u8*)0x45)
#define TCCR0B_CS00	   0
#define TCCR0B_CS01    1
#define TCCR0B_CS02    2
#define TCCR0B_WGM02   3

#define OCR0A          *((volatile u8*)0x47)
#define OCR0B          *((volatile u8*)0x48)
#define TIMSK0         *((volatile u8*)0x6E)
#define TIMSK0_TOIE0   0
#define TIMSK0_OCIE0A  1
#define TIMSK0_OCIE0B  2

#define SREG           *((volatile u8*)0x5F)
#define SREG_GIE       7
#endif
