/*
 * keypad.c
 */ 
#include "MYMICRO.h"
static uint8_t colScan(void);
void keypadInit(void)
	{
		keypad_init;
	}

uint8_t keyScan(void)
	{
		uint8_t col,raw,RET;
		
		for(raw=1;raw <= 4;raw++)
		{
			keypad_out(raw);
			col = colScan();
			if(col)
			{
				RET = (raw-1)*4 + col;
				break;
			}else
			{
				RET = 0;
			}
			
		}
		return RET;
	}
	
static uint8_t colScan(void)
	{
		volatile uint8_t col,RET;
		for(col = 0;col <=3 ;col++)
		{
			if(0 != (RET = keypad_in(col)))
			{
				RET = 0;
			}
			else
			{
				RET = col+1; 
				break;
			}
		}
		return RET;
	}