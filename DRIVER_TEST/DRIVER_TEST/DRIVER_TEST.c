/*
 * DRIVER_TEST.c
 *
 * Created: 9/3/2013 9:10:55 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>
#define sound 0xfe
#define sound_off 0
#define t 1000
int main(void)
{
	DDRC=255;
    while(1)
    {
       PORTC=sound;
	   _delay_ms(t);
	   PORTC=sound_off;
	   _delay_ms(t);
	   
    }
}