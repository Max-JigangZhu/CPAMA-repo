#include <stdio.h>

int main(void) {
    int x;
    printf("Enter a dollar amount: ");
    scanf("%d", &x);
    printf("$20 bills: %d\n", x/20);
    x = x%20;
    printf("$10 bills: %d\n", x/10);
    x = x%10;
    printf(" $5 bills: %d\n", x/5);
    printf(" $1 bills: %d\n", x%5);
    return 0;
}