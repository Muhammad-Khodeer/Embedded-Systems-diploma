/*
 * KeyPad.c
 */ 


#include "SSEG.h"
#include "keypad_Drive.h"

int main(void)
{
	unsigned char x;
	//// init seq //////////////////
	init_SSEG();
	keypadInit();
	
	OStime_start();
	//// Main App /////////////////
    while(1)
    {
		x = keyScan();
		SSEG_Print99(x);
		
    }
}