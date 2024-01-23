#include <stdio.h>
#define MAX 10
void modify(int *);
int main(){
    int num[MAX];
    printf("Enter 10 numbers: \n ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    
    modify(num);
    printf("The list of number after modification: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d", num[i]);
    
    return 0;
}
void modify(int *num){
    for(int i=0; i<MAX; i++)
        num[i]*=3;
}