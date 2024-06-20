#include <stdio.h> 
#include <stdbool.h>
/**
 * if (year is not divisible by 4)
 * it is a common year
 * else if (year is not divisible by 100)
 * it is a leap year
 * else if (year is not divisible by 400)
 * it is a common year
 * else
 * it is a leap year
 */

bool is_leap_year(int year);

int main() {
    int year;
    while (year != 0) {
        printf("Enter a year(0 to quit): ");
        scanf("%d", &year);
        if (is_leap_year(year)==true) {
            printf("It is a leap year\n");
        }
        else {
            printf("It is not a leap year\n");
        }
    }

    
    return 0;
}

bool is_leap_year(int year) {
    if (year%4 != 0 || year%400 != 0) {
        return false;
    }
    else if (year%100 != 0) {
        return true;
    }
    else {
        return true;
    }
}