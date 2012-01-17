#include<stdio.h>

// This example shows how to bit shift a 16 bit number to obtain the 8msb's

int num = 0x0359;

int main(void) {
    printf("The num is: %i\n",num);
    int num2 = num >> 8;
    printf("bit shifted 8->: %i\n",num2);
    int num3 = num >> 6;
    printf("bit shifted 6->: %i\n",num3);
}
