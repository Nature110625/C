#include <stdio.h>

void ly_check(int y);
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    ly_check(year);
    return 0;
}
void ly_check(int y){
    if(y%400==0 || (y%100!=0 && y%4==0))
        printf("The year %d is a leap year.", y);
    else
        printf("The year %d is not a leap year.", y);
}