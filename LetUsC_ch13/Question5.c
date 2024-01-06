#include <stdio.h>
void soe(int *);
int main(){
    int num[100];
    for(int i=0; i<100; i++)
        num[i]=i+1;
    
    soe(&num[0]);

    printf("All prime numbers from 1 to 100 by sieve of eratosthenes meathod: ");
    for(int i=0; i<100; i++)
        if(num[i]!=0)
            printf("\n%d", num[i]);

    return 0;
}
void soe(int *n){
    for(int i=1; i<100; i++)
        for(int j=i+1; j<100; j++)
            if(n[i]!=0 && n[j]%n[i]==0)
                n[j]=0;
}