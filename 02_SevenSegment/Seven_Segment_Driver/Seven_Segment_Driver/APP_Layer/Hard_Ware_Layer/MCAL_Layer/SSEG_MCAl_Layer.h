
#include <avr/io.h>

#ifndef SSEG_MCAL_LAYER_H_INCLUDED
#define SSEG_MCAL_LAYER_H_INCLUDED


#define Init_SSEG_Pins DDRA |= (1<<4);\
                       DDRA |= (1<<5);\
                       DDRB |= 0xF0

#define SSEG_Print(Num) PORTB |= (Num<<4)

#define Enable_Left_SSEG PORTA &= ~(1<<5);\
                         PORTA |= (1<<4)
#define Enable_Right_SSEG PORTA &= ~(1<<4);\
                          PORTA |= (1<<5)

#endif // SSEG_MCAL_LAYER_H_INCLUDED
