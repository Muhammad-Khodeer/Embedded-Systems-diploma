/*
 * TI_MCAL_Layer.h
 *
 * Created: 4/26/2015 1:24:11 AM
 *  Author: Mohamed
 */ 


#ifndef TI_MCAL_LAYER_H_
#define TI_MCAL_LAYER_H_

#include <avr/io.h>

// Set And Clear Bits
#define Bit_Set(REG, Num) REG |= (1<<Num)
#define Bit_Clr(REG, Num) REG &= ~(1<<Num)

//LED4 and its Interrupt//set Port D pin 3 as output[led4].//Enable overflow Interrupt of timer1.//Enable Global Interrupts.
#define Init_LED4 Bit_Set(DDRD, 3)
									  
#define Init_BTN16 Bit_Clr(DDRD, 7)			//set Port D pin 7 as input this is the BTN16

#define Init_Timer_Interupt Bit_Set(TIMSK, TOIE1);\
							sei()

//Speed Types // TCCR1B Register Table
#define Speed_Type0 Bit_Set(TCCR1B, CS10);\
					Bit_Clr(TCCR1B, CS11);\
					Bit_Clr(TCCR1B, CS12)
					
#define Speed_Type1 Bit_Clr(TCCR1B, CS10);\
					Bit_Set(TCCR1B, CS11);\
					Bit_Clr(TCCR1B, CS12)

#define Speed_Type2 Bit_Set(TCCR1B, CS10);\
					Bit_Set(TCCR1B, CS11);\
					Bit_Clr(TCCR1B, CS12)
					
#define Speed_Type3 Bit_Clr(TCCR1B, CS10);\
					Bit_Clr(TCCR1B, CS11);\
					Bit_Set(TCCR1B, CS12)
					
#define Speed_Type4 Bit_Set(TCCR1B, CS10);\
					Bit_Clr(TCCR1B, CS11);\
					Bit_Set(TCCR1B, CS12)
					
#define Speed_Type5 Bit_Clr(TCCR1B, CS10);\
					Bit_Set(TCCR1B, CS11);\
					Bit_Set(TCCR1B, CS12)
					
#define Speed_Type6 Bit_Set(TCCR1B, CS10);\
					Bit_Clr(TCCR1B, CS11);\
					Bit_Clr(TCCR1B, CS12)
//Stop Button
#define BTN16_Is_Pushed (!(PIND & (1<<7)))

#define Stop_LED Bit_Clr(TCCR1B, CS10);\
				 Bit_Clr(TCCR1B, CS11);\
				 Bit_Clr(TCCR1B, CS12);\
				 Bit_Clr(PORTD, 3)
				 
//Prototype // declaration 
void Init_LED4_Flash(void);
void task(void);

#endif /* TI_MCAL_LAYER_H_ */