/*There are five players from which the Most Valuable Player(MVP) is
to be chosen. Each player is to be judged by 3 judges, who would
assign a rank ti each player. The player whose sum of ranks is 
highest is chosen as MVP. Write a program to implement this scheme.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GETADDRESS (struct player *)malloc(sizeof(struct player))

struct player{
    int id, score1, score2, score3, ttl_score;
    struct player *link;
};

//displays players score chart and print MVP
void display(struct player *h){
    struct player *mvp=h;
    printf("\n|%10s|%10s|%10s|%10s|%20s|", "Player", "score1", "score2", "score3", "Total Score");
    printf("\n__________________________________________________________________");
    for(;h!=NULL;){
        if(h->ttl_score > mvp->ttl_score)
            mvp=h;
        printf("\n|%10d|%10d|%10d|%10d|%20d|", h->id, h->score1, h->score2, h->score3, h->ttl_score);
        printf("\n__________________________________________________________________");
        h=h->link;
    }
    printf("\n\nThe MVP is 'player %d'", mvp->id);
}
int main(){
    struct player *head, *current, *previous;
    printf("\nThis program choose Most Valuable Player. Three judges would assign rank to each player. Player whose sum of ranks is highest is chosen as MVP.");
    for (int i=0;i<5; i++){
        if(i==0)
            current=head=GETADDRESS;
        else
            current=GETADDRESS;
        
        current->id=i+1;
        printf("\nAll the judges are requested to assign rank to player %d as directed.", i+1);
        printf("\njudge 1's rank: ");
        scanf("%d", &current->score1);
        printf("\njudge 2's rank: ");
        scanf("%d", &current->score2);
        printf("\njudge 3's rank: ");
        scanf("%d", &current->score3);
        current->ttl_score = current->score1 + current->score2 + current->score3;
        current->link=NULL;
        if(i!=0)
            previous->link=current;
        previous=current;
    }
    display(head);
}