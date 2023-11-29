#include <stdio.h>
#include <math.h>

int main() {
    float angle;
    printf("Enter an angle of a triangle: ");
    scanf("%f", &angle);
    angle=angle*3.14/180;
    printf("sin(%f) = %f \ncos(%f) = %f \ntan(%f) = %f \ncosec(%f) = %f \nsec(%f) = %f \ncot(%f) = %f", angle, sin(angle), angle, cos(angle), angle, tan(angle), angle, 1/sin(angle), angle, 1/cos(angle), angle, 1/tan(angle));
    return 0;
}