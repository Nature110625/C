/*Write a program to find range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.*/
#include <stdio.h>

int main() {
    int num, max=0, n,  min, count=0;
    printf("How many numbers are there in the set of numbers? ");
    scanf("%d", &n);
    while(count<n){
        printf("Enter the number: ");
        scanf("%d", &num);
        if (count==0){
            max=num;
            min=num;
        } 
        if (num<min)
            min=num;
        if(num>max)
            max=num;
        count++;
    }
    printf("The range of set of numbers is %d", max-min);
    return 0;
}