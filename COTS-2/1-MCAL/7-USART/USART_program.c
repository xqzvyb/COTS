/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:USART          ****************/
/**************************************************************/
/**************************************************************/

#include"BIT_MATH.h"
#include "STD_Types.h"
#include "USART_config.h"
#include "USART_register.h"
#include "USART_interface.h"
#include "USART_private.h"

void USART_voidInit(void)
{
	/*Setting Character Size to 8bits*/
	SET_BIT(UCSRC, UCSRC_UCSZn0);
	SET_BIT(UCSRC, UCSRC_UCSZn1);
	CLR_BIT(UCSRB, UCSRB_UCSZn2);
	/*Asynchronous mode Select*/
	CLR_BIT(UCSRC, UCSRC_UMSELn0);
	CLR_BIT(UCSRC, UCSRC_UMSELn1);
	/*No Parity*/
	CLR_BIT(UCSRC, UCSRC_UPMn0);
	CLR_BIT(UCSRC, UCSRC_UPMn1);
	/*One Stop Bit*/
	CLR_BIT(UCSRC, UCSRC_USBSn);
	/*Baud Rate to 9600 bps*/
	UBRRL = 103;
	/*Enable Transmitter and Receiver*/
	SET_BIT(UCSRB, UCSRB_RXEn);
	SET_BIT(UCSRB, UCSRB_TXEn);
}

void USART_voidSend(u8 Copy_u8Data)
{
	/* Polling on the receive ready flag */
	while(!(UCSRA &( 1 << UCSRA_UDREn)));
	UDR= Copy_u8Data;
}

u8 USART_u8Recieve(void)
{

	while(!(UCSRA & (1<<UCSRA_RXCn)));
	return UDR;
}


void USART_voidSendNumber(u8 Copy_u8Number)
{
	u8 Local_u8Number[3]={0};

	for(u8 i=0;i<3;i++)
	{
		Local_u8Number[2-i]=Copy_u8Number%10;
		Copy_u8Number/=10;
	}
	for(u8 i=0;i<3;i++)
	{
		//if the number is two digit
		if(Local_u8Number[i]==0 && i==0);
		//if the number is one digit
		else if(Local_u8Number[i]==0 && i==1 && Local_u8Number[0]==0);
		else
		{
			/* Polling on the receive ready flag */
			while(!(UCSRA &( 1 << UCSRA_UDREn)));
			UDR='0'+Local_u8Number[i];

		}
	}


}

void USART_voidSendString(u8* Copy_ptru8String)
{
	u8 i=0;
	while(Copy_ptru8String[i] != '\0')
	{
		/* Polling on the receive ready flag */
		while(!(UCSRA &( 1 << UCSRA_UDREn)));
		UDR = Copy_ptru8String[i];
		i++;
	}
}
