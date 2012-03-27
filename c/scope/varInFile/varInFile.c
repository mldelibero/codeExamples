#include <stdio.h>
#include "varInFile.h"

int var1 = 1;

void wr_fun(int newVar) {
    var1 = newVar;
}

int r_fun(void) {
    return var1;
}
