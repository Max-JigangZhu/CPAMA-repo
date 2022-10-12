#include <stdio.h>

int main(void){
    int num, den, d;
    int gcd(int, int);

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    d = gcd(num, den);

    num /= d;
    den /= d;
    printf("In lowest terms: %d/%d\n", num, den);

    return 0;
}

int gcd(int a, int b) {
    int temp;

    temp = b;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    } 

    while (temp > 0) {
        if (!(a % temp) && !(b % temp)) {
            break;
        }
        temp--;
    }

    return temp;
}