#include <stdio.h>
int main() {
    int val, d1, d2, d3, d4, d5;
    printf("Enter 5-digit number: ");
    scanf("%d", &val);
    d1=val%10;
    d2=val/10%10;
    d3=val/100%10;
    d4=val/1000%10;
    d5=val/10000%10;
    printf("Sum of digits = %d", d1+d2+d3+d4+d5);
}