#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    temp = b;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    } 

    while (temp > 0) {
        if (!(a % temp) && !(b % temp)) {
            printf("Greatest common divisor: %d\n", temp);
            break;
        }
        temp--;
    }

    return 0;
}