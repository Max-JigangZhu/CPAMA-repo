#include <stdio.h>

int main(void) {
    float ep, temp, sum = 1.00f;
    int i = 1;
    float inv_factoria(int);

    printf("Enter an epsilon: ");
    scanf("%f", &ep);

    temp = inv_factoria(i);
    while (temp >= ep) {
        sum += temp;
        temp = inv_factoria(++i);
    }

    printf("The approximated e is: %f\n", sum);

    return 0;
}

float inv_factoria(int n) {
    float prod = 1.00f;

    while(n > 1) {
        prod *= n--;
    }

    return 1/prod;
}