#include<stdio.h>
void swipe(int *, int *, int *);
int main(){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("Before circular shift of values\na = %d, b = %d and c = %d\n", x, y, z);
    swipe(&x, &y, &z);
    printf("After circular shift of values\na = %d, b = %d and c = %d", x, y, z);
}
void swipe(int *a, int *b, int *c){
    int m;
    m = *a;
    *a = *c;
    *c = *b;
    *b = m;
}