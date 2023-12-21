#include <stdio.h>
#include <math.h>
void sine(float, float *);
float fact(float a);
float main() {
    float num;
    float s;
    printf("Enter an angle in radian: ");
    scanf("%f", &num);
    sine(num, &s);
    printf("Sine(%f) = %f", num, s);
    return 0;
}
void sine(float a, float *x){
    for (float i=0, n=1; i<10; i++, n+=2){
        *x+= pow(-1, i)*pow(a,n)/fact(n);
    }
}
float fact(float a){
    float f=1;
    for(float i=1; i<=a; i++){
        f*=i;
    }
    return f;
}