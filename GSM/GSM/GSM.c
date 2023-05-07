/*
 * GSM.c
 *
 * Created: 9/26/2013 3:17:03 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

void uart_init( unsigned int ubrrval )
// ubrrval depends on uC clock frequency and required baudrate
{
UBRRH = (unsigned char) (ubrrval>>8); // set baud rate
UBRRL = (unsigned char) ubrrval; // set baud rate
UCSRB = _BV(RXEN) | _BV(TXEN);
/* Enable UART receiver and transmitter, 8-bit data length,
1 stop bit, no parity bits */
}
unsigned char uart_rx( void )
{
while ( !(UCSRA & _BV(RXC)) ); // wait until receive complete
return UDR;
}
void uart_tx( unsigned char data )
{
while ( !(UCSRA & _BV(UDRE)) ); // wait until UDR is empty
UDR = data;
}

int main(void)
{
	
	uart_init(9600);
	_delay_ms(3000);
	uart_tx('A');
	_delay_ms(3000);
	uart_rx();
   
}

