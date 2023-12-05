#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    (year%400==0)||(year%100!=0 && year%4==0) ? printf("Leap Year.") : printf("Not a leap year.");
    return 0;
}