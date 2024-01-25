#include <stdio.h>
#include <math.h>
void fill(int *, int);
int determinant(int *, int);
void update(int *, int *, int, int);
int main(){
    int ans, order;
    printf("Enter order of matrix: ");
    scanf("%d", &order);
    int matrix[order][order];
    printf("Enter the materix: \n");
    fill((int *)matrix, order);
    ans=determinant((int *)matrix, order);
    printf("The determinant of given matrix = %d", ans);
    return 0;
}
void fill(int *num, int o){
    for(int i=0; i<o; i++)
        for(int j=0; j<o; j++)
            scanf("%d", (num + i*o + j));
}
int determinant(int *num, int o){
    int ans=0;
    if(o==2){
        ans=(*(num)) * (*(num+3)) - (*(num+2)) * (*(num+1));
        return ans;
    }
    for(int i=0; i<o; i++){
        int matrix[o-1][o-1];
        update((int *)matrix, num, o-1, i);
        ans+=pow((-1),i) * *(num+i) * determinant((int *)matrix, o-1);
    }
    return ans;
}
void update(int *matrix, int *num, int o, int n){
    for(int i=0; i<o; i++)
        for(int j=0; j<o; j++){
            int k=j;
            if(j>=n)
                k=j+1;
            *(matrix + i*o + j)=*(num + (i+1)*(o+1) + k);
        }
}