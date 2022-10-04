#include <stdio.h>
#define tax 0.05

int main(void) {
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    amount += amount*tax;
    printf("With tax added: $%0.2f\n", amount);
}