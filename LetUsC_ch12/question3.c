#include <stdio.h>
#define AM (n1+n2)/2.0
#define AV (num<0? -num : num)
#define UTOL ((val<=90 && val>=65)? val+32 : ((val<=122 && val>=97)? val: 1))
#define LARGE (n1>n2? n1 : n2)
int main(){
    int n1, n2, num; 
    char val;

    printf("Enter an alphabet: ");
    scanf("%c", &val);
    printf("Lower case  = %c\n", UTOL);

    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);
    printf("Arithmatic mean = %f\nLarger of the two = %d\n", AM, LARGE);

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Absolute Value = %d\n", AV);
}