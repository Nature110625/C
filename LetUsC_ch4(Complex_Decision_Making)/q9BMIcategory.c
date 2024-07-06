/*The Body Mass Index (BMI) is defined as ratio of the weight of a 
person (in kilograms) to the square of the height (in meters). Write a 
program that receives weight and height, calculates the BMI, and 
reports the BMI category as per the following table: 
 |  BMI Category    | BMI           |
 |------------------|---------------|
 | Starvation       | <15           |
 | Anorexic         | 15.1 to 17.5  |
 | Underweight      | 17.6 to 18.5  |
 | Ideal            | 18.6 to 24.9  |
 | Overweight       | 25 to 25.9    |
 | Obese            | 30 to 30.9    |
 | Morbidly Obese   | >=40          |*/
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