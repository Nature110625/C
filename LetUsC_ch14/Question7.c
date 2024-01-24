#include <stdio.h>
void fill_matrix(int matrix[3][3]);
void multiply(int m1[3][3], int m2[3][3]);
int main(){
    //for entry of the two matrix
    int num1[3][3];
    int num2[3][3];
    printf("Enter the element of first matrix: \n");
    fill_matrix(num1);
    printf("Enter the element of second matrix: \n");
    fill_matrix(num2);
    //prints matrix storing multiplication of given two matrix 
    printf("The multiplication of given two matrix: \n");
    multiply(num1, num2);
    return 0;
}
void fill_matrix(int matrix[3][3]){
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &matrix[i][j]);
}
void multiply(int m1[3][3], int m2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int num=0;
            for (int k=0; k<3; k++)
                num+=m1[i][k]*m2[k][j];
            printf("%d ", num);
        }
        printf("\n");
    }
}