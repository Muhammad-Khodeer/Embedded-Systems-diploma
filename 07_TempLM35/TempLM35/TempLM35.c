

#include <avr/io.h>
#include "SSEG.h"
#include "OStime.h"
#include <util/delay.h>
unsigned char ReadTemp(void);
void InitADC(void);
int main(void)
{
	int x;
	InitADC();
	init_SSEG();
	OStime_start();
    while(1)
    {
        //TODO:: Please write your application code
		x = ReadTemp(); 
		SSEG_Print99(x);
		_delay_ms(500);
    }
}
void InitADC(void)
{
	ADCSRA = (1<<ADPS0) | (1<<ADPS2)|(1<<ADEN);
	ADMUX = (1<< ADLAR) | (1<<REFS1) | (1<<REFS0); 	//Left Adjust
}

unsigned char ReadTemp(void)
{
	
	ADCSRA |= (1<<ADSC); // start conversion
	while (ADCSRA & (1 << ADSC));
	return ADCH;
	
}