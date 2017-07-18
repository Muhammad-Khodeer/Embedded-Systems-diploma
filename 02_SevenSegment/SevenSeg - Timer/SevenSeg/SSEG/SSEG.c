#include "mycontroller.h"
#include "SSEG.h"

void init_SSEG(void)
{	
	SSEG_INIT;
}

SSEG_Print(POS Position,unsigned char num){
	
	SSEG_PINS(num);
	if(Position == LEFT)
		EN_LEFT_SEG;
	else
		EN_RIGHT_SEG;

}