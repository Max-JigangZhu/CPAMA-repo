#include <stdio.h>
#define pi 3.14

int main(void) {
    float r, v;
    printf("Enter the radius of the sphere (in centimeters): ");
    scanf("%f", &r);
    v = 4.0f/3.0f*pi*r*r*r;
    printf("Enter a radius: %0.2f\n", r);
    printf("The volume of the sphere is %0.2fcm\n", v);
    return 0;
}

/*
#include and #define are directives
printf, scanf, v = ..., and return are statements
*/