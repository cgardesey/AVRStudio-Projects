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
	uint8_t a=1;
	DDRB=255;
    while(1)
    {
		
        for (int i=1;i<8;i++)
		{
			a=a<<1;
			PORTB=a;
			_delay_ms(500);
		}
		
		for (int i=1;i<8;i++)
		{
			a=a>>1;
			PORTB=a;
			_delay_ms(500);
		}
    }
}