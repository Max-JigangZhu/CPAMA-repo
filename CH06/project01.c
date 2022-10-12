#include <stdio.h>

int main(void) {
    float f, m = 0.00f;

    do {
        printf("Enter a number: ");
        scanf("%f", &f);
        if (f > m) m = f;
    } while (f > 0);

    printf("The largest number entered was %.2f\n", m);

    return 0;
}