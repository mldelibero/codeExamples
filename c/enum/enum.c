#include <stdio.h>

typedef enum status_enum {
    good = 0,
    bad = 1,
    indet = 2
} status_t;

typedef enum state_enum {
    idle,
    stopped,
    going,
    pwrDwn
} state_t;


status_t status;
state_t state;

int main(void) {
    printf("good = %i\n",good);
    printf("bad = %i\n",bad);
    printf("indet = %i\n\n",indet);
    
    printf("idle = %i\n",idle);
    printf("stopped = %i\n",stopped);
    printf("going = %i\n",going);
    printf("pwdDwn = %i\n",pwrDwn);

    return(0);
}
