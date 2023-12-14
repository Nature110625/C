#include <stdio.h>

float power(float x, int y);

int main(){
    float a, num;
    int b;
    printf("Enter a number and the power (a natural number) of number: ");
    scanf("%f%d", &a, &b);
    num = power(a, b);
    printf("%f raised to %d = %f", a, b, num);
    return 0;
}

float power(float x, int y){
    float pow = x;
    for(int i=1; i<y; i++)
        pow*=pow;
    return pow;
}