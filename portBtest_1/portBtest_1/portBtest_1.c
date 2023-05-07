/*
 * portBtest_1.c
 *
 * Created: 8/18/2013 9:20:35 AM
 *  Author: AYEDUASE HIGH STREET
 */ 

#include <avr/io.h>
#include <avr/delay.h>
#define t 1000

int main(void)
{
	uint8_t a=0xaa;
	uint8_t b=0x87;
	uint8_t c=0xad;
	DDRB=0xff;//configure portb as output
    while(1)
    {
        PORTB=0;
		_delay_ms(t);
		PORTB|=a;
		_delay_ms(t);
		PORTB=b;
		_delay_ms(t);
		PORTB&=0x04;
		_delay_ms(t);
		PORTB=b;
		_delay_ms(t);
		PORTB^=0x04;
		_delay_ms(t);
		PORTB=c;
		_delay_ms(t);
		PORTB=c<<1;
		_delay_ms(t);
		
    }
}