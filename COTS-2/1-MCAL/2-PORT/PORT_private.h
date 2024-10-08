/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:PORT           ****************/
/**************************************************************/
/**************************************************************/

#ifndef PORT_PRIVATE_H_
#define PORT_PRIVATE_H_

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)           CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)    0b##b7##b6##b5##b4##b3##b2##b1##b0

#define _CONC(b5,b4,b3,b2,b1,b0)             _CONC_HELPER(b5,b4,b3,b2,b1,b0)
#define _CONC_HELPER(b5,b4,b3,b2,b1,b0)      0b##b5##b4##b3##b2##b1##b0

													 
#define PORTB_DIR                               CONC(PORTB_PIN7_DIR,PORTB_PIN6_DIR,\
                                                     PORTB_PIN5_DIR,PORTB_PIN4_DIR,\
													 PORTB_PIN3_DIR,PORTB_PIN2_DIR,\
													 PORTB_PIN1_DIR,PORTB_PIN0_DIR)
													 
#define PORTC_DIR                               _CONC(PORTC_PIN5_DIR,PORTC_PIN4_DIR,\
                                                     PORTC_PIN3_DIR,PORTC_PIN2_DIR,\
													 PORTC_PIN1_DIR,PORTC_PIN0_DIR)
													 
#define PORTD_DIR                               CONC(PORTD_PIN7_DIR,PORTD_PIN6_DIR,\
                                                     PORTD_PIN5_DIR,PORTD_PIN4_DIR,\
													 PORTD_PIN3_DIR,PORTD_PIN2_DIR,\
													 PORTD_PIN1_DIR,PORTD_PIN0_DIR)
													 
/***************************************************************************************/
													   
#define PORTB_INIT                               CONC(PORTB_PIN7_INIT,PORTB_PIN6_INIT,\
                                                       PORTB_PIN5_INIT,PORTB_PIN4_INIT,\
													   PORTB_PIN3_INIT,PORTB_PIN2_INIT,\
													   PORTB_PIN1_INIT,PORTB_PIN0_INIT)
													   
#define PORTC_INIT                               _CONC(PORTC_PIN5_INIT,PORTC_PIN4_INIT,\
                                                       PORTC_PIN3_INIT,PORTC_PIN2_INIT,\
													   PORTC_PIN1_INIT,PORTC_PIN0_INIT)
													   
#define PORTD_INIT                               CONC(PORTD_PIN7_INIT,PORTD_PIN6_INIT,\
                                                       PORTD_PIN5_INIT,PORTD_PIN4_INIT,\
													   PORTD_PIN3_INIT,PORTD_PIN2_INIT,\
													   PORTD_PIN1_INIT,PORTD_PIN0_INIT)
#endif
