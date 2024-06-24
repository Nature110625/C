/*Wind chill factor is the felt air temperature on exposed skin due to
wind. the wind chill temperature is always lower than the air
temperature, and is calculated as per the following formula :
wch=35.74 + 0.6215t + (0.4275t - 35.75) * v^(0.16)
where t is the temperature and v is the wind velocity. Write a 
program to receive values of t and v and calculate wind chill factor (wcf).*/
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