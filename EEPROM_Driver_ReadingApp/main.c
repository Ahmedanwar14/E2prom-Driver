/*
 * main.c
 *
 *  Created on: Jul 9, 2020
 *      Author: Anwar
 */

#include"STD_TYPES.h"
#include"LCD_INT.h"
#include"Eeprom_INT.h"
#include<util/delay.h>

int main(void)
{
	u8 Rec_Byte=0;
	Eeprom_VidInit();
	LCD_VidInit();

	LCD_VidWriteString("Reading APP: ");
	_delay_ms(500);

	LCD_VidSendInst(LCD_2ndLINE_STRT);

	Eeprom_u8ReadByte(0,0,&Rec_Byte);
	LCD_VidSendData(Rec_Byte);
	_delay_ms(10);

	Eeprom_u8ReadByte(0,1,&Rec_Byte);
	LCD_VidSendData(Rec_Byte);
	_delay_ms(10);

	Eeprom_u8ReadByte(0,2,&Rec_Byte);
	LCD_VidSendData(Rec_Byte);
	_delay_ms(10);

	Eeprom_u8ReadByte(0,3,&Rec_Byte);
	LCD_VidSendData(Rec_Byte);
	_delay_ms(10);

	Eeprom_u8ReadByte(0,4,&Rec_Byte);
	LCD_VidSendData(Rec_Byte);
	_delay_ms(10);
	Eeprom_u8ReadByte(0,5,&Rec_Byte);
		LCD_VidSendData(Rec_Byte);
		_delay_ms(10);
		Eeprom_u8ReadByte(0,6,&Rec_Byte);
			LCD_VidSendData(Rec_Byte);
			_delay_ms(10);
			Eeprom_u8ReadByte(0,7,&Rec_Byte);
				LCD_VidSendData(Rec_Byte);
				_delay_ms(10);
				Eeprom_u8ReadByte(0,8,&Rec_Byte);
					LCD_VidSendData(Rec_Byte);
					_delay_ms(10);
					Eeprom_u8ReadByte(0,9,&Rec_Byte);
						LCD_VidSendData(Rec_Byte);
						_delay_ms(10);
						Eeprom_u8ReadByte(0,10,&Rec_Byte);
							LCD_VidSendData(Rec_Byte);
							_delay_ms(10);
							Eeprom_u8ReadByte(0,11,&Rec_Byte);
								LCD_VidSendData(Rec_Byte);
								_delay_ms(10);
								Eeprom_u8ReadByte(0,12,&Rec_Byte);
									LCD_VidSendData(Rec_Byte);
									_delay_ms(10);


	while(1)
	{

	}
	return 0;
}

