/*
 * My_Kit.h
 *
 * Created: 4/20/2015 1:59:43 AM
 *  Author: Mohamed
 */ 


#ifndef MY_KIT_H_
#define MY_KIT_H_
////// #Defines for External files.
#define F_CPU 1000000ul // 1 mega H frequency 

/////  #Defines for My code.
#define Pin_Set(Port, Num) Port |= (1<<Num)
#define Pin_Clr(Port, Num) Port &= ~(1<<Num)

#define Init_Btn16 Pin_Clr(DDRD, 7)
#define Init_Led4 Pin_Set(DDRD, 3);\
								Pin_Clr(PORTD, 3)

#define Led4_On Pin_Set(PORTD, 3)
#define Led4_Off Pin_Clr(PORTD, 3)
#define Btn16_Is_Pressed (!(PIND & (1<<7)))


#endif /* MY_KIT_H_ */