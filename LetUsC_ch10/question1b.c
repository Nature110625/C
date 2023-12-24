#include <stdio.h>
int sum_dig(int);
int main(){
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum=sum_dig(num);
    printf("Sum of digits of %d = %d", num, sum);
}
int sum_dig(int num){
    int sum=0;
    if(num>0){
        sum= num%10 + sum_dig(num/10);
        return sum;
    }
    else 
        return 0;
}