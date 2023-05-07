/*
 * _4511_decoder_test.c
 *
 * Created: 9/4/2013 10:40:21 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>
int main(void)
{
	DDRB=255;
    while(1)
    {
       for (int i=0;i<=9;i++)
       {
		   PORTB=i;
		   _delay_ms(1000);
       }
    }
}