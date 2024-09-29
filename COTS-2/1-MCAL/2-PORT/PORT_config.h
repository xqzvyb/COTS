/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:PORT           ****************/
/**************************************************************/
/**************************************************************/

#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

#define OUTPUT           1
#define INPUT            0

#define LOW				 0
#define HIGH			 1



#define PORTB_PIN0_DIR   OUTPUT
#define PORTB_PIN1_DIR   OUTPUT
#define PORTB_PIN2_DIR   INPUT
#define PORTB_PIN3_DIR   OUTPUT
#define PORTB_PIN4_DIR   OUTPUT
#define PORTB_PIN5_DIR   OUTPUT
#define PORTB_PIN6_DIR   OUTPUT
#define PORTB_PIN7_DIR   OUTPUT

#define PORTC_PIN0_DIR   OUTPUT
#define PORTC_PIN1_DIR   OUTPUT
#define PORTC_PIN2_DIR   INPUT
#define PORTC_PIN3_DIR   OUTPUT
#define PORTC_PIN4_DIR   OUTPUT
#define PORTC_PIN5_DIR   OUTPUT



#define PORTD_PIN0_DIR   OUTPUT
#define PORTD_PIN1_DIR   INPUT
#define PORTD_PIN2_DIR   OUTPUT
#define PORTD_PIN3_DIR   OUTPUT
#define PORTD_PIN4_DIR   OUTPUT
#define PORTD_PIN5_DIR   OUTPUT
#define PORTD_PIN6_DIR   OUTPUT
#define PORTD_PIN7_DIR   OUTPUT
/******************************************/
/*OUTPUT + LOW = output low
  OUTPUT + HIGH = output high
  INPUT + LOW = Floating input
  INPUT + HIGH = pull up input*/
  
					  
#define PORTB_PIN0_INIT   LOW
#define PORTB_PIN1_INIT   LOW
#define PORTB_PIN2_INIT   HIGH
#define PORTB_PIN3_INIT   LOW
#define PORTB_PIN4_INIT   LOW
#define PORTB_PIN5_INIT   LOW
#define PORTB_PIN6_INIT   LOW
#define PORTB_PIN7_INIT   LOW
						  
#define PORTC_PIN0_INIT   LOW
#define PORTC_PIN1_INIT   LOW
#define PORTC_PIN2_INIT   LOW
#define PORTC_PIN3_INIT   LOW
#define PORTC_PIN4_INIT   LOW
#define PORTC_PIN5_INIT   LOW
#define PORTC_PIN6_INIT   LOW

						  
#define PORTD_PIN0_INIT   LOW
#define PORTD_PIN1_INIT   LOW
#define PORTD_PIN2_INIT   LOW
#define PORTD_PIN3_INIT   LOW
#define PORTD_PIN4_INIT   LOW
#define PORTD_PIN5_INIT   LOW
#define PORTD_PIN6_INIT   LOW
#define PORTD_PIN7_INIT   LOW





#endif
