#include <stdio.h>

int main(void) {
    int month1, month2, day1, day2, year1, year2, 
        time1, time2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    time1 = year1 * 10000 + month1 * 100 + day1;
    time2 = year2 * 10000 + month2 * 100 + day2;


    if (time1 < time2) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            month1, day1, year1, month2, day2, year2);
    } else {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            month2, day2, year2, month1, day1, year1);
    }

    return 0;
}