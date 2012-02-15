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


enum val {
    first,
    second,
    third
};


status_t status;
state_t state;

int main(void) {
    
    printf("good = %i\n",good);
    printf("bad = %i\n",bad);
    printf("indet = %i\n\n",indet);
    
    printf("idle = %i\n",idle);
    printf("stopped = %i\n",stopped);
    printf("going = %i\n",going);
    printf("pwdDwn = %i\n\n",pwrDwn);

    printf("first = %i\n",first);
    printf("second = %i\n",second);
    printf("third = %i\n",third);

    int cur = 0; // 0 == stopped
    if (cur == 0) { // if stopped
        printf("Stopped\n");
    }

    int current = stopped;
    
    if (current == stopped) {
        printf("Stopped\n");
    }
    
    return(0);
}
