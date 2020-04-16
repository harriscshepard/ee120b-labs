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

	unsigned char pA0 = 0x00;
	unsigned char pA1 = 0x00;
	unsigned char pB0 = 0x00;
    /* Insert your solution below */
    while (1) {
	pA0 = PINA & 0x01;
	pA1 = PINA & 0x02;
	if(pA0 == 0x01 && pA1 == 0x00)
	{
		pB0 = 0x01;
	}	
	else
	{
		pB0 = 0x00;
	}
	PORTB = pB0;	//Writes port B's 8 pins with 00001111

    }
    return 1;
}
