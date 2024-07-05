#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three angles of the triangle (in degrees): ");
    scanf("%d%d%d", &a, &b, &c);
    if (a+b+c==180)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
}