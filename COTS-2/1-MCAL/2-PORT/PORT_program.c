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
	/*initial direction*/

	DDRB=PORTB_DIR;
	DDRC=PORTC_DIR;
	DDRD=PORTD_DIR;
	
	/*initial port value*/

	PORTB=PORTB_INIT;
	PORTC=PORTC_INIT;
	PORTD=PORTD_INIT;
}
