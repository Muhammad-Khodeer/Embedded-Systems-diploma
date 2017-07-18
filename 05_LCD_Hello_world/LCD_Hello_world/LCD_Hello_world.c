


#include <avr/io.h>
#include "lcd_lib.h"
int main(void)
{
	LCDinit();
	LCDclr();
	LCDcursorOnBlink();
	LCDGotoXY(3,0);
	LCDstring("Hello World",11);
    while(1)
    {
        //TODO:: Please write your application code 
    }
}