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
	DDRA = 0x00; PORTA = 0xFF; //input
	DDRB = 0x00; PORTB = 0xFF; //input
	DDRC = 0xFF; PORTC = 0x00; //output


	//unsigned char pA0 = 0x00;
	//unsigned char pA1 = 0x00;
	//unsigned char pB0 = 0x00;

	unsigned char curBit = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
//	unsigned char tmp2 = 0x00;
	unsigned char cnt = 0x00;	
    /* Insert your solution below */
    while (1) {
	curBit = 0x01;
	cnt = 0x00;
	while(curBit != 0x00)
	{
		tmpA = PINA & curBit;
		tmpB = PINA & curBit;
		if(tmpA > 0) {cnt++;}
		if(tmpB > 0) {cnt++;}
		curBit = curBit << 1;
		
	}
	PORTC = cnt;
    return 1;
	}
}
