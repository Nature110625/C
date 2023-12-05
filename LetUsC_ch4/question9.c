#include <stdio.h>

int main() {
    float h, w, bmi;
    printf("Enter height in meters and weight in kg : ");
    scanf("%f%f", &h, &w);
    bmi=w/(h*h);
    if(bmi<=15)
        printf("BMI Category = Starvation");
    else if(bmi<=17.5)
        printf("BMI Category = Anorexic");
    else if(bmi<=18.5)
        printf("BMI Category = Underweight");
    else if(bmi<=24.9)
        printf("BMI Category = Ideal");
    else if(bmi<=25.9)
        printf("BMI Category = Overweight");
    else if(bmi<=30.9)
        printf("BMI Category = Obese");
    else
        printf("BMI Category = Morbidly Obese");
    return 0;
}