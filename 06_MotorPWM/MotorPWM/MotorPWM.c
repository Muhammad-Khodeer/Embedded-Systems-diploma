


#include <avr/io.h>
#define F_CPU 1000000ul
#include <util/delay.h>
void pwm_start(unsigned char PULSE_WIDTH);
int main(void)
{
    while(1)
    {
		pwm_start(255/4);
		_delay_ms(5000);
		pwm_start(255/2);
		_delay_ms(5000);
		pwm_start((255/4)*3);
		_delay_ms(5000);
		pwm_start(255);
		_delay_ms(5000);
		pwm_start(0);
		_delay_ms(5000);
        //TODO:: Please write your application code 
    }
}
void pwm_start(unsigned char PULSE_WIDTH){
	OCR1AL = PULSE_WIDTH;	//Load Pulse width
	OCR1AH = 0;
	DDRD |= (1<<5);		//PortD.5 as o/p
	TCCR1A = 0x81;		//8-bit, Non-Inverted PWM
	TCCR1B = 1;		//Start PWM
}