/*
 * OStime.c
 */ 
#include <avr/interrupt.h>
#include "OStime.h"
#include "SSEG.h"

void OStime_start(void){
	TIMSK |= (1 << TOIE0); // Enable overflow interrupt
	TCCR0 |= (1 << CS01)|(1<<CS00); // Start timer at Fcpu/64
	sei();
}
ISR(TIMER0_OVF_vect)
{
	SSEG_cyclic10ms();  // this function will be called every 5ms by Timer0 interrupt
	TCNT0 = 99;  // load the timer register to fire each 10 ms (it will start with 99 until reaching 255 and then interrupt will take place)
	/* To calcualte the time (255 - 99) = 156 the ecounts remaining for the timer to overflow 
		and since there is a prescalar Fcpu/64 then to calcualte the time:
		156*64 = 10000 microseconds = 10 milliseconds */
}