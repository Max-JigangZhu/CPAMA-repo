#include <stdio.h>
# define x 10.7579

int main(void) {
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);

    return 0;
}