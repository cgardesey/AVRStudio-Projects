/*
 * PORT_EFFECTS1.c
 *
 * Created: 8/25/2013 9:45:11 PM
 *  Author: AYEDUASE HIGH STREET
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=255;
    while(1)
    {
        PORTB=255;
		_delay_ms(500);
		PORTB=0;
		_delay_ms(500);
		
		PORTB=0x80;
		_delay_ms(500);
		PORTB=0;
		_delay_ms(500);
		
		PORTB=0x16;
		_delay_ms(500);
		PORTB=0;
		_delay_ms(500);
		
		PORTB=0xaa;
		_delay_ms(500);
		PORTB=0x55;
		_delay_ms(500);
		
		for (int i=1; i<=128; i*=2)
		{
			PORTB=i;
			_delay_ms(500);
		}
		
		for (int i=64; i>=1; i/=2)
		{
			PORTB=i;
			_delay_ms(500);
		}
		 for (int i=1; i<=128; i*=2)
		{
			PORTB=(255-i);
			_delay_ms(500);
		}
		
		for (int i=64; i>=1; i/=2)
		{
			PORTB=(255-i);
			_delay_ms(500);
		}
    }
}