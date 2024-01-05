#include <stdio.h>
void sort(int *);
int main(){
    int num[5];
    printf("Enter 25 numbers: ");
    for(int i=0; i<5; i++)
        scanf("%d", &num[i]);
    
    sort(&num[0]);

    printf("List of 25 number after sorting: ");
    for(int i=0; i<5; i++)
        printf("\n%d", num[i]);

    return 0;
}
void sort(int *num){
    int n;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
            if(num[i]>num[j]){
                n = num[i];
                num[i] = num[j];
                num[j] = n;
            }
        }
    
}