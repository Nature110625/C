/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, 0)*/
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, rho, rhod;
    printf("Enter cartesion co-ordinate (x,y) of a point: ");
    scanf("%f%f", &x, &y);
    r=sqrt(x*x+y*y);
    rho=atan(y/x);
    rhod=rho*180/3.14;
    printf("The polar co-ordinate of that point is: (%f,%f)", r, rhod);
    return 0;
}