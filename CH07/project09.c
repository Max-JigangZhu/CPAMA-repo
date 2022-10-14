#include <stdio.h>

int main(void) {
    int h, min, total;
    char c;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &min, &c);

    total = h * 60 + min;
    if (c == 'P' || c == 'p') {
        if (h < 12) {
            total += 12 * 60;
        }
    } else if (h == 12) {
        total -= h * 60;
    }

    printf("Equivalent 24-hour time: %d:%.2d\n", total / 60, total % 60);

    return 0;
}