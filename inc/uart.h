#ifndef _UART_H_
#define _UART_H_
#include "gloabdef.h"


#define S2RI  0x01          //S2CON.0
#define S2TI  0x02          //S2CON.1
#define S2RB8 0x04          //S2CON.2
#define S2TB8 0x08          //S2CON.3

#define S2RECBUFLEN			256
void Init_Uart(void);
void SendChar(unsigned char c);

void Init_Uart2(void);
void S2SendByte(unsigned char dat);
void S2SendData(unsigned char *buf, unsigned char len);
//uint8_t S2ReadData(uint8_t xdata *buf, uint8_t delay);
uint8_t* S2ReadData(uint8_t     *buflen,uint8_t delay);

#endif /*_UART_H_*/
