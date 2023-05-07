/*
 * LCD_Keypad_test.c
 *
 * Created: 9/8/2013 10:57:59 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
//#include <util/delay.h>

#include "lcd.h"
#include "myutils.h"

uint8_t GetKeyPressed()
{
	uint8_t c,r;
	PORTA|=0X0F;
	for (c=0; c<3; c++)
	{
		DDRA&=~(0X7F);
		DDRA|=(0x40>>c);
		for (r=0; r<4; r++)
		{
			if (!(PINA&(0x08>>r)))
			{
				return r*3+1+c;
			}
		}
	}
	return 0xff;//Indicate no key pressed
	
		
}

int main(void)
{
	
	LCDInit(LS_NONE);
	
	uint8_t key;

    while(1)
    {
		
       	key=GetKeyPressed();//get the keycode of pressed key
		   
	LCDWriteIntXY(0,0,key,3);//Print it at location
    }
}