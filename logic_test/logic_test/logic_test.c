/*
 * logic_test.c
 *
 * Created: 8/30/2013 10:56:55 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>
#define t 1000

void true()
{
	PORTB=1; _delay_ms(t);
	PORTB=0; _delay_ms(t);
}

void false()
{
	PORTB=128; _delay_ms(t);
	PORTB=0; _delay_ms(t);
}


int main(void)
{
	DDRB=255;
    while(1)
    {
       if(1&&0)
			true();
		else
			false();
	    
    }
}