/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle.*/
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter length of three sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
        printf("The triangle is right angle triangle.\n");
    if (a==b && b==c)
        printf("The triangle is an equilateral triangle.");
    else if (a==b || b==c || a==c)
        printf("The triangle is isosceles triangle.");
    else 
        printf("The triangle is scalene triangle.");
    return 0;
}