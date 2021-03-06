#include <stdio.h>

// This example shows how to use structs inside of unions.

typedef union {
    int num;
    int num2;

    struct {
        unsigned bit0:1;
        unsigned bit12:2;
        unsigned res:5;
    }str;
}un_t;
un_t un;

int main(void) {
    un.num = 0x6D;
    printf("%d\n",un.num);
    printf("%d\n",un.num2);
    printf("%d\n",un.str.bit0);
    printf("%d\n",un.str.bit12);
    printf("%d\n",un.str.res);
}
