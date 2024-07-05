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