#include<stdio.h>
// This file show the necessary syntax for using a function pointer in a struct.
//
// I also will want to find out if it will be possible to call this function
// and have it automatically inherit values from the struct. So far nothing in
// c has indicated that this type of scope behavior is possible.

int fun_a(int a) {
    return (a+1);
}
int fun_b(int b){
    return (b-1);
}

int (*fun_ptr)(int num);

typedef struct {
    int val;
    int *ptr;
    int (*fun_ptr)(int num);
} str_t;

int main(void) {
    str_t str;
    str.val = 3;
//    fun_ptr = &fun_a;
    fun_ptr = &fun_b;

    printf("num = %i\n",str.val);
    printf("result = %i\n",fun_ptr(str.val));
}
