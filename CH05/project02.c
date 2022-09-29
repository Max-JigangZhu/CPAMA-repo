#include <stdio.h>
#include <string.h>

int main(void) {
    int hour, min;
    char time[5] = "AM";
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour > 12) {
        hour -= 12;
        strcpy(time, "PM");
    }
    
    printf("Equivalent 12-hour time: %d:%d %s\n", hour, min, time);

    return 0;
}