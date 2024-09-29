/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:SPI            ****************/
/**************************************************************/
/**************************************************************/
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "SPI_interface.h"
#include "SPI_register.h"
#include "SPI_config.h"
#include "SPI_private.h"


/*Initializing the SPI*/
void SPI_voidMasterInit(void)
{
	/*LSB first transmit*/
	SET_BIT(SPCR,SPCR_DORD);
	/*Master State*/
	SET_BIT(SPCR,SPCR_MSTR);
	/*Clock Polarity == Clock idle State(State when no communication) -> low
	 * Leading edge is Rising Edge
	 * Trailing Edge is Falling Edge*/
	CLR_BIT(SPCR,SPCR_CPOL);
	/*Clock Phase
	 * Leading Edge  == Send"Setup"
	 * Trailing Edge == Receive"Sample"*/
	SET_BIT(SPCR,SPCR_CPHA);
	/*Clock Select == SCK Rate only works when Master State
	 * set to ----> f/16 <-----*/
	SET_BIT(SPCR,SPCR_SPR0);
	CLR_BIT(SPCR,SPCR_SPR1);
	CLR_BIT(SPSR,SPSR_SPI2X);

	/*SPI Enable*/
	SET_BIT(SPCR, SPCR_SPE);
}

void SPI_voidSlaveInit(void)
{
	/*Slave State*/
	CLR_BIT(SPCR,SPCR_MSTR);

	/*SPI Enable*/
	SET_BIT(SPCR, SPCR_SPE);
}

/*Read & Write the Data Register*/
u8 SPI_u8TranSceive(u8 copy_u8Data)
{
	/*Write the Data Register -> Read the Flag -> Read the Data Register */
	SPDR = copy_u8Data;
	while (! (SPSR & 1<<SPSR_SPIF));
	return SPDR;
}

