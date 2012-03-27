#include <stdio.h>
#include "varInFile.h"

int num = 8;
int ans; // answer

int main(void) {
    wr_fun(num);
    ans = r_fun();

    printf("Wrote: %i\n",num);
    printf("Read: %i\n",ans);

    return 0;
}

