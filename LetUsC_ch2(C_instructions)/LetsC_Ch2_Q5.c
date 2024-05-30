#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, g1, g2, D;
    printf("Enter latitude and longitude of place 1 (in degrees): ");
    scanf("%f%f", &l1, &g1);
    printf("Enter latitude and longitude of place 2 (in degrees): ");
    scanf("%f%f", &l2, &g2);
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    g2=g2*3.14/180;
    D=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between them in nautical miles = %f", D);
}