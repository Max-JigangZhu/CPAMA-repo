#include <stdio.h>

int main(void) {
    int a, b, c, d, l1, l2, s1, s2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    a > b ? ((l1 = a), (s1 = b)) : ((l1 = b), (s1 = a));
    c > d ? ((l2 = c), (s2 = d)) : ((l2 = d), (s2 = c));

    /*
    Solution 2:
    l1 = a > b ? a : b;
    l2 = c > d ? c : d;
    s1 = a + b - l1;
    s2 = c + d - l2;

    Solution 3:
    swich(a > b) {
        case 1:
            l1 = a; 
            s1 = b;
            break;
        default: 
            l1 = b;
            s1 = a;
    }
    switch(c > d) {
        case 1:
            l2 = c;
            s2 = d;
            break;
        default:
            l2 = d;
            s2 = c;
    }

    sw
    */

    printf("Largest: %d\n", l1 > l2 ? l1=2 : l2);
    printf("Smallest: %d\n", s1 < s2 ? s1 : s2);

    return 0;
}