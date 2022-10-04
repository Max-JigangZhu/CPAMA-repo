#include <stdio.h>

int main(void) {
    int number, mm, dd, yyyy;
    float price;
    printf("Enter item number: ");
    scanf("%d", &number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item            Unit            Purchase\n");
    printf("                Price           Date\n");
    printf("%-16d$%7.2f%10.2d/%.2d/%d\n", number, price, mm, dd, yyyy);
    return 0;
}