/*Write a program to print the multiplication table of the number
entered by the user.*/
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }
    return 0;
}