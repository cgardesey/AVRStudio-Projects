/*
 * AVRGCC1.c
 *
 * Created: 8/25/2013 9:28:53 PM
 *  Author: AYEDUASE HIGH STREET
 */ 

#include <avr/io.h>

int main(void)
{   
	DDRB=255;
    while(1)
    {
       PORTB=1; //TODO:: Please write your application code 
    }
}