#include <stdio.h>

int main(void) {
    int age;

    printf("Enter an age: ");
    scanf("%d", &age);

    age >= 13 && age <= 19 ? printf("true\n") : printf("false\n");

    return 0;
}