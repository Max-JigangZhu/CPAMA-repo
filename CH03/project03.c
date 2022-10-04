#include <stdio.h>

int main(void) {
    int pre, id, code, num, digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &pre, &id, &code, &num, &digit);
    printf("GSI prefix: %d\n", pre);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", num);
    printf("Check digit: %d\n", digit);

    return 0;
}