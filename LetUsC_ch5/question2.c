#include <stdio.h>

int main() {
    int num, factorial_num=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
        factorial_num*=num;
        num--;
    }
    printf("The factorial of given number is: %d", factorial_num);
    return 0;
}