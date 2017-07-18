/*
 * MYMICRO.h
 *
 */ 
#include <avr/io.h>

#ifndef MYMICRO_H_
#define MYMICRO_H_

#define PinSet(port,num) port |= (1<<num)
#define PinClr(port,num) port &= ~(1<<num)


#define	SSEG_INIT DDRA |= (1<<4);\
				  DDRA |= (1<<5);\
				  DDRB |= 0XF0
				  
#define SSEG_PINS(NUM) PORTB = (PORTB&0x0F)|(NUM<<4)

#define EN_RIGHT_SEG	PORTA &= ~(1<<4);\
						PORTA |= (1<<5)
#define EN_LEFT_SEG     PORTA &= ~(1<<5);\
						PORTA |= (1<<4)
#define LED3_ON PinSet(PORTD,2)
#define LED3_OFF PinClr(PORTD,2)
#define Init_LED3	(DDRD|=(1<<PD2))	
////////////////////////////////////////////////////////
#define Init_SW16 PinClr(DDRD,7)
#define Init_LED4 PinSet(DDRD,3);\
					PinClr(PORTD,3)
#define SW16_Is_Pressed (!(PIND&(1<<7)))
#define LED4_OFF PinClr(PORTD,3)
#define LED4_ON  PinSet(PORTD,3)

////////////////////////////////////////////////////////
//			KeyPad						////////////////
#define keypad_init		DDRC |= 0xF0;\
						DDRD &= 0x0F;\
						PORTC |= 0xF0

#define keypad_out(x)	PORTC |= 0xF0;\
						asm volatile("nop");\
						PORTC &= ~(1<<(x+3));\
						asm volatile("nop")

#define keypad_in(x)	(PIND&(1<<(x+4)))
//////////////////////////////////////////////////////
#endif /* MYMICRO_H_ */