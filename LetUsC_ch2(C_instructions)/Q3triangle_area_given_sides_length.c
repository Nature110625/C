/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, val, area;
    printf("Enter length of three side of triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    s=(a+b+c)/2.0;
    val=s*(s-a)*(s-b)*(s-c);
    area=sqrt(val);
    printf("Area of tringle is %f", area);
}