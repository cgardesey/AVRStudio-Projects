/*
 * test.c
 *
 * Created: 8/24/2013 11:17:39 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
       PORTB=0x81;
    }
}