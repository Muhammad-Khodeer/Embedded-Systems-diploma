/*
 * Seven_Segment_Driver.c
 *
 * Created: 4/25/2015 8:52:03 AM
 *  Author: Mohamed
 */ 


//This is the Application Layer >> Connected with >> Hardwares Layer.
#include "Hard_Ware_Layer\SSEG_HW_Layer.h"

int main(void)
{
	Init_SSEG();
	SSEG_Run (Left, 4);
}
