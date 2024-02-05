#include<stdio.h>
void extract_str(int, int, char *);
int main(){
    int p, n;
    char val[25]="Nothing is absolute!!";
    printf("given string:  %s", val);
    printf("\nEnter the position from where you want to extract string: ");
    scanf("%d", &p);
    printf("Enter the number of character to be extracted (0 idicates all character from entered position): ");
    scanf("%d", &n);
    extract_str(p, n, val);
}
void extract_str(int a, int b, char *val){
    int i=a-1;
    val+=i;
    for( ; i<a+b; i++, val++)
        printf("%c", *val);
}