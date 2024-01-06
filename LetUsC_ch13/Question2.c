#include <stdio.h>
#define MAX 25
void sort(int *);
int main(){
    int num[MAX];
    printf("Enter 25 numbers: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    
    sort(&num[0]);

    printf("List of 25 number after sorting: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d", num[i]);

    return 0;
}
void sort(int *num){
    int n;
    for(int i=0; i<MAX; i++)
        for(int j=i+1; j<MAX; j++){
            if(num[i]>num[j]){
                n = num[i];
                num[i] = num[j];
                num[j] = n;
            }
        }
    
}