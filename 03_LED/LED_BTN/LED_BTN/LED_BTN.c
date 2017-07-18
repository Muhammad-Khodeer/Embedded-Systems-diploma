/*
 * LED_BTN.c
 *
 * Created: 4/20/2015 1:08:43 AM
 *  Author: Mohamed
 */
 
/*	In our Application we have :
								Led_4 -> Port D pin 3
								Button_16 -> Port D Pin 7
*/

//--------------------------- Includes Files --------------------------------------------------------->
#include <avr/io.h> //
#include "My_Kit.h" //This is my file... of Layer ().
#include <util/delay.h> //File include Delay Functions.
/**
NOTE : To USE Delay Methods you must set The F_CPU -> The Frequancy of the CPU (Crystal) by #Define
**/

//------------------------------------The Main FUNCTION ---------------------------------------------->
int main(void)
{
	//////////////// The INITIALIZATION ////////////////////////////////////
	Init_Led4;
	Init_Btn16;
	/////////////// THE MAIN CODE //////////////////////////////////////////
    while(1)
    {
		if (Btn16_Is_Pressed)
		{
			Led4_On;
			_delay_ms(500);
			Led4_Off;
			_delay_ms(500);
		}
		else 
		{
			Led4_Off;
		}
    }
}