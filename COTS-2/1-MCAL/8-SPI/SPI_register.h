/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:SPI            ****************/
/**************************************************************/
/**************************************************************/
#ifndef SPI_REGISTER_H_
#define SPI_REGISTER_H_

/*SPI Control Register*/
#define SPCR               *((volatile u8*)0x4C)
#define SPCR_SPIE          7
#define SPCR_SPE           6
#define SPCR_DORD          5
#define SPCR_MSTR          4
#define SPCR_CPOL          3
#define SPCR_CPHA          2
#define SPCR_SPR1          1
#define SPCR_SPR0          0

/*SPI Status Register*/
#define SPSR               *((volatile u8*)0x4D)
#define SPSR_SPIF          7
#define SPSR_WCOL          6
#define SPSR_SPI2X         0

/*SPI Data Register*/
#define SPDR               *((volatile u8*)0x4E)

#endif
