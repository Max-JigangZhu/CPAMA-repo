#include <stdio.h>
#define x 10
#define y 3.14

/*
The space precedes any % will display a white spcace perceding the corresponding number; 
the space after a letter will have no effect to the corresponding number.
(a) not equivalent
(b) not equivalent
(c) equivalent
(d) not equivalent
*/

int main(void) {
    printf("%d\n", x);
    printf(" %d\n", x);
    printf("%d-%d-%d\n", x, x, x);
    printf("%d -%d -%d\n", x, x, x);
    printf("%f\n", y);
    printf("%f \n", y);
    printf("%f,%f\n", y,y);
    printf("%f, %f\n", y,y);

    return 0;
}