#include <stdio.h>
void roman(int x, char a);
int main(){
    int year, d1, d2, d3, d4;
    char a;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    d1=year%10;
    d2=year/10%10;
    d3=year/100%10;
    d4=year/1000%10;
    
    a='M';
    roman(d4, a);

    if(d3>=5)
        printf("D");
    a='C';
    roman(d3,a);
    
    if(d2>=5)
        printf("L");
    a='X';
    roman(d2,a);

    if(d1>=5)
        printf("V");
    a='I';
    roman(d1,a);
    
    return 0;
}

void roman(int x, char a){
    if(x<5 && x>0)
        for(int i=1; i<=x; i++)
            printf("%c", a);
    else if(x>5)
        for(int i=1; i<=x-5; i++)
            printf("%c", a);
}