/*
 * main.c
 *
 *  Created on: Jul 9, 2020
 *      Author: Anwar
 */

#undef F_CPU
#define F_CPU 8000000
#include<util/delay.h>
#include"STD_TYPES.h"
#include"LCD_INT.h"
#include"Eeprom_INT.h"

int main(void)
{
	Eeprom_VidInit();
	LCD_VidInit();

	LCD_VidWriteString("WritingAPP:  ");
	_delay_ms(500);
	LCD_VidSendInst(LCD_2ndLINE_STRT);
	for(u16 i=0;i<1000;i++)
	{
	Eeprom_u8WriteByte(0,i,0);
	LCD_VidSendInst(LCD_2ndLINE_STRT);
	LCD_VidSendData(i);
	}
	/*Eeprom_u8WriteByte(0,1,'L');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,2,'O');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,3,'V');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,4,'E');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,5,'Y');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,6,'O');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,7,'U');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,8,'A');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,9,'M');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,10,'I');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,11,'R');
	_delay_ms(10);
	Eeprom_u8WriteByte(0,12,'A');
	_delay_ms(10);*/


	LCD_VidWriteString("DONE !!!");

	while(1)
	{

	}

	return 0;
}
