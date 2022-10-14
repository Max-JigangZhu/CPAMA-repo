#include <stdio.h>

int main(void) {
    printf("%lu %lu %lu %lu %lu %lu\n", sizeof(int), sizeof(short), 
        sizeof(long), sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}