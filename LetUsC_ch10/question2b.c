#include <stdio.h>
void primef(int);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    primef(num);
    return 0;
}
void primef(int n){
    for (int i=2; i<=n;){
        if(n%i==0){
            printf("\n%d", i);
            primef(n/i);
            break;
        }
        else
            i++;
    }
}