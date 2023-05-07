/*
 * binary_sequence2.c
 *
 * Created: 8/26/2013 11:17:31 PM
 *  Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=255;
    while(1)
    {
        for (int i=1; i<=128; i*=2)
		{
			PORTB=(255-i);
			_delay_ms(500);
		}
		
		for (int i=64; i>1; i/=2)
		{
			PORTB=(255-i);
			_delay_ms(500);
		}
    }
}