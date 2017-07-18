/*
 * LM35.c
 */ 
#include <avr/io.h>
uint8_t ReadTemp(void)
{
	ADMUX = _BV(ADLAR)  | _BV(REFS0); 	//Left Adjust
	ADCSRA |= (1 << ADSC); // start conversion
	while (ADCSRA & (1 << ADSC));
	return ADCH;
	
}
void InitADC(void)
{
	ADCSRA=0X87;
}
