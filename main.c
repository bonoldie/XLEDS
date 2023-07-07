/*
 * File:   main.c
 * Author: enrico
 *
 * Created on June 4, 2023, 5:12 PM
 */

#include "configbits.h"

void main(void) {
    TRISA = 0b00000000;
    PORTA = 0b01010101;
    
    while(1==1){
        __delay_ms(500);
        PORTA = ~PORTA; 
    }
    
    return;
}
