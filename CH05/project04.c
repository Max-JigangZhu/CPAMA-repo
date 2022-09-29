#include <stdio.h>

int main(void) {
    float knot;
    
    printf("Enter wind speed (in knots): ");
    scanf("%f", &knot);

    if (knot < 1.00f) {
        printf("Calm\n");
    } else if (knot < 4.00f) {
        printf("Light air\n");
    } else if (knot < 28.00f) {
        printf("Breeze\n");
    } else if (knot < 48.00f) {
        printf("Gale\n");
    } else if (knot < 64.00f) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
}