/*Papet of size A0 has dimension 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2,...,A8.*/
#include <stdio.h>
int main(){
    float l=1189, b=841, c;
    printf("Dimension of paper A0: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A1: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A2: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A3: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A4: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A5: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A6: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A7: %f x %f", l, b);
    c=l;
    l=b;
    b=c/2;
    printf("\nDimension of paper A8: %f x %f", l, b);
    
}