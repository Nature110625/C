#include <stdio.h>
int main(){
    int time;
    for(int i=0; i<23; i++){
        if(i==0)
            printf("\n12:00 Midnight.");
        else if(i<12)
            printf("\n%d:00 AM.", i);
        else if (i==12)
            printf("\n12:00 Noon.");
        else if(i>12)
            printf("\n%d:00 PM.", i-12);
    }
    return 0;
}