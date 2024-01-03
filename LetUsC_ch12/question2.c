#include <stdio.h>
#include "C:\Users\prakr\OneDrive\Documents\GitHub\C\LetUsC_ch12\question.h"
int main(){
    int l, m, n, a, b, h, r;
    printf("Enter base and height: ");
    scanf("%d%d", &b, &h);
    printf("The area of triangle = %f", ATRI(b, h));

    printf("\nEnter the length of sides of triangle: ");
    scanf("%d%d%d", &l, &m, &n);
    printf("The perimeter of triangle = %d", PTRI(l, m, n));

    printf("\nEnter the length of a side of square: ");
    scanf("%d", &a);
    printf("The area of square = %d\nThe perimeter of square = %d", ASQR(a), PSQR(a));
    
    printf("\nEnter the radius of circle: ");
    scanf("%d", &r);
    printf("The area of circle = %f\nThe perimeter of circle = %f", ACIR(r), PCIR(r));

    return 0;
}