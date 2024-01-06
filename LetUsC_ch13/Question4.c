#include <stdio.h>
#define MAX 5
void insertion_sort(int *);
void swap(int *, int *);
int main(){
    int num[MAX];
    printf("Enter 25 numbers: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    
    insertion_sort(&num[0]);

    printf("List of 25 number after sorting: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d ", num[i]);

    return 0;
}
void insertion_sort(int *n){
    for(int j=1; j<MAX; j++){
        int k = j;
        for (int i=j-1; i>=0; i--){
            if(n[k]<n[i]){
                swap(&n[k], &n[i]);
                k=i;    
            }
        }
    }
}
void swap(int *a, int *b){
    int x;
    x=*a;
    *a=*b;
    *b=x;
}