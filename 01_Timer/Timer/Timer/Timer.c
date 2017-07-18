/*
 * Timer.c
 *
 * Created: 4/24/2015 1:09:50 PM
 *  Author: Mohamed
 */ 


#include <avr/io.h>  //
#include <avr/interrupt.h> //
// Public variables
volatile unsigned char Event; // 
//Prototype
void task(void);
//void StopTimer(void);


int main(void)
{
	//init
	DDRD |= (1<<3);
	TIMSK |=(1<<TOIE1);
	TCCR1B |=(1<<CS11);
	sei();
    while(1)
    {
        while(Event)
		{
			task();
			Event = 0;
		}
    }
}

ISR(TIMER1_OVF_vect)
{
	Event = 1;
}

void task(void)
{
	//ignition
	PORTD ^= (1<<3);
}