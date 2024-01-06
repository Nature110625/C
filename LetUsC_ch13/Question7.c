#include<stdio.h>
#define MAX 10
int main(){
    int num[MAX], n;
    printf("Enter 10 numbers: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<MAX; i+=2){
        n = num[i];
        num[i] = num[i+1];
        num[i+1] = n;
    }
    printf("The list: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d", num[i]);
}