#include "MYMICRO.h"
#include "SSEG.h"
#include "OStime.h"
//////////////   local variables   ////////////
static uint8_t SSEG_NUM;
uint8_t StartSSEG = 0;
///////////////////////////////////////////////

void init_SSEG(void)
{
	SSEG_INIT;
	StartSSEG = 1;
}

void SSEG_Print9(POS Position,unsigned char num){
	
	SSEG_PINS(num); /* PORTB = (num<<4); */
	if(Position == LEFT){
		EN_LEFT_SEG;
	}
	else
	{
		EN_RIGHT_SEG;
	}
}
void SSEG_Print99(unsigned char num)
{
	SSEG_NUM = num;
}
//// this cyclic should be called each 10ms from OS
void SSEG_cyclic10ms(void)
{
	static unsigned char flag=0;
	if (StartSSEG)
	{
		if(flag){
			SSEG_Print9(LEFT,SSEG_NUM/10);
			flag = 0;
		}else{
			SSEG_Print9(RIGHT,SSEG_NUM%10);
			flag = 1;
		}
	}
}