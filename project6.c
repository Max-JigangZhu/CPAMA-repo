#include <stdio.h>

int main(void){
    int x;
    printf("Please enter an integer value: ");
    scanf("%d", &x);
    x = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("The polynomial result: %d\n", x);
    return 0;
}