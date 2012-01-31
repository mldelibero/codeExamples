#include <stdio.h>

// This example show how to use pointers and shows an example of the different
// methods and syntaxes that can be used. 
//
// It is a growing list.
// More commenting is necessary on the examples.
// I would also like to expand the list into examples of bad ways to use pointers.

int *ptr; // This will be the pointer variable.
int a;
int b;
int c;

int main(void) {
    // A pointer "points" to a memory location.
    a = 4;
    ptr = &a; // point to the memory location displayed by a.
    printf("Var a = %d\n",a);
    printf("ptr = &a\n");
    printf("*ptr = %i\n\n",*ptr); // * in known as the "dereferencing operator"
                           // Think "get value" when you see this.
                           // We are getting the value at the memory loction pointed at
                           // by ptr. In this case, it is the value of a.
    
    // We can do math on a ptr
    b = *ptr + 1;
    printf("*ptr + 1 = %d\n",b);

    ++*ptr;
    printf("++*ptr = %d\n",*ptr);
    
    (*ptr)++;
    printf("(*ptr)++ = %d\n",*ptr);

    *ptr++;
    printf("*ptr++ = %d\n",*ptr);

}
