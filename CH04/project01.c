#include <stdio.h>

int main(void) {
    int d, l, r;
    printf("Enter a two-digit number: ");
    scanf("%d", &d);
    l = d / 10;
    r = d % 10;
    d = r * 10 + l;
    printf("The reversal is: %.2d\n", d);

    return 0;
}