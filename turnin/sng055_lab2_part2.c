/*	Author: sng055
 *  Partner(s) Name: Sunny Ng
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #2
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
DDRA = 0x00;
DDRC = 0xFF;
PORTA = 0xFF;
PORTC = 0x00;
unsigned char cntavail = 4;
unsigned char tempA0 = 0x00;
unsigned char tempA1 = 0x00;
unsigned char tempA2 = 0x00;
unsigned char tempA3 = 0x00;

    /* Insert your solution below */
    while (1) {
	tempA0 = PINA & 0x01;
	tempA1 = PINA & 0x02;
	tempA2 = PINA & 0x04;
	tempA3 = PINA & 0x08;
	
	if(tempA0 == 0x01) {
	cntavail = cntavail - 1;
}
	if(tempA1 == 0x02) {
	cntavail = cntavail - 1;
}
	if(tempA2 == 0x04) {
	cntavail = cntavail - 1;
}
	if(tempA3 == 0x08) {
	cntavail = cntavail - 1;
}
	if(cntavail == 0) {
	cntavail = 0x80;
}
	PORTC = cntavail;
	cntavail = 4;
    }
    return 1;
}
