#include <stdio.h>
#define MAX 5
int main(){
    int num[MAX];
    printf("Enter 25 numbers: \n ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);

    int n=num[0];
    for(int i=0; i<MAX; i++)
        if(n>num[i])
            n=num[i];
    
    printf("Smallest number is %d.", n);
    return 0;
}