/*
 * delay.c
 *
 * Created: 8/18/2013 10:44:49 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
		PORTB=0x01;
		_delay_ms(500);
		PORTB=0x00;
		_delay_ms(500);
        //TODO:: Please write your application code 
    }
}