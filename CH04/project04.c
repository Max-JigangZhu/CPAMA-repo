#include <stdio.h>

int main(void) {
    int d, oct = 0, digit = 1;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &d);
    while(d) {
        oct += d % 8 * digit;
        digit *= 10;
        d /= 8;
    }
    printf("In octal, your number is: %.5d\n", oct);


    return 0;
}