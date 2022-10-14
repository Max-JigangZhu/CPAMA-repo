#include <stdio.h>

int main(void) {
    int i = 1, n = 0;

    printf("This program prints a table of squares.\n");

    while(++n) {
        printf("%10d%10d\n", i, i * i);
        i++;
        
        if (n == 24) {
            printf("Press Enter to continue ...");
            getchar();
            n = 0;
        }
    }

    return 0;
}