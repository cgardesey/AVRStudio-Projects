/*
 * input.c
 *
 * Created: 9/8/2013 11:10:24 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>

int main(void)
{
	DDRC=0;
	DDRB=255;
	PORTC=255;
	
    while(1)
    {
        PORTB=PINC;
    }
}