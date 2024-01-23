#include <stdio.h>
void matrix_entry(int (*p)[6]);
int main(){
    //for entry of first matrix
    printf("Enter first square matrix of order 6: \n");
    int mx1[6][6];
    matrix_entry(mx1);
    //for entry of second matrix
    printf("Enter second square matrix of order 6: \n");
    int mx2[6][6];
    matrix_entry(mx2);
    //for printing addition of two matrix
    printf("Sum of two matrix: \n");
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++)
            printf("%d ", mx1[i][j] + mx2[i][j]);
        printf("\n");
    }
}

void matrix_entry(int (*p)[6]){
    int *num;
    for(int i=0; i<6; i++){
        num=(int *)(p+i);
        for(int j=0; j<6; j++)
            scanf("%d", (num+j));
    }
}