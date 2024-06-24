/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and area and circumference of the circle.*/
#include <stdio.h>
int main(){
    float l, b, r, area_c, area_r, circumference, perimeter;
    printf("Enter length and breadth of a rectangle and radius of a circle: ");
    scanf("%f%f%f", &l, &b, &r);
    area_c=3.14*r*r;
    area_r=l*b;
    circumference=2*3.14*r;
    perimeter=2*(l+b);
    printf("Area of rectangle = %f\nperimeter of rectangle = %f\nArea of circle = %f\nCircumference of circle = %f", area_r, perimeter, area_c, circumference);
}