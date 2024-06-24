/*
Write a program that receives wind speed as input and categorizes
the hurricane as per the following table:
____________________________________________________________
|   Wind Speed in miles/hour    |    Hurrican Category      |
____________________________________________________________
|       74-95                   |       I                   |
|       96-110                  |       II                  |
|       111-130                 |       III                 |
|       131-155                 |       IV                  |
|       155                     |       V                   |
|_______________________________|___________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GETADDRESS (struct linked *)malloc(sizeof(struct linked))

struct linked {
    int speed;
    char h_cat[5];
    struct linked *link;
};

void display (struct linked *head);

int main(){
    struct linked *head, *current, *previous;
    int val, i=0;
    char val_cat[5];
    printf("Enter speed of wind in miles/hour (to stop entering write 'stop'): ");
    
    //takes entry of wind speed from user till number is entered in linked list and categorise each speed
    while(scanf("%d", &val)){
        if(i==0){
            current=head=GETADDRESS;
        }
        else{
            current=GETADDRESS;
        }
        current->speed=val;

        if (val>=74 && val<=95) {
            strcpy(current->h_cat, "I");
        }
        else if (val>=96 && val<=110){
            strcpy(current->h_cat, "II");
        }
        else if (val>=111 && val<=130){
            strcpy(current->h_cat, "III");
        }
        else if (val>=131 && val<155){
            strcpy(current->h_cat, "IV");
        }
        else if (val==155){
            strcpy(current->h_cat, "V");
        }
        else
            strcpy(current->h_cat, "N/A");
        previous->link=current;
        current->link=NULL;
        previous=current;
        i++;
        printf("\nEnter speed of wind in miles/hour (to stop entering write 'stop'): ");
    }
    display(head);
}

//displays linked list in form of table
void display(struct linked *head){
    printf("\n%20s|%20s", "Wind Speed (miles/hr)", "Hurrican Category");
    printf("\n__________________________________________");
    for(;head!=NULL;){
        printf("\n|%20d|%20s|", head->speed, head->h_cat);
        printf("\n__________________________________________");
        head=head->link;
    }
}
