#ifndef SSEG_H_
#define SSEG_H_

typedef enum {
			RIGHT,
			LEFT
			}POS;

void init_SSEG(void);

// you must call init_SSEG before calling this function
//POS should be LEFT or RIGHT
void SSEG_Print(POS Position,unsigned char num);

#endif // SSEG_H_