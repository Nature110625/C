/*Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>

int main() {
    int num=21, u_entry;
    while(num>1){
        printf("Pick 1, 2, 3 or 4 matchstick out of %d matchstick: ", num);
        scanf("%d", &u_entry);
        num-=u_entry;
        printf("You picked %d matchstick. Now there are %d matchstick to choose from.\n", u_entry, num);

        //In this program computer chooses same number of matchsticks as user choosed previously till number of matchstick remaining becomes 4 or less.
        //After this using if and else computer entry is set so that only one matchstick remains after the computer pick it's matchstick.
        if(num==5){
            num-=4;
            printf("I picked 4 matchstick. Now there are %d matchstick to choose from.\nYou lost since you have to pick last matchstick",  num);
            
        }
        else if(num==4){
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