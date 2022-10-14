#include <stdio.h>
#include <string.h>

int main(void) {
    char c[100];
    float sum = 0.00f, index = 0.00f;
    
    printf("Enter a sentence: ");
    
    do {
        scanf("%s", c);
        sum += strlen(c);
        index++;
    } while (getchar() != '\n');

    printf("Average word length: %.1f\n", sum/index);

    return 0;
}