/*	Author: hshep002
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;

	//unsigned char pA0 = 0x00;
	//unsigned char pA1 = 0x00;
	//unsigned char pB0 = 0x00;

	unsigned char tmp = 0x00;
//	unsigned char tmp2 = 0x00;
	unsigned char cnt = 0x00;	
    /* Insert your solution below */
    while (1) {
	tmp = 0x01;
	cnt = 0x00;
	if(tmp & PINA)
	{
		cnt ++;
	}
	tmp = 0x02;
	if(tmp & PINA)
	{
		cnt++;
	}
	tmp = 0x04;
        if(tmp & PINA)
        {
            cnt++;
        }
	tmp = 0x08;
        if(tmp & PINA)
        {
                cnt++;
        }
	if(cnt == 0x04) //if all spaces are full
	{
		cnt = cnt | 0x80;		
	}
	PORTC = cnt;
    }
    return 1;
}
