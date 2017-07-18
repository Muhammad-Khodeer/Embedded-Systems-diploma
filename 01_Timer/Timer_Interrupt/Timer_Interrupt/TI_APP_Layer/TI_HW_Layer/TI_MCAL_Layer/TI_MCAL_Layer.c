/*
 * TI_MCAL_Layer.c
 *
 * Created: 4/26/2015 7:25:01 PM
 *  Author: Mohamed
 */ 

volatile unsigned char Event;
//Included Files
#include <avr/interrupt.h>
#include "TI_MCAL_Layer.h"

void Init_LED4_Flash(void)
{
	Init_Timer_Interupt;
}

// the Code Inside overflow of timer 1 interrupt
ISR(TIMER1_OVF_vect)
{
	Event = 1;
}

//Task function
void task(void)
{
	//ignition
	PORTD ^= (1<<3);
}