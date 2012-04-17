// This example shows how to pass an array to a function
// http://stackoverflow.com/questions/1106957/pass-array-by-reference-in-c
// This example is taken directly from the previous link.
#include <stdio.h>
#define max     (10)

void reset(int *array, int size) {
    int i = 0;
    int b = 0;
    for (i = 0;i < size; i++) {
        array[i] = i;
        printf("%i",array[i]);
    }
}

int main(void) {
    int arr[max];
    reset(arr,max);
    return(0);
}
