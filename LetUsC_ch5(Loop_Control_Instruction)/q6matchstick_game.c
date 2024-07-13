/*Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>

//note 21 = 5*4 + 1
int main() {
    int num=21, u_entry, c_entry;
    while(num>1){   
        printf("Pick 1, 2, 3 or 4 matchstick out of %d matchstick: ", num);
        scanf("%d", &u_entry);
        if(u_entry<5 && u_entry>0){
            num-=u_entry;
            printf("You picked %d matchstick. Now there are %d matchstick to choose from.\n", u_entry, num);
            c_entry=5-u_entry;
            num-=c_entry;
            printf("I picked %d matchstick. Now there are %d matchstick to choose from.\n", c_entry, num);
        }

        if(num==1)
            break;
    }
    printf("computer won!!");
}