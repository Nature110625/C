#include <stdio.h>
int find(int, int *);
int main(){
    int num[25], n, count;
    printf("Enter 25 numbers\n--> ");
    for(int i=0; i<25; i++){
        scanf("%d", &num[i]);
    }
    
    printf("Enter a number: ");
    scanf("%d", &n);
    count = find(n, &num[0]);
    if(count != 0)
        printf("The number %d is found %d times in the array.", n, count);
    else
        printf("The number %d is not found in the array.", n);
}
int find(int num, int *arr){
    int count=0;
    for(int i=0; i<25; i++){
        if(num == *arr)
            count++;
        arr++;
    }
    return count;
}