#include <stdio.h>
int main(){
    int num[5][5];
    printf("Enter a 5x5 matrix:\n");
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &num[i][j]);
    int large=num[0][0];
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
            if(large<num[i][j])
                large=num[i][j];
        }
    printf("The largest number in 5x5 matrix is %d", large);
}