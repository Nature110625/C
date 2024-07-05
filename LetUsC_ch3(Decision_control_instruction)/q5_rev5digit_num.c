/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.*/
#include <stdio.h>

int main() {
    int num, rev_num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    rev_num = num%10*10000 + num/10%10*1000 + num/100%10*100 + num/1000%10*10 + num/10000;
    printf("The entered number is %d \nThe reversed number is %d", num, rev_num);

    if(num==rev_num)
        printf("\nThe entered number is equal to the reversed number.");
    else
        printf("\nThe entered number is not equal to the reversed number.");
}