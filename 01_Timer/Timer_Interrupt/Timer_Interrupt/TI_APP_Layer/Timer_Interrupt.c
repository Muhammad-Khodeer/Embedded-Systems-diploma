/*
 * Timer_Interrupt.c
 *
 * Created: 4/25/2015 10:40:29 AM
 *  Author: Mohamed
 */ 

//Included files
//This is the Application Layer >> Connected with >> Hardware Layer.
#include "TI_HW_Layer/TI_HW_Layer.h"

int main (void)
{
	Initiliation(); 
	//Select the speed type.[should be from from 0 to 6] or [CLK1,CLK8,CLK64,CLK256,CLK1024,EX_CLK_FE,EX_CLK_HE]
	Select_Speed_Type(CLK64);  
	while(1)
	{
		Start_LED_Flash();	
		Stop_if_BTN16_Pushed(); // Note : [if you Push Button16 the LED Flash will stop]
	}
}