/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:HAL          ****************/
/*********************      SWC:CLCD           ****************/
/**************************************************************/
/**************************************************************/



#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_

void CLCD_voidSendCommand(Copy_u8Command);

void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_voidSendString(const char* Copy_u8pcString);

void CLCD_voidGoTOXY(u8 Copy_u8X, u8 Copy_u8Y);

void CLCD_voidWriteSpecialCharacter(u8* Copy_pu8Character, u8 Copy_u8CharacterNumber);

void CLCD_voidWriteNumber(u32 Copy_u32Number);

void CLCD_voidInit(void);

#endif
