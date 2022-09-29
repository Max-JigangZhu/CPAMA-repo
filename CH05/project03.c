#include <stdio.h>

int main(void) {
    float commission, price, value;
    int num;

    // (a)
    printf("Enter number of shares: ");
    scanf("%d", &num);
    printf("Enter price per share: ");
    scanf("%f", &price);
    
    // (b)
    if (num < 2000) {
        commission = 33.00f + .03f * num;
    } else {
        commission = 33.00f + .02f * num;
    }

    printf("Rival's commision: $%.2f\n", commission);

    value = num * price;
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f) 
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    
    if (commission < 39.00f)
        commission = 39.00f;

    printf("Original commission: $%.2f\n", commission);

    return 0;
}