/*
 * seven1.c
 *
 * Created: 9/3/2013 11:06:26 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRC=255;
	uint8_t number[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
    while(1)
    {
		PORTC=number[0];
		_delay_ms(1000);
       PORTC=number[4];
	   _delay_ms(1000);
    }
}