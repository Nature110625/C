#include <stdio.h>
#define MAX 10
int main(){
    int num[MAX];
    printf("Enter 10 numbers: \n ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<MAX/2; i++){
        if((num[i]==num[MAX-1-i]) && (i != MAX-i))
            printf("\nThere is same number %d at index %d and %d respectively.", num[i], i, MAX-1-i);
    }
    return 0;
}