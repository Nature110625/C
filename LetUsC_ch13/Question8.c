#include <stdio.h>
#define MAX 10
int main(){
    int num[MAX], rev_num[MAX];
    printf("Enter 10 numbers: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<MAX; i++)
        rev_num[9-i] = num[i];
    
    printf("Array entered in reverse order: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d", rev_num[i]);
    
    return 0;
}