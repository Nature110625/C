#include<stdio.h>
void pfac(int x);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The prime factors of %d are: \n", num);
    pfac(num);
    return 0;
}
void pfac(int x){
    for(int i=2; i<=x;){
        if(x%i==0){
            x=x/i;
            printf("%d ", i);
            continue;
        }
        else
            i++;
    }
}