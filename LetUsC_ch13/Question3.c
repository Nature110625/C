#include <stdio.h>
#define MAX 5
void bubble_sort(int *);
void swap(int *, int *);
int main(){
    int num[MAX];
    printf("Enter 25 numbers: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    
    bubble_sort(&num[0]);

    printf("List of 25 number after sorting: ");
    for(int i=0; i<MAX; i++)
        printf("\n%d ", num[i]);

    return 0;
}
void bubble_sort(int *n){
    for(int j=0; j<MAX; j++){
        for (int i=0; i<MAX-1; i++){
            if(n[i]>n[i+1])
                swap(&n[i], &n[i+1]);
        }
    }
}
void swap(int *a, int *b){
    int x;
    x=*a;
    *a=*b;
    *b=x;
}