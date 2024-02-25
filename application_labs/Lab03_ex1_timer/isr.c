#include <xc.h>
#include "config.h"

void __interrupt() isr(void) {
    if (PIR0bits.TMR0IF == 1) { // Check Timer0 interrupt flag
        PIR0bits.TMR0IF = 0; // Clear Timer0 interrupt flag
        PORTAbits.RA0 = ~PORTAbits.RA0; // Toggle RA0
        PORTAbits.RA1 = ~PORTAbits.RA1; // Toggle RA1
    }
}