/*
 * TI_HW_Layer.h
 *
 * Created: 4/25/2015 10:46:36 AM
 *  Author: Mohamed
 */ 

#ifndef TI_HW_LAYER_H_
#define TI_HW_LAYER_H_

//New variable Type
typedef enum Types
{
	CLK1,
	CLK8,
	CLK64,
	CLK256,
	CLK1024,
	EX_CLK_FE,
	EX_CLK_HE
}Type;

//Functions Prototype // Declaration
void Initiliation(void);
void Select_Speed_Type(Type Speed_Type);//should be [from 0 to 6] or [CLK1,CLK8,CLK64,CLK256,CLK1024,EX_CLK_FE,EX_CLK_HE]
void Start_LED_Flash(void);
void Stop_if_BTN16_Pushed(void);



#endif /* TI_HW_LAYER_H_ */