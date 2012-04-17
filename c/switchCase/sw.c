#include<stdio.h>

//This example shows how to use the basic form of a switch case.

typedef enum state_enum {
    error,
    start,
    middle,
    end
} state_t;

state_t state;

int main(void) {
    state = end;

    switch (state) {
        case error:
            printf("error state");
            break;
        case start:
            printf("start state");
            break;
        case middle:
            printf("middle state");
            break;
        case end:
            printf("end state");
            break;
        default:
            break;
    }
}


    

