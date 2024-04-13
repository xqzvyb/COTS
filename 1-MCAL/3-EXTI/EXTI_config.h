/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:EXTI           ****************/
/**************************************************************/
/**************************************************************/

#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_

/* Sense Control available options
1-LOW_LEVEL
2-ON_CHANGE
3-FALLING_DEGE
4-RISING_EDGE
*/
#define INT0_SENSE_CONTROL    FALLING_EDGE

/*Int pins available options
1-ENABLE
2-DISABLE
*/
#define INT0_ENABLE      ENABLE
#define INT1_ENABLE      DISABLE
#define INT2_ENABLE      DISABLE


#endif
