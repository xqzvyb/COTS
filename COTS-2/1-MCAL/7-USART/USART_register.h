/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:USART          ****************/
/**************************************************************/
/**************************************************************/


#ifndef USART_REGISTER_H_
#define USART_REGISTER_H_
#define UDR               *((volatile u8*)0xC6)
#define UCSRA		      *((volatile u8*)0xC0)
#define UCSRA_RXCn        7
#define UCSRA_TXCn        6
#define UCSRA_UDREn       5
#define UCSRA_FEn         4
#define UCSRA_DORn        3
#define UCSRA_UPEn        2
#define UCSRA_U2Xn        1
#define UCSRA_MPCMn       0

#define UCSRB             *((volatile u8*)0xC1)
#define UCSRB_RXCIEn      7
#define UCSRB_TXCIEn      6
#define UCSRB_UDRIEn      5
#define UCSRB_RXEn        4
#define UCSRB_TXEn        3
#define UCSRB_UCSZn2      2
#define UCSRB_RXB8n       1
#define UCSRB_TXB8n       0


#define UCSRC		      *((volatile u8*)0xC2)
#define UCSRC_UMSELn1     7
#define UCSRC_UMSELn0     6
#define UCSRC_UPMn1       5
#define UCSRC_UPMn0       4
#define UCSRC_USBSn       3
#define UCSRC_UCSZn1      2
#define UCSRC_UCSZn0      1
#define UCSRC_UCPOLn      0

#define UBRRL             *((volatile u16*)0xC4)
#define UBRRH 		      *((volatile u8*)0xC5)

#endif
