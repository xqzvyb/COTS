/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:USART          ****************/
/**************************************************************/
/**************************************************************/

#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_
void USART_voidInit(void);

void USART_viodSend(u8 Copy_u8Data);

u8 USART_u8Recieve(void);

void USART_voidSendNumber(u8 Copy_u8Number);

void USART_voidSendString(u8* Copy_ptru8String);

#endif
