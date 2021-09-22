/*
 * File:   newavr-main.c
 * Author: rlmmx
 *
 * Created on 3 de septiembre de 2021, 05:15 PM
 */

#define   F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) 
{
    DDRB = 0b00000001;
    while (1) 
    {
        PORTB = 0x01;
        _delay_ms(250);
        PORTB = 0;
        _delay_ms(250);
    }
}
