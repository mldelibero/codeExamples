#include <stdio.h>

// This example shows how to use an array of pointers.

#define ARRAY_LEN 3

char array[ARRAY_LEN];
char *ptr = &array[0];

int main(void) {
    array[0] = 2;
    array[1] = 3;
    array[2] = 4;
    

    int i = 0;
    for (i = 0; i < ARRAY_LEN; i++) {
        printf("ptr0:%d\n",*ptr); 
        ptr += 1;
    }
    return(0);
}

