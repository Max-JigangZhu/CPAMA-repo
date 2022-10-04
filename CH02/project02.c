#include <stdio.h>
#define pi 3.14
#define r 10

int main(void) {
    float v;

    v = 4.0f/3.0f*pi*r*r*r;
    
    printf("The volume of the sphere is %0.2fcm\n", v);

    return 0;
}