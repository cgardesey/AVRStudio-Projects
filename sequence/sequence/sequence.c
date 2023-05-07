/*
 * sequence.c
 *
 * Created: 8/18/2013 11:28:28 AM
 *  Author: AYEDUASE HIGH STREET
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
		for(int i=1; i<=128; i*=2)
		{
			PORTB=i;
			_delay_ms(200);
		
		}
		for(int i=64;i>1;i/=2)
	{		
       PORTB=i;
	   _delay_ms(200);
    }
	}	
}