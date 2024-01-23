#include <stdio.h>
int symmetric(int *, int);
int main(){
    int n, check_s;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter a matrix: \n");
    int num[n][n];
    //takes entry of matrix
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &num[i][j]);
    if(symmetric((int *)num, n))
        printf("The entered matrix is symmetric.");
    else
        printf("The entered matrix is not symmetric.");
}
int symmetric(int *num, int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(*(num+i*n+j) != *(num+j*n+i))
                return 0;
    return 1;
}