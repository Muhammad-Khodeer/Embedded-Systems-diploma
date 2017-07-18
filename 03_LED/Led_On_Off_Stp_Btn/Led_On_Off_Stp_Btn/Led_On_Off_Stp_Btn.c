/*
 * Led_On_Off_Stp_Btn.c
 *
 * Created: 4/20/2015 4:36:14 AM
 *  Author: Mohamed
 */ 

//includes files
#include <avr/io.h>
#include "My_Kit.h"

//prototype
void Delay(long volatile t);
void End(void);

//Public variable
int x =1;

int main(void)
{
	//initialization code
	Init_Led4;
	Init_Btn16;
	
	//main code
    while(x)
    {
		Led4_On;
		Delay(5); // Enter Delay time in second
		Led4_Off;
		Delay(5); //Enter delay time in second
    }
}
// The Delay Function.
void Delay(long volatile time)
{
	time *= 50000;
	long i;
	for(i = 0; i < time; i++)
	{
		if (Btn16_Is_Pressed)
			{
				End();
				break;
			}
	}
}

void End(void)
{
	x = 0;
	Led4_Off;
}