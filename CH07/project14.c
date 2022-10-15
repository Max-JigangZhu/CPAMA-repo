#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001

int main(void) {
    long double x, y, new_y = 1;

    printf("Enter a positive number: ");
    scanf("%Lf", &x);

    do {
        y = new_y;
        new_y = (x / y + y) / 2;
    } while (fabs(y - new_y) >= EPSILON * y);

    printf("Square root: %.5Lf\n", new_y);

    return 0;
}