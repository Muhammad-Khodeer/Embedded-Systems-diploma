/*
 * SevenSeg.c
 *
 * Created: 4/24/2015 3:43:23 PM
 *  Author: Aser
 */ 
#define F_CPU 1000000ul
#include <util/delay.h>
#include "MYMICRO.h"
#include "SSEG.h"
#include "OStime.h"
int main(void)
{
	unsigned char number = 0;
	///////////  initialization functions ////////////
	OStime_start();
	init_SSEG();
	Init_LED4;
	
	//////////   main sequence  /////////////////////
	
	SSEG_Print99(32);  // Printing 32 using one function
	_delay_ms(2000);   // normal delay
	SSEG_Print99(94);  // Printing 94
	_delay_ms(2000);
    while(1)  
    {
		SSEG_Print99(number);
		number++;
		if(number == 100)
		{
			number = 0;
		}
		
		////////////////
		LED4_OFF;
		_delay_ms(500);
		LED4_ON;
		_delay_ms(500); 
    } 
}