#include <stdio.h>

int main(void) {
    int num, copy, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;
    while(copy) {
        digit++;
        copy /= 10;
    }
    
    printf("The number %d has %d digits\n", num, digit);

    return 0;
}