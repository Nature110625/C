#include <stdio.h>
void binary_eq(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
        printf("The binary eq of %d = ", num);
        binary_eq(num);
    return 0;
}
void binary_eq(int n){
    if(n>1){
        binary_eq(n/2);
    }
    printf("%d", n%2);
}