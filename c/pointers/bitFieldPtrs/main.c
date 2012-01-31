#include <stdio.h>

//This example shows how to create a pointer that is a bitfield.
//
//This currently does not work. It may turn out to be a bad idea.
//The original goal was to be able to be able to control a bit
//with syntax as such:
//      cs = 1;
//      cs = 0;

typedef struct {
    unsigned bit0:1;
    unsigned bit1:1;
} port_t;

typedef struct {
    unsigned bit0:1;
    unsigned bit1:1;
} avr_port_t;

avr_port_t PORTA;
port_t *MYPORTA = &PORTA;

int main(void) {

}
