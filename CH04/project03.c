#include <stdio.h>

int main(void) {
    int l, m, r;
    printf("Enter a positive three-digit number: ");
    scanf("%1d%1d%1d", &l, &m, &r);
  
    printf("The reversal is: %d%d%d\n", r, m, l);

    return 0;
}