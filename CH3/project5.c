#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f, g, h, i, j ,k, l, m, n, o, p;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("%2d%3d%3d%3d\n", a,b,c,d);
    printf("%2d%3d%3d%3d\n", e,f,g,h);
    printf("%2d%3d%3d%3d\n", i,j,k,l);
    printf("%2d%3d%3d%3d\n", m,n,o,p);
    return 0;

}