/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.*/
#include<stdio.h>
int main(){
    int i, j, k, l, lim;
    for(lim=1; lim<=5000; lim++) {
        for(i=1;i<lim; i++){
            if(lim<i*i*i)
                break;
            for(j=i+1;j<=lim; j++){
                if (lim<i*i*i+j*j*j)
                    break;
                for(k=i+1; k<=lim; k++){
                    if(k*k*k>i*i*i+j*j*j)
                        break;
                    for(l=k+1; l<=lim; l++){
                        if(lim<k*k*k+l*l*l)
                            break;
                        if (lim==i*i*i+j*j*j && lim==k*k*k+l*l*l)
                        printf("%d = %d^3+%d^3 = %d^3+%d^3\n", lim, i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}