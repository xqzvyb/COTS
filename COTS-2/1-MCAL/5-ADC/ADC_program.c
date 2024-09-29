/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:ADC            ****************/
/**************************************************************/
/**************************************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"

#include "ADC_interface.h"
#include "ADC_config.h"
#include "ADC_private.h"
#include "ADC_register.h"


void ADC_voidAdcInit(void)
{
	/*Voltage Reference Select AVCC with external Capacitor on AREF pin*/
	SET_BIT(ADMUX, ADMUX_REFS0);
	CLR_BIT(ADMUX, ADMUX_REFS1);
	/*ADC Left Adjust*/
	SET_BIT(ADMUX, ADMUX_ADLAR);
	/*Analog Channel Selection -> ADC1*/
	SET_BIT(ADMUX, ADMUX_MUX0);
	CLR_BIT(ADMUX, ADMUX_MUX1);
	CLR_BIT(ADMUX, ADMUX_MUX2);
	CLR_BIT(ADMUX, ADMUX_MUX3);
	/*ADC Enable*/
	SET_BIT(ADCSRA, ADCSRA_ADEN);
}



u8   ADC_u8GetChannelValue(void)
{
	
		/*ADC Start Conversion*/
		SET_BIT(ADCSRA, ADCSRA_ADSC);
		/*Polling on the conversion complete Flag*/
		while(GET_BIT(ADCSRA, ADCSRA_ADIF));
		SET_BIT(ADCSRA, ADCSRA_ADIF);
		return ADCH;
}
