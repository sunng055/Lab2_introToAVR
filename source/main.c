/*	Author: sng055
 *  Partner(s) Name: Sunny Ng
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
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
DDRB = 0x00;
DDRC = 0xFF;
PORTA = 0xFF;
PORTB = 0xFF;
PORTC = 0x00;
unsigned char count1s = 0x00;
unsigned char tempA0 = 0x00;
unsigned char tempA1 = 0x00;
unsigned char tempA2 = 0x00;
unsigned char tempA3 = 0x00;
unsigned char tempA4 = 0x00;
unsigned char tempA5 = 0x00;
unsigned char tempA6 = 0x00;
unsigned char tempA7 = 0x00;
unsigned char tempB0 = 0x00;
unsigned char tempB1 = 0x00;
unsigned char tempB2 = 0x00;
unsigned char tempB3 = 0x00;
unsigned char tempB4 = 0x00;
unsigned char tempB5 = 0x00;
unsigned char tempB6 = 0x00;
unsigned char tempB7 = 0x00;
    /* Insert your solution below */
    while (1) {
	tempA0 = PINA & 0x01;
	tempA1 = PINA & 0x02;
	tempA2 = PINA & 0x04;
	tempA3 = PINA & 0x08;
	tempA4 = PINA & 0x10;
	tempA5 = PINA & 0x20;
	tempA6 = PINA & 0x40;
	tempA7 = PINA & 0x80;
	tempB0 = PINB & 0x01;
	tempB1 = PINB & 0x02;
	tempB2 = PINB & 0x04;
	tempB3 = PINB & 0x08;
	tempB4 = PINB & 0x10;
	tempB5 = PINB & 0x20;
	tempB6 = PINB & 0x40;
	tempB7 = PINB & 0x80;	
	if(tempA0 == 0x01) {
	count1s = count1s + 1;
}
	if(tempA1 == 0x02) {
	count1s = count1s + 1;
}
	if(tempA2 == 0x04) {
	count1s = count1s + 1;
}
	if(tempA3 == 0x08) {
	count1s = count1s + 1;
}
	if(tempA4 == 0x10) {
	count1s = count1s + 1;
}
	if(tempA5 == 0x20) {
	count1s = count1s + 1;
}
	if(tempA6 == 0x40) {
	count1s = count1s + 1;
}
	if(tempA7 == 0x80) {
	count1s = count1s + 1;
}
	if(tempB0 == 0x01) {
	count1s = count1s + 1;
}
	if(tempB1 == 0x02) {
	count1s = count1s + 1;
}
	if(tempB2 == 0x04) {
	count1s = count1s + 1;
}
	if(tempB3 == 0x08) {
	count1s = count1s + 1;
}
	if(tempB4 == 0x10) {
	count1s = count1s + 1;
}
	if(tempB5 == 0x20) {
	count1s = count1s + 1;
}
	if(tempB6 == 0x40) {
	count1s = count1s + 1;
}
	if(tempB7 == 0x80) {
	count1s = count1s + 1;
}	
	PORTC = count1s;
	count1s = 0;
    }
    return 1;
}
