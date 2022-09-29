#include <stdio.h>

int main(void) {
    int age;
    _Bool teenager;

    printf("Enter an age: ");
    scanf("%d", &age);

    teenager = age >= 13 && age <= 19;
    printf("%d\n", teenager);

    return 0;
}