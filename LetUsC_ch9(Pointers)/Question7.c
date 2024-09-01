#include <stdio.h>
int Euclids_gcd(int, int);
int main() {
    int num1, num2, gcd;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    gcd=Euclids_gcd(num1, num2);
    printf("Greatest Common Divisor given by Euclid’s algorithm of %d and %d is %d", num1, num2, gcd);
    return 0;
}
int Euclids_gcd(int x, int y){
    for(int que=1, cons ; y!=0; cons=x, x=y, y=cons-que*y){
        que=x/y;
    }
    return x;
}