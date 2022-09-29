#include <stdio.h>
#define LESS -1

int main(void) {
    int i, j;
    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);
    printf("%d\n", i < j ? LESS:(i > j || i != j));
    return 0;
}