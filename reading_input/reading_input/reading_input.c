/*
 * reading_input.c
 *
 * Created: 8/30/2013 11:31:37 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB=255;
	DDRC=0;
    while(1)
    {
		PORTB=~PINC;
    }
}