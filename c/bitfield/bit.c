#include <stdio.h>

struct bitfield {
    unsigned bit0:1;
    unsigned bit1:1;
    unsigned bit2:1;
    unsigned bit3:1;
    unsigned bit4:1;
    unsigned bit5:1;
    unsigned bit6:1;
    unsigned bit7:1;
} bitfield;

int main(void) {
    bitfield.bit0 = 0;
    bitfield.bit1 = 1;
    bitfield.bit2 = 1;
    bitfield.bit3 = 0;
    bitfield.bit4 = 0;
    bitfield.bit5 = 0;
    bitfield.bit6 = 0;
    bitfield.bit7 = 0;

    printf("bitfield: %i",bitfield);
    return 0;
}
