#include <stdio.h>

int main(void) {
    int m, d, i = 0, now = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &m);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &d);

    while (--d > 0) {
        printf("   ");
        i++;
    }
    while (now++ < m) {
        printf("%2d ", now);
        if (++i == 7) {
            printf("\n");
            i = 0;
        }
    }
    printf("\n");

    return 0;
}