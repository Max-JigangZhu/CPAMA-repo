#include <stdio.h>

int main(void) {
    char c[20], now;
    int i = 0;

    printf("Enter phone number: ");
    scanf("%s", c);

    now = c[i++];
    while(now) {
        switch(now) {
            case 'A': case 'B': case 'C':
                now = '2';
                break;
            case 'D': case 'E': case 'F':
                now = '3';
                break;
            case 'G': case 'H': case 'I':
                now = '4';
                break;
            case 'J': case 'K': case 'L':
                now = '5';
                break;
            case 'M': case 'N': case 'O':
                now = '6';
                break;
            case 'P': case 'R': case 'S':
                now = '7';
                break;
            case 'T': case'U': case 'V':
                now = '8';
                break;
            case 'W': case 'X': case 'Y':
                now = 9;
                break;
            default:
                break;
        }
        printf("%c", now);
        now = c[i++];
    }
    printf("\n");

    return 0;
}