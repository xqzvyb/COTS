/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:PORT           ****************/
/**************************************************************/
/**************************************************************/


#include"STD_Types.h"

#include"PORT_interface.h"
#include"PORT_register.h"
#include"PORT_config.h"
#include"PORT_private.h"


void PORT_voidInit(void)
{
	/*initial direction output*/
	DDRA=PORTA_DIR;
	DDRB=PORTB_DIR;
	DDRC=PORTC_DIR;
	DDRD=PORTD_DIR;
	
	/*initial value low*/
	PORTA=PORTA_DIR;
	PORTB=PORTB_DIR;
	PORTC=PORTC_DIR;
	PORTD=PORTD_DIR;
}