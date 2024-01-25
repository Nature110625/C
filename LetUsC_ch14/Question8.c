#include <stdio.h>

void fill_array(int *);
void shift_two(int *);
void swap(int *, int *);

int main(){
    int array[20];
    printf("Enter: \n ");
    fill_array(array);
    shift_two(array);
    printf("Array after circular shift by two position anti clockwise: \n ");
    for (int i=0; i<5; i++)
        printf("%d ", array[i]);
    
    return 0;
}

void fill_array(int *num){
    for (int i=0; i<5; i++)
        scanf("%d", &num[i]);
}

void shift_two(int *num){
    for(int i=0; i<2; i++)
        for(int j=0; j+1<5; j++)
            swap(&num[j], &num[j+1]);
}

void swap(int *a, int *b){
    int l=*a;
    *a=*b; 
    *b=l;
}