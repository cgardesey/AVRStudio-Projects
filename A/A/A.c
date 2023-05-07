/*
 * A.c
 *
 * Created: 8/25/2013 12:08:09 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
        PORTB=0x81;//TODO:: Please write your application code 
    }
}