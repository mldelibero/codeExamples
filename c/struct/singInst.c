#include <stdio.h>

int main(void) {
    struct stru {
        int val1;
        int val2;
    }stru;

    struct stru str;

    str.val1  = 1;
    str.val2 = 0;

    printf("val1: %i \n",str.val1);
    printf("val2: %i ",str.val2);
}

