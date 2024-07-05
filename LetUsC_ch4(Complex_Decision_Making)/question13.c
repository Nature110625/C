#include <stdio.h>
#include <math.h>

int main() {
    int a, angle;
    printf("Enter an angle (in degree): ");
    scanf("%d", &a);
    angle=a*3.14/180;
    cos(angle)*cos(angle) + sin(angle)*sin(angle) == 1 ? printf("The sum of squares of sine and cosine of this angle is 1.") : printf("The sum of squares of sine and cosine of this angle is not 1.");
}