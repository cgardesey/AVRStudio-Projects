/*
 * portB_test.c
 *
 * Created: 8/17/2013 12:48:17 PM
 *  Author:Cyril
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
        PORTB=0xff;//TODO:: Please write your application code 
    }
}