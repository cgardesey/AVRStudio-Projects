/*
 * lcdtest.c
 *
 * Created: 9/8/2013 1:30:28 PM
 *  Author: Cyril
 */ 

#include <avr/io.h>
#include "lcd.h"

int main(void)
{
    //while(1)
    //{
        LCDInit(LS_BLINK|LS_ULINE);
		LCDClear();
		LCDWriteStringXY(0,0,"Hello!");
    //}
}