#include <stdio.h>
int isbn(char *);
int chdig(char *);
int main(){
    char val[11];
    int ch=0;
    printf("Enter 10 digit number: ");
    scanf("%s", val);
    if(isbn(val))
        printf("%s is a 10-digit ISBN.", val);
    else
        printf("%s is not a 10-digit ISBN.", val);
}
int isbn(char *a){
    int n, sum=0;
    for(int i=10; *a!='\0'; i--){
        n=chdig(a);
        sum+=i*n;
        a++;
    }
    if(sum%11==0)
        return 1;
    return 0;
}
int chdig(char *b){
    int n=*b;
    if(n<=57 && n>=48)
        return (n-48);
}