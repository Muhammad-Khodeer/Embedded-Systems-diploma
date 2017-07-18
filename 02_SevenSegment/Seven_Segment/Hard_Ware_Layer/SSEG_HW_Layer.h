#ifndef SSEG_HW_LAYER_H_INCLUDED
#define SSEG_HW_LAYER_H_INCLUDED

//New types
typedef enum {
                Left,
                Right
             }pos;

//Prototype//declaration//
//Initialization of Seven_Segment.
void Init_SSEG(void);
//Run Seven_Segment>>You must call Init_SSEG before calling this function
//Position must be left or right & Num Must be 0 to 9
void SSEG_Run (pos Position, unsigned char Num); //uint8 >> unsigned char


#endif // SSEG_HW_LAYER_H_INCLUDED
