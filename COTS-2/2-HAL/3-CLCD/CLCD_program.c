/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:HAL          ****************/
/*********************      SWC:CLCD           ****************/
/**************************************************************/
/**************************************************************/


#include"BIT_MATH.h"
#include <util/delay.h>
#include"DIO_interface.h"
#include "STD_Types.h"
#include"CLCD_interface.h"
#include"CLCD_config.h"


void CLCD_voidSendCommand(Copy_u8Command)
{
	/*Set RS pin low for command send*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_RS_PIN, DIO_u8PIN_LOW);
	/*set RW pin low for Write state*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_RW_PIN,DIO_u8PIN_LOW);
	/*Sending commands via DATA pins*/
	DIO_u8SetPortValue(CLCD_DATA_PORT, Copy_u8Command);
	/*pulsing Enable pin for the CLCD to read the sent command*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_E_PIN, DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_E_PIN, DIO_u8PIN_LOW);
}

void CLCD_voidSendData(u8 Copy_u8Data)
{
	/*Set RS pin high for Data send*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_RS_PIN, DIO_u8PIN_HIGH);
	/*set RW pin low for Write state*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_RW_PIN, DIO_u8PIN_LOW);
	/*Sending Data via DATA pins*/
	DIO_u8SetPortValue(CLCD_DATA_PORT, Copy_u8Data);
	/*pulsing Enable pin for the CLCD to read the sent Data*/
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_E_PIN,DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_u8SetPinValue(CLCD_CONTROL_PORT, CLCD_E_PIN, DIO_u8PIN_LOW);
}

void CLCD_voidInit(void)
{
	/*wait more than 30ms  after VDD rises to 4.5*/
	_delay_ms(40);
	/*function set 2-Line & 5*7 Character size*/
	CLCD_voidSendCommand(0b00111000);
	/*wait more than 39MicroS*/

	/*Display ON control : display enable, cursor on, blink cursor on*/
	CLCD_voidSendCommand(0b00001111);
	/*wait more than 39MicroS*/

	/*Display clear*/
	CLCD_voidSendCommand(0b00000001);

	/*wait more than 1.53ms*/

	/*Entry mode Set*/
	//CLCD_voidSendCommand(0b000001~~);


}


/*Accessing the DDRAM in LCD to set the cursor position*/
/*DDRAM consist of two series of addresses 0 to 40 and 0x40 to 0x67*/
/*each of the two series represents one row of the two rows*/
void CLCD_voidGoTOXY(u8 Copy_u8X, u8 Copy_u8Y)
{
	u8 Local_u8Adress;
	/*first row &second row check*/
	if(Copy_u8X == 0)
	{
		Local_u8Adress = Copy_u8Y;
	}
	else if(Copy_u8X == 1)
	{
		Local_u8Adress=Copy_u8Y+0x40;
	}
	CLCD_voidSendCommand(Local_u8Adress+128);
}

/*Accessing the CGRAM in LCD to make a special character*/
/*CGRAM consist of 8 locations each of which is 8B*/
/*memory counter starts by 0 and ends with 63*/
void CLCD_voidWriteSpecialCharacter(u8* Copy_pu8Character, u8 Copy_u8CharacterNumber)
{
	u8 Local_u8Position;
	u8 Local_u8Counter=0;

	/*mapping the position to be have a Byte step */
	Local_u8Position= 0+ Copy_u8CharacterNumber*8;

	/*setting ans sending the correct address based on DataSheet*/
	CLCD_voidSendCommand(64+Local_u8Position);

	/*accessing the data into the chosen memory address*/
	for(Local_u8Counter=0; Local_u8Counter<8 ; Local_u8Counter++)
	{
		CLCD_voidSendData(Copy_pu8Character[Local_u8Counter]);
	}

}




void CLCD_voidSendString(const char* Copy_pcString)
{
	u8 Local_u8Counter=0;
	while(Copy_pcString[Local_u8Counter] !='\0')
	{
		CLCD_voidSendData(Copy_pcString[Local_u8Counter]);
		Local_u8Counter++;
	}
}





void CLCD_voidWriteNumber(u32 Copy_u32Number)
{

	u32 temp=10000,temp2=0;
	u8 y=6;


	for (u8 i=0 ; i<5; i++)
	{
		if((Copy_u32Number/temp)!=0)
		{
			y=(Copy_u32Number/temp)-temp2;



			temp2=(Copy_u32Number/temp)*10;
			temp/=10;

			switch(y)
			{
				case 0: CLCD_voidSendData('0'); break;
				case 1: CLCD_voidSendData('1'); break;
				case 2: CLCD_voidSendData('2'); break;
				case 3: CLCD_voidSendData('3'); break;
				case 4: CLCD_voidSendData('4'); break;
				case 5: CLCD_voidSendData('5'); break;
				case 6: CLCD_voidSendData('6'); break;
				case 7: CLCD_voidSendData('7'); break;
				case 8: CLCD_voidSendData('8'); break;
				case 9: CLCD_voidSendData('9'); break;
			}

		}
		else temp/=10;
	}

}
