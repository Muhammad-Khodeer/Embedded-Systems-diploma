/*
 * TI_HW_Layer.c
 *
 * Created: 4/25/2015 10:46:05 AM
 *  Author: Mohamed
 */ 

//Included Folders
//This is Hard ware Later Connected with MCAL Layer
#include "TI_MCAL_Layer/TI_MCAL_Layer.h"
//The .h file of this hardware layer
#include "TI_HW_Layer.h"

volatile unsigned char Event; // THIS IS EXTERNAL VARIABLE FROM MCAL LAYER

//Function[1]
void Initiliation(void)
{
	Init_LED4;
	Init_BTN16;
	Init_LED4_Flash();
}
//Function[2]
void Select_Speed_Type(Type Speed_Type)
{
    if (Speed_Type == CLK1)
    {
	    Speed_Type0;
    }
    else if (Speed_Type == CLK8)
    {
	    Speed_Type1;
    }
    else if (Speed_Type == CLK64)
    {
	    Speed_Type2;
    }
    else if (Speed_Type == CLK256)
    {
	    Speed_Type3;
	}
    else if (Speed_Type == CLK1024)
    {
	    Speed_Type4;
    }
	else if (Speed_Type == EX_CLK_FE)
    {
	    Speed_Type5;
    }
    else if (Speed_Type == EX_CLK_HE)
    {
	    Speed_Type6;
    }
}
//Function[3]
void Start_LED_Flash(void)
{
	while(Event) //this means that the interrupt is happened and make Event = 1.
	{
		task();
		Event = 0;
	}
}
//Function[4]
void Stop_if_BTN16_Pushed(void)
{
	if(BTN16_Is_Pushed)
	{
		Stop_LED;
	}
}
