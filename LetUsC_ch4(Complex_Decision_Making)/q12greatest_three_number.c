/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.*/
#include <stdio.h>

int main() {
    int a, b, c, large;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    large=a>b? (a>c? a:c) : (b>c? b:c);
    printf("%d is the greatest of given numbers.", large);
    return 0;
}