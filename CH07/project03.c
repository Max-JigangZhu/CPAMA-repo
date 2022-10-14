#include <stdio.h>

int main(void) {
    long double n, sum = 0;

    printf("This program sums a series of floating-points.\n");
    printf("Enter floating-points (0.000000 to terminate): ");

    scanf("%Lf", &n);
    while(n != 0) {
        sum += n;
        scanf("%Lf", &n);
    }
    printf("the sum is: %Lf\n", sum);

    return 0;
}