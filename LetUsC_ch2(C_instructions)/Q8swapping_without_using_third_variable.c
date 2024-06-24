/*Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number at location a: ");
    scanf("%d", &a);
    printf("Enter a number at location b: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("New number at location a = %d \nNew number at location b = %d", a, b);
    return 0;
}