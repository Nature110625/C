/*
In a data structure called queue the addition of new element takes
placd at the end (called 'rear' of queue) whereas deletion takes
place at the other end (called 'front' of queue). Write a program to
implement queue using a linked list.
*/

#include <stdio.h>
#include <stdlib.h>

//create an struct linked list and returns the address
#define GETADDRESS (struct linked_list *)malloc(sizeof(struct linked_list))

struct linked_list{
    int data;
    struct linked_list * link;
};

void display(struct linked_list *h){
    printf("\nYour queue\n");
    while(h!=NULL){
        printf("%d ", h->data);
        h=h->link;
    }
}
int main(){
    int val;
    struct linked_list *front, *current, *rear;
    printf("Create your own queue. Enter 'exit' to stop entering.\n> ");
    for(int i=0; scanf("%d", &val); i++){

        if(i==0){
            front=GETADDRESS;
            front->data=val;
            front->link=NULL;
            rear=front;
        }
        else{
            current=GETADDRESS;     //create a node and store address in current pointer
            rear->link=current;     //connects to rear node 
            current->data=val;      //fills value to the created node
            current->link=NULL;     //fills null in link since it is current last node
            rear=current;       //make current node a rear node before new loop starts
        }
        printf("> ");
    }
    display(front);
    printf("\n\nThis is a menu driven program for queue storing numbers.\nEnter '1' to add element to queue, '2' to delete element from queue and 'exit' to stop program: ");
    fflush(stdin);
    while(scanf("%d", &val)){
        if(val==1){
            printf("Enter the value you want to add: ");
            scanf("%d", &val);
            current=GETADDRESS;
            rear->link=current;     // pointer 'rear' was storing last node of queue
            current->data=val;
            current->link=NULL;
            rear=current;
            display(front);
        }
        else if(val==2){
            front=front->link;
            display(front);
        }
        printf("\n\nEnter '1' to add element to queue, '2' to delete element from queue and 'exit' to stop program: ");
    }
}