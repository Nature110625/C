#include <stdio.h>
int main(){
    int hr, count=1;
    while(count<=10){
        printf("Enter todays work hours: ");
        scanf("%d", &hr);
        if(hr>40)
            printf("Overtime pay: %d\n", (hr-40)*12);
        else
            printf("Overtime pay: 00\n");
        count++;
    }
    return 0;
}