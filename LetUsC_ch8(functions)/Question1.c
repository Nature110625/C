#include <stdio.h>
int factorial(int x);
int main(){
    int num, fac_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fac_num = factorial(num);
    printf("The factorial %d = %d", num, fac_num);
    return 0;
}
int factorial(int x){
    int i, fac=1;
    for(i=x; i>=1; i--)
        fac*=i;
    return fac;
}