#include <stdio.h>
float point_dis(float *a, float *b);
void sortx(float (*p)[2]);
void sorty(float *p);
int main(){
    float num[10][2];
    printf("Enter x and y coordinate of 10 points: \n");
    for(int i=0; i<10; i++){
        printf("(%d). ", i+1);
        scanf("%d%d", &num[i][0], &num[i][1]);
    }
    sortx(num);
    sorty(num);
}
void sortx(float (*p)[2]){
    int *n=(int *)p;
    for(int i=0; i<9; i++)
        for(int i=0; i<10; i++){
            if(*n>*(p+i)){
                swap_array(n, p+1);
            }
        }
}