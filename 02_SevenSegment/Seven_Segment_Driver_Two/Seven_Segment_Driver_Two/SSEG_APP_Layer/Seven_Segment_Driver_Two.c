/*
 * Seven_Segment_Driver_Two.c
 *
 * Created: 4/26/2015 11:04:02 PM
 *  Author: Mohamed
 */

/**This is The Application Layer Connected with the hardware layer **/
#include "SSEG_HW_Layer/SSEG_HW_Layer.h"

int main(void)
{
    Init_SSEG();
	while(1)
	{                     //Enter any Number Between [00:99] >> 62 as (6,2)
		Print_SSEG(6,2);  //Note: [This work with FCPU 8 MHZ]
	}

}
