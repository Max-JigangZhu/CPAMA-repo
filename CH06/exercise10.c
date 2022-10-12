#include <stdio.h>

int main(void) {
   int i = 0;   
   
    for(; i < 10; i++) {
        if (i == 5) {
            goto HERE; /* continue; */
        }
        printf("%d ", i);
HERE: ;
    }

    return 0;
}