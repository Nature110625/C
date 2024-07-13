/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as.*/

#include <stdio.h>
int main(){
    float a, r, p, n, q;
    char flag='y';
    for(int i=1; i<=10; i++){
        printf("\nEnter the principle (p) and the compounds interest (q): ");
        scanf("%f%f", &p, &q);
        printf("Enter annual rate (r) and time in years (n): ");
        scanf("%f%f", &r, &n);
        a=p*n*q*(1+r/q);
        printf("Amount = %f\n", a);
        printf("Do you want to continue calculation? (y/n)");
        fflush(stdin);
        scanf("%c", &flag);
        if (flag=='n'||flag=='N')
            break;
    }
}