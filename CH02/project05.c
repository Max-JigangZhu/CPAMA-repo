#include <stdio.h>

int main(void){
    int x;
    printf("Please enter an integer value: ");
    scanf("%d", &x);
    x = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    printf("The polynomial result: %d\n", x);
    return 0;
}