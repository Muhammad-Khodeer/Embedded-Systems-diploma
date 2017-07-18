/*
 * SSEG_MCAL_Layer.c
 *
 * Created: 4/26/2015 11:30:21 PM
 *  Author: Mohamed
 */ 

#include "SSEG_MCAL_Layer.h"
#include <avr/interrupt.h>

volatile unsigned char Event;


void Init_Digits_show(void)
{
	Enable_Global_initerrupt;
	Enable_OverFlow_Timer1;
	Start_With_Speed_Type1;
}

ISR(TIMER1_OVF_vect)
{	
	Event = !Event;
}