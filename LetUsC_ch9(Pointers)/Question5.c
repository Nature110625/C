#include <stdio.h>
#include <math.h>
void areat(float, float, float, float *);
int main() {
    float a, b, c, ar=0;
    printf("Enter lengths of sides of triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a+b>c || b+c>a || a+c>b){
        areat(a, b, c, &ar);
        printf("\nArea of triangle = %f.", ar);
    }
    else 
        printf("\nInvalid triangle.\n");
    return 0;
}
void areat(float a, float b, float c, float *art) {
    float s, m;
    s=(a+b+c)/2;
    *art = sqrt(s*(s-a)*(s-b)*(s-c));
}