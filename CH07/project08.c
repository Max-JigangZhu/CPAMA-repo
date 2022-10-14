#include <stdio.h>

int main(void) {
    int h1, min1, total, h2, min2;
    char c;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h1, &min1, &c);

    total = h1 * 60 + min1;
    if (c == 'P' || c == 'p') {
        if (h1 < 12) {
            total += 12 * 60;
        }
    } else if (h1 == 12) {
        total -= h1 * 60;
    }
    

    if (total >= 1305) {
        h1 = 21;
        min1 = 45;
        h2 = 23;
        min2 = 58;
    } else if (total >= 1140) {
        (total - 1140) > (1305 - total) ? 
            ((h1 = 21), (min1 = 45), (h2 = 23), (min2 = 58)) : 
            ((h1 = 19), (min1 = 0), (h2 = 21),(min2 = 20));
    } else if (total >= 945) {
        (total - 945) > (1140 - total) ?
            ((h1 = 19), (min1 = 0), (h2 = 21),(min2 = 20)) :
            ((h1 = 15), (min1 = 45), (h2 = 17), (min2 = 55));
    } else if (total >= 840) {
        (total - 840) > (945 - total) ?
            ((h1 = 15), (min1 = 45), (h2 = 17), (min2 = 55)) :
            ((h1 = 14), (min1 = 0), (h2 = 16), (min2 = 8));
    } else if (total >= 767) {
        (total - 767) > (840 - total) ?
            ((h1 = 14), (min1 = 0), (h2 = 16), (min2 = 8)) :
            ((h1 = 12), (min1 = 47), (h2 = 15), (min2 = 0));
    } else if (total >= 679) {
        (total - 679) > (767 - total) ?
            ((h1 = 12), (min1 = 47), (h2 = 15), (min2 = 0)) :
            ((h1 = 11), (min1 = 19), (h2 = 13), (min2 = 31));
    } else if (total >= 583) {
        (total - 583) > (679 - total) ?
            ((h1 = 11), (min1 = 19), (h2 = 13), (min2 = 31)) :
            ((h1 = 9), (min1 = 43), (h2 = 11), (min2 = 52));
    } else if (total > 480) {
        (total - 480) > (583 - total) ?
            ((h1 = 9), (min1 = 43), (h2 = 11), (min2 = 52)) :
            ((h1 = 8), (min1 = 0), (h2 = 10), (min2 = 16));
    } else {
        (480 - total) > (total + 135) ?
            ((h1 = 21), (min1 = 45), (h2 = 23), (min2 = 58)) :
            ((h1 = 8), (min1 = 0), (h2 = 10), (min2 = 16));
    }
    
    printf("Closest departure time is ");
    if (h1 >= 12) {
        if (h1 > 12) {
            h1 -= 12;
        }
        printf("%d:%.2d p.m., arriving at ", h1, min1);
    } else {
        printf("%d:%.2d a.m., arriving at ", h1, min1);
    }
    if (h2 > 12) {
        h2 -= 12;
        printf("%d:%.2d p.m.\n", h2, min2);
    } else {
        printf("%d:%.2d a.m.\n", h2, min2);
    }

    return 0;
}