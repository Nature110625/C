#include <stdio.h>
int main(){
    int num[4][4], t_num[4][4];
    printf("Enter a 4x4 matrix:\n");
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            scanf("%d", &num[i][j]);
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            t_num[i][j]=num[j][i];
    printf("\nTranspose of entered matrix: ");
    for(int i=0; i<4; i++){
        printf(" \n ");
        for(int j=0; j<4; j++){
            printf(" %d ", t_num[i][j]);
        }
    }
}