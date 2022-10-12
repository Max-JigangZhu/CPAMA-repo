#include <stdio.h>

int main(void) {
    int d, l, r;
    printf("Enter a three-digit number: ");
    scanf("%d", &d);
    l = d / 100;
    r = d % 10;
    d -= l * 100 + r;
    d += r * 100 + l;
    printf("The reversal is: %.3d\n", d);

    return 0;
}