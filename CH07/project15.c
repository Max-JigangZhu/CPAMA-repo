#include <stdio.h>

int main(void) {
    short s, sfa = 1;
    int i, ifa = 1;
    long l, lfa = 1;
    /*long long ll, llfa = 1;*/
    float f, ffa = 1;
    double d, dfa = 1;
    long double ld, ldfa = 1;

    printf("Enter a positive integer: ");
    scanf("%hd %d %ld %f %lf %Lf", &s, &i, &l, &f, &d, &ld);

    while(i) {
        sfa *= s--;
        ifa *= i--;
        lfa *= l--;
        /*llfa *= ll--;*/
        ffa *= f--;
        dfa *= d--;
        ldfa *= ld--;
    }

    printf("Factorial of 6: %hd %d %ld %f %f %Lf\n", 
        sfa, ifa, lfa, ffa, dfa, ldfa);

    return 0;
}

/*
(a) 7
(b) 12
(c) 20
(d) 34
(e) 170
(f) 1754
*/