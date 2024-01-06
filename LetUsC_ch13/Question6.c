#include <stdio.h>
#define MAX 5
void pn(int *, int *, int *);
void eo(int *, int *, int *);
int main(){
    int num[MAX], p=0, n=0, e=0, o=0;
    printf("Enter 25 number: \n");
    for(int i=0; i<MAX; i++)
        scanf("%d", &num[i]);
    
    pn(num, &p, &n);
    eo(num, &e, &o);

    printf("Number of\n Negative number = %d\n Positive number = %d\n Odd number = %d\n Even number = %d", n, p, o, e);
    return 0;
}
void pn(int *ar, int *p, int *n){
    for(int i=0; i<MAX; i++){
        if(ar[i]>=0)
            *p=*p+1;
        else
            *n=*n+1;
    }
}
void eo(int *ar, int *e, int *o){
    for(int i=0; i<MAX; i++){
        if(ar[i]%2==0)
            ++*e;
        else
            ++*o;
    }
}