/*
 * SSEG_HW_Layer.c
 *
 * Created: 4/26/2015 11:28:31 PM
 *  Author: Mohamed
 */ 

/**This is the Hardware Layer inclusdes its .h and connected with MCAL Layer**/
#include "SSEG_HW_Layer.h" 
#include "SSEG_MCAL_Layer/SSEG_MCAL_Layer.h"
extern volatile unsigned char Event; //Note : [External variable come from MCAL Layer] 

void Init_SSEG(void)
{
	Init_SSEG_Pins;
	Init_Digits_show();
}

void Print_SSEG(int DiditL, int DigitR)//You can Enter any number Between [00 : 99].
{
	if(Event_Left)
	{	
		Desiable_Right_SSEG;
		SSEG_Print(DiditL);
		Enable_Left_SSEG;
	}
	else if (Event_Right)
    {		
		Desiable_Left_SSEG;
		SSEG_Print(DigitR);
		Enable_Right_SSEG;
	}
}