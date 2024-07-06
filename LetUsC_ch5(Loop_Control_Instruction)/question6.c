#include <stdio.h>

int main() {
    int num=21, u_entry;
    while(num>1){
        printf("Pick 1, 2, 3 or 4 matchstick out of %d matchstick: ", num);
        scanf("%d", &u_entry);
        num-=u_entry;
        printf("You picked %d matchstick. Now there are %d matchstick to choose from.\n", u_entry, num);
        if(num==4){
            num-=3;
            printf("I picked 3 matchstick. Now there are %d matchstick to choose from.\nYou lost since you have to pick last matchstick",  num);
            
        }
        else if(num==3){
            num-=2;
            printf("I picked 2 matchstick. Now there are %d matchstick to choose from.\nYou lost since you have to pick last matchstick",  num);
            
        }
        else if(num==2){
            num-=1;
            printf("I picked 1 matchstick. Now there are %d matchstick to choose from.\nYou lost since you have to pick last matchstick",  num);
            
        }
        else if (num>4) {
            num-=u_entry;
            printf("I picked %d matchstick. Now there are %d matchstick to choose from.\n", u_entry, num);  
        }
        else
            printf("I lost.");
    }
}