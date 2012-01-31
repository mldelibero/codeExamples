#include<stdio.h>

int funa(void) {
    printf("\nYou selected function a\n");
}

int funb(void) {
    printf("\nYou selected function b\n");
}

int (*funPtr)(void);

int main(void) {
//    funPtr = &funa;
    funPtr = &funb;
    funPtr();
}
