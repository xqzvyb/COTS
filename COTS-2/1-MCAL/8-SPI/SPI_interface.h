/**************************************************************/
/**************************************************************/
/*********************   AUTHOR:ABDELRAHMAN    ****************/
/*********************      LAYER:MCAL         ****************/
/*********************      SWC:SPI            ****************/
/**************************************************************/
/**************************************************************/


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#define MASTER    2
#define SLAVE     1

/*Initializing the SPI*/
void SPI_voidMasterInit(void);
void SPI_voidSlaveInit(void);

/*Read & Write the Data Register*/
u8 SPI_u8TranSceive(u8 copy_u8Data);



#endif
