#include <stdio.h>

int main(void) {
    int n = 0, m;

    printf("Enter an integer: ");
    scanf("%d", &m);

    for (; m > 0; n++, m /= 2) {
        ;
    }
    
    printf("%d %d\n", n, m);

    return 0;
}