/*A certain grade of steel is graded according to the following conditions:
(i)     Hardness must be greater than 50
(ii)    Carbon content must be less than 0.7
(iii)   Tensile strength must be greater than 5600
The grades are as follows: 
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met.

Write a program which will require the user to give values of
hardness, carbon content and tensile strength of the steel under 
consideration and output the grade of the steel.*/
#include <stdio.h>

int main() {
    float h, cc, ts;
    printf("Enter hardness, carbon content and tensile strength of the steel: ");
    scanf("%f%f%f", &h, &cc, &ts);
    if (h>50 && cc<0.7 && ts>5600)
        printf("Steel is of grade  10");
    else if (h>50 && cc<0.7)
        printf("Steel is of grade  9");
    else if (cc<0.7 && ts>5600)
        printf("Steel is of grade  8");
    else if (h>50 && ts>5600)
        printf("Steel is of grade  7");
    else if (h>50 || cc<0.7 || ts>5600)
        printf("Steel is of grade  6");
    else
        printf("Steel is of grade  5");
    return 0;
}