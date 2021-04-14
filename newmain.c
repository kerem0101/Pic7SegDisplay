/*
 * File:   newmain.c
 * Author: kerem
 *
 * Created on 07 Nisan 2021 Çar?amba, 16:08
 */

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define _XTAL_FREQ 4000000

int i, array[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x07, 0x7F, 0x6F};

void main(void) {

    TRISB = 0;
    PORTB = 0;
    TRISA = 0;
    PORTA = 0x01;

    while (1) {

        for (i = 0; i < 10; i++) {
            PORTB = array[i];
            __delay_ms(500);
        }
    }

    return;
}
