#include <stdio.h>

/*
(a) 86 takes 6 characters (86 is the most right two characters) and 1040 takes 4 characters which is just suitable; 
    %d prints demical type in minimum amount of space.
(b) 12 means 12 characters in total; .5 means 5 digits precision; e means print in exponential form. 
    The exponential form of the numer is right aligned.
(c) .4 means 4 digits precision, %f prints float type.
(d) 6 characters after all; %g means the compiler decides to print in decimal or exponential form depends on the sie of the number;
    .2 means 2 digits presicion (after the decimal point). Since 0.997 will be rounded to 1, thre will be no only one digit after all.
*/

int main(void) {
    printf("%6d,%4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);

    return 0;
}