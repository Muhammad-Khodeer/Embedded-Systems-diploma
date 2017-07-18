//this is The Hardwares Layer >> Connected with >> MCAl Layer
#include "SSEG_MCAL_Layer.h"
//this .c file Has its .h file
#include "SSEG_HW_Layer.h"

void Init_SSEG(void)
{
    Init_SSEG_Pins;
}

void SSEG_Run (pos Position, unsigned char Num)
{
    SSEG_Print(Num);

    if (Position == Left)
        Enable_Left_SSEG;
    else
        Enable_Right_SSEG;

}
