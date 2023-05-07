/*
 * HOME_AUTOMATION.c
 *
 * Created: 9/13/2013 5:31:17 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include <avr/delay.h> 
#include "lcd.h"

int main(void)
{
	uint8_t A=0;
	uint8_t B;
	DDRC=255;
	DDRA=0;
	LCDInit(LS_BLINK|LS_ULINE);
	LCDClear();
	LCDWriteString("HOME AUTOMATION");
	_delay_ms(2000);
	LCDClear();
	LCDWriteString("SCANNING");
	LCDWriteStringXY(0,1,"   SENSORS.....");
	_delay_ms(2000);
    while(1)
    {
		
       B=~PINA;
	   if(A!=B)
	   switch(B)
	   {
		case 0x80:
		PORTC=0x00;
		LCDClear();
		LCDWriteString("**SYSTEM IDLE**");
		LCDWriteStringXY(0,1,"***************");
		//_delay_ms(1000);
		break;
		//fire
		case 0x81:
		PORTC=0x01;
		LCDClear();
		LCDWriteString("FIRE!! FIRE!!"); 
		//_delay_ms(1000);
		break;
		//light
		case 0x82:
		PORTC=0x02;
		LCDClear();
		LCDWriteString("LIGHTS ON!!");
		//_delay_ms(1000);
		break;
		//LASER
		case 0x84:
		PORTC=0x04;
		LCDClear();
		LCDWriteString("INTRUDER DETECTD");
		//_delay_ms(1000);
		break;
		//TOUCH
		case 0x88:
		PORTC=0x08;
		LCDClear();
		LCDWriteString("TOUCH DETECTED");
		//_delay_ms(1000);
		break;
		//GADGET(FAN)
		case 0x90:
		PORTC=0x10;
		LCDClear();
		LCDWriteString("GADGET ON!!");
		//_delay_ms(1000);
		break;
		//FLAME AND TOUCH
		case 0x89:
		PORTC=0x09;
		LCDClear();
		LCDWriteString("FIRE!! FIRE!!");
		LCDWriteStringXY(0,1,"TOUCH DECTECTED");
		break;		
		default:
	   LCDClear();
	   LCDWriteString("DANGER!!!!");
	   break;
	     
	   }
	   
    }
}