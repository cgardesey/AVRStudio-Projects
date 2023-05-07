/*
 * log_in.c
 *
 * Created: 10/14/2013 8:06:12 AM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h>

#include "lcd.h"
#include "myutils.h"


char kc;
char pin[1];
int count;
int i;


uint8_t GetKeyPressed()
{
	uint8_t c,r;
	PORTA|=0X0F;
	for (c=0; c<3; c++)
	{
		DDRA&=~(0X7F);
		DDRA|=(0x40>>c);
		for (r=0; r<4; r++)
		{
			if (!(PINA&(0x08>>r)))
			{
				return r*3+1+c;
			}
		}
	}
	return 0xff;//Indicate no key pressed
	
		
}

int main(void)
{
  
 LCDInit(LS_NONE);

DDRC=0XFF;
 
 LCDWriteString("Welcome");
 _delay_ms(500);
  LCDClear();
 LCDWriteString("Enter password");
 _delay_ms(500);
 LCDClear();
 
 //i=0;
 
 for (i=0;i<1;i++){
 do
   {
    //kc=0;
    kc=GetKeyPressed();
    _delay_ms(500);
  }while(!kc);
 
  pin[i]=kc;
  LCDWriteStringXY(0,i+1, "*");

 
}
 
if (pin[0]==3 && pin[1]==1 && pin[2]==2)
{
//lcd_cmd(_lcd_clear);
LCDWriteString("Successful Login");
}

else
{
	LCDClear();
LCDWriteString("Login Unsuccessful") ;
	PORTC=0XFF;
}

}