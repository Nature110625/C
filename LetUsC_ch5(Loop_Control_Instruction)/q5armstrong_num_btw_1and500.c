/*Write a program to print out all Armstrong numbers between 1 and 500.
If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include<stdio.h>

int main(){
    int num=1, d1, d2, d3, a_check;
    printf("Armstrong numbers: \n");
    while(num<=500){
        d1=num%10;
        d2=num/10%10;
        d3=num/100%10;
        a_check = d1*d1*d1 + d2*d2*d2 + d3*d3*d3;
        if(a_check==num)
            printf("%d\n", num);
        num++;
    }
    return 0;
}