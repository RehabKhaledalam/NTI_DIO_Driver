/*
 * DIO_prv.
h
 *
 *  Created on: Mar 2, 2024
 *      Author: Rehab Khaled
 */

#ifndef MCAL_DIO_DIO_PRV_H_
#define MCAL_DIO_DIO_PRV_H_

#define MCAL_DIO_PRV_H_

/**********REGISTER ADDRESSES************/
/*PORT A*/
#define DIO_u8_PORTA_REG			(*(volatile u8*)0x3B)
#define DIO_u8_DDRA_REG				(*(volatile u8*)0x3A)
#define DIO_u8_PINA_REG				(*(volatile u8*)0x39)
/*PORT B*/
#define DIO_u8_PORTB_REG			(*(volatile u8*)0x38)
#define DIO_u8_DDRB_REG				(*(volatile u8*)0x37)
#define DIO_u8_PINB_REG				(*(volatile u8*)0x36)
/*PORT C*/
#define DIO_u8_PORTC_REG			(*(volatile u8*)0x35)
#define DIO_u8_DDRC_REG				(*(volatile u8*)0x34)
#define DIO_u8_PINC_REG				(*(volatile u8*)0x33)
/*PORT D*/
#define DIO_u8_PORTD_REG			(*(volatile u8*)0x32)
#define DIO_u8_DDRD_REG				(*(volatile u8*)0x31)
#define DIO_u8_PIND_REG				(*(volatile u8*)0x30)






/**********MAGIC NUMBERS************/
#define DIO_u8_SET			1
#define DIO_u8_BIT0			0
#define DIO_u8_BIT1			1
#define DIO_u8_BIT2			2
#define DIO_u8_BIT3			3
#define DIO_u8_BIT4			4
#define DIO_u8_BIT5			5
#define DIO_u8_BIT6			6
#define DIO_u8_BIT7			7


#endif /* MCAL_DIO_DIO_PRV_H_ */
