/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:ADC            ****************/
/**************************************************************/
/**************************************************************/

#ifndef ADC_REGISTER_H_
#define ADC_REGISTER_H_

#define ADMUX           *((volatile u8*) 0x7C) //multiplixer selection register  
#define ADMUX_MUX0      0                        
#define ADMUX_MUX1      1
#define ADMUX_MUX2      2
#define ADMUX_MUX3      3

#define ADMUX_ADLAR     5    //left adjust bit
#define ADMUX_REFS0     6    //refernce selection bit0
#define ADMUX_REFS1     7    //refernce selectin bit 1


#define ADCSRA          *((volatile u8*) 0x7A)  //ADC control and status register
#define ADCSRA_ADEN     7     //ADC Enable
#define ADCSRA_ADSC     6     //ADC Start Conversion
#define ADCSRA_ADATE    5     //Auto trigger Enable
#define ADCSRA_ADIF     4     //Interrupt flag
#define ADCSRA_ADIE     3     //interrupt enable
#define ADCSRA_ADPS2    2     //prescaler selection bit
#define ADCSRA_ADPS1    1     //prescaler selection bit
#define ADCSRA_ADPS0    0     //prescaler selection bit




#define ADCH            *((volatile u8*) 0x79)          //high register
#define ADCL            *((volatile u8*) 0x78)          //low register

/*
#define SFIOR           *((volatile u8*) 0x50)
#define ADTS2           7
#define ADTS1           6
#define ADTS0           5
*/

#endif
