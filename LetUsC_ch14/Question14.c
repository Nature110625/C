#include<stdio.h>
#include<math.h>
float dis(float , float , float, float);
void sortx(float *p);
void sorty(float *p);
void swap_array(float *, float *);
void swap_num(float *, float *);

int main(){
    float num[10][2], sum=0;
    printf("Enter x and y coordinate of 10 points: \n");
    for(int i=0; i<10; i++){
        printf("(%d). ", i+1);
        scanf("%f%f", &num[i][0], &num[i][1]);
    }
    
    sortx((float *)num);
    sorty((float *)num);
    for(int i=0; i<9; i++)
        sum+=dis(num[i][0], num[i+1][0], num[i][1], num[i+1][1]);
    printf("sum of distances between consecutive points in order= %f", sum);
}
void sortx(float *p){
    float *n, *n1;
    for(int i=0; i<9; i++){
        n=p+2*i;
        for(int j=i; j<10; j++){
                n1=p+2*j;
            if(*n>*n1){
                swap_array(n, n1);
            }
        }
    }
}

void swap_array(float *a, float *b){
    float x[2];
    for(int i=0; i<2; i++)
        x[i]=*(a+i);
    for(int i=0; i<2; i++)
        *(a+i)=*(b+i);
    for(int i=0; i<2; i++)
        *(b+i)=x[i];
}

void sorty(float *p){
    for(int i=0; i<9; i++){
        for(int j=i; j<10; j++){
            if(*(p+2*i)==*(p+2*j) && *(p+2*i+1)>*(p+2*j+1)){
                swap_num(p+2*i+1, p+2*j+1);
            }
        }
    }
}

void swap_num(float *a, float *b){
    float x;
    x=*a;
    *a=*b;
    *b=x;
}

float dis(float x1, float x2, float y1, float y2){
    float num=sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    return num;
}