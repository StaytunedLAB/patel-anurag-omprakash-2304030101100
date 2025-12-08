#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) return 0;
    if (is_leap_year(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    return 0;
}