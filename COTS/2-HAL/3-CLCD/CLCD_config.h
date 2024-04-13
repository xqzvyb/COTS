/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:HAL          ****************/
/*********************      SWC:CLCD           ****************/
/**************************************************************/
/**************************************************************/


//prebuild configuration!
//preprocessor file guard
#ifndef CLCD_CONFIG_H_
#define CLCD_CONFIG_H_


#define CLCD_DATA_PORT       DIO_u8PORTA

#define CLCD_CONTROL_PORT    DIO_u8PORTC
#define CLCD_RS_PIN          DIO_u8PIN0
#define CLCD_RW_PIN          DIO_u8PIN1
#define CLCD_E_PIN           DIO_u8PIN2

#endif
