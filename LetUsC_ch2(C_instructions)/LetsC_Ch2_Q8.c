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