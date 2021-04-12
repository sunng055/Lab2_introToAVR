/*	Author: sng055
 *  Partner(s) Name: Sunny Ng
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #2
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

unsigned char tempA = 0x00;
unsigned char tempAA = 0x00;
    /* Insert your solution below */
    while (1) {
	tempA = PINA & 0x0F;
	tempAA = PINA & 0xF0;
	if(tempA == 0x00) {
	PORTC = 0x40;
}		
	if((tempA == 0x01) || (tempA == 0x02)) {
	PORTC = 0x60;
}
	if((tempA == 0x03) || (tempA == 0x04)) {
	PORTC = 0x70;
}
	if((tempA == 0x05) || (tempA == 0x06)) {
	PORTC = 0x38;
}
	if((tempA == 0x08) || (tempA == 0x07) || (tempA == 0x09)) {
	PORTC = 0x3C;
}
	if((tempA == 0x0A) || (tempA == 0x0B) || (tempA == 0x0C)) {
	PORTC = 0x3E;
}
	if((tempA == 0x0D) || (tempA == 0x0E) ) {
	PORTC = 0x3F;
}
	if((tempAA == 0x10) && (tempAA == 0x20) && !(tempAA == 0x40)) {
	PORTC = PORTC | 0x80;
}	
    }
    return 1;
}
