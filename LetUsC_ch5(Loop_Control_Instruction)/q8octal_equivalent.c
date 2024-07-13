/*Write a program to receive an integer and find its octal equivalent.*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, r, val=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        r=num%8;    //r stores remainder after dividing num by 8
        num=num/8;  // after each loop num gets divided by 8
        //val stores octal equvalent of num
            //r of first loop is ones place digit
            //r of second loop is tens place digit
            //r of nth loop is 10^(n-1) place digit
        val+=r*pow(10, i);  //0<=i
        // note i is initialized to zero so, if loop is taking nth round i will store n-1 value
        // since to get r on once place in first loop we need to multiply r to 1(=10^0)
        i++;
    }
    printf("%d", val);
    return 0;
}