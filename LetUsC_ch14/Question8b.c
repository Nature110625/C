#include <stdio.h>

void fill_matrix(int num[][5]);
void shift_two(int *);
void swap(int *, int *);

int main(){
    int matrix[4][5];
    printf("Enter the matrix: \n ");
    fill_matrix(matrix);
    shift_two((int *)matrix);
    printf("Matrix after circular shift by two position anti clockwise: \n");
    for (int i=0; i<4; i++){
        for(int j=0; j<5; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    
    return 0;
}

void fill_matrix(int num[4][5]){
    for (int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &num[i][j]);
}

void shift_two(int *num){
    for(int i=0; i<2; i++)
        for(int j=0; j+1<20; j++)
            swap(&num[j], &num[j+1]);
}

void swap(int *a, int *b){
    int l=*a;
    *a=*b; 
    *b=l;
}