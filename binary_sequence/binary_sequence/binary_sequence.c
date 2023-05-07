/*
 * binary_sequence.c
 *
 * Created: 8/19/2013 12:16:25 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
		for(int i=1;i<=256;i++)
	   {
		PORTB=i;
		_delay_ms(500);
	   }		
	}	
}