#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num<0)
        printf("Absolute value of number is %d", -num);
    else
        printf("Absolute value of the number is %d", num);
}