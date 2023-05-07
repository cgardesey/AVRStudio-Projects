/*
 * portBtest2.c
 *
 * Created: 8/17/2013 12:59:24 PM
 *  Author: AYEDUASE HIGH STREET
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB=0xff;
    while(1)
    {
     PORTB=0xf0;   //TODO:: Please write your application code 
    }
}