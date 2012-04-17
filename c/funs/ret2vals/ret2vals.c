// This example will show how to return multiple values in c.
//
// Note, you can only send one value to the return operator.

#include <stdio.h>
#include <math.h>

int fun(int *num) {
    int temp = *num;
    *num +=1;
    return (temp * temp);
}

int main(void) {
    int var = 2;

    printf("Variable: %i\n",var);
    printf("Variable ^2: %i\n",fun(&var));
    printf("Variable +1: %i\n",var);
}

