#include <stdio.h>

int main(void) {
    int i = 2, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i * i <= n) {
        printf("%d\n", i * i);
        i++;
    }

    return 0;
}