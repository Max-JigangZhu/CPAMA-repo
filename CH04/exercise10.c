/*
(a) 12      12
(b) 3       4
(c) 2.5     8.5
(d) 6       9 
*/
#include <stdio.h>

int main(void) {
    int i = 2, j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    return 0;
}