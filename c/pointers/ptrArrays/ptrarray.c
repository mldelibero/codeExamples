#include <stdio.h>

// This example shows how to use an array of pointers.

char num0 = 0;
char num1 = 1;
char num2 = 2;

char *ptrArray[3];

int main(void) {
   ptrArray[0] = &num0;
   ptrArray[1] = &num1;
   ptrArray[2] = &num2;
   
  printf("ptr0:%d\n",*ptrArray[0]); 
  num0 = 4;
  printf("ptr0:%d\n",*ptrArray[0]); 
}

