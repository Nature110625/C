#include <stdio.h>
#include <math.h>

int main() {
    float temp, vel, wcf;
    printf("Enter temperature and velocity of the wind: ");
    scanf("%f%f", &temp, &vel);
    wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel, 0.16);
    printf("The wind chill factor = %f", wcf);
    return 0;
}