/*
 * SSEG_MCAL_Layer.h
 *
 * Created: 4/26/2015 11:30:58 PM
 *  Author: Mohamed
 */


#ifndef SSEG_MCAL_LAYER_H_
#define SSEG_MCAL_LAYER_H_

#include <avr/io.h>

#define Bit_Set(REG, Num) REG |= (1<<Num)
#define Bit_Clr(REG, Num) REG &= ~(1<<Num)

#define Init_SSEG_Pins Bit_Set(DDRA, 4);\
					   Bit_Set(DDRA, 5);\
					   DDRB |= 0xF0


#define Enable_Global_initerrupt sei()
#define Enable_OverFlow_Timer1 Bit_Set(TIMSK, TOIE1)
#define Start_With_Speed_Type1 Bit_Set(TCCR1B, CS10);\
							   Bit_Clr(TCCR1B, CS11);\
							   Bit_Clr(TCCR1B, CS12)


#define Event_Left Event == 0
#define Event_Right Event == 1

#define SSEG_Print(Num) PORTB = (Num<<4)

#define Enable_Left_SSEG Bit_Clr(PORTA, 5)
#define Enable_Right_SSEG Bit_Clr(PORTA, 4)

#define Desiable_Left_SSEG  Bit_Set(PORTA, 5)
#define Desiable_Right_SSEG Bit_Set(PORTA, 4)


 // Prototype
void Init_Digits_show(void);

#endif /* SSEG_MCAL_LAYER_H_ */
