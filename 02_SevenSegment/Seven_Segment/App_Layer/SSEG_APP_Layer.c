//This is the Application Layer >> Connected with >> Hardwares Layer.
#include "SSEG_HW_Layer.h"

int main(void)
{
    Init_SSEG(void);
    SSEG_Run (Left, 4);
}
