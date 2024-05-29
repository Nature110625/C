/*Linked list is a very common data structure that is often used
to store similar data in memory. The individual elements of a linked
list are stored "somewhere" in memory. The order of the elements is
maintained by explicit links between them. Thus, a linked list is a
collection of elements called nodes, each of which stores two item
of information - an element of the list, and a link, i.e., a pointer or
an address that indicates explicitly the location of the node containing
the successor of this list element.
Write a program to build a linked list by adding new nodes at the beginning,
at the end or in the middle of the linked list. Also write a function display()
which displays all the nodes predent in the linked list.*/
#include <stdio.h>
#include <stdlib.h>

//constructed structure for linked list globally to give its access to display function
struct linked {
    int data;
    struct linked *link;
};

//displays the value of linked list 
void display(struct linked *l){
    for(int i=0; ;i++){
        printf("%d ", l->data); //print present node value
        l=l->link;  //upgrades linked structure pointer to next node
        if(l==NULL) //if the next node dont exist loop breaks and function ends
            break  ; 
    }
};
int main(){
    int entry;    //stores the option user chooses
    struct linked l1, l2, l3, *head, *k, *l;    //these are initially build node of linked list, head is the starting point of linked list, k is a pointer used in program
    head=&l1, l1.data=10, l1.link=&l2, l2.data=20, l2.link=&l3, l3.data=30, l3.link=NULL;   //initialization of initially build nodes

    //information for user
    printf("\nThis is a program to add new element in linked list. Below are different options: ");
    printf("\n1. Add new element at the beginning.");
    printf("\n2. Add new element at the end.");
    printf("\n3. Add new element in the middle.");
    printf("\n4. Display all element of linked list.");

    printf("\n\nEnter the number preceeding the option to perform that task: ");    //instruction

    //runs till the valid input is provided (i.e., any value other than integer will stop the loop)
    while(scanf("%d", &entry)){
    
    //different code block for different option choosed
    switch(entry){
        case 1: //adds a node in beginning
            k=head; //k gets address of first node
            head=(struct linked *)malloc(1);    //new addres (of struct linked type) become first node
            //new element gets value from user
            printf("\nEnter the value(here integer) you want to add in beginning: ");
            scanf("%d", &head->data);
            head->link=k;   //the address stored in k got stored in new first element's pointer to next element
            break;
        case 2: //adds new node in ending
            printf("\nEnter the value(i.e. integer) you want to add in ending: ");      
            l=head;
            //this loop runs to get last node of linked list and after finding adds new node making it second last node
            for(int i=0; ;i++){  
                if(l->link==NULL){
                    l->link=(struct linked *)malloc(1); //added new node
                    scanf("%d", &l->link->data);    //takes entry from user
                    l->link->link=NULL;
                    break; 
                }
                l=l->link;
            }
            break;
        case 3: //adds new element in the middle
            printf("\nThese are the value of element present in the linked list\n");
            display(head);  //display all value 
            int eval;
        
            printf("\nEnter the value after which you want to add a new element: ");
            scanf("%d", &eval);     //
            l=head;
            for(int i=0; ;i++){     //finds value entered by user in linked list adds new node after that value
                if(l->data==eval){
                    k=l->link;
                    l->link=(struct linked *)malloc(1);     //creates new node and add in the middle
                    printf("\nEnter the value(i.e. integer) of new element: ");
                    scanf("%d", &l->link->data);        //take new node value from user
                    l->link->link=k;
                }   
                l=l->link;
                if(l==NULL) //if the entered value not found do nothing
                    break; 
            }
            break;
        case 4:     //Displays the linked list
            printf("\nThese are the value of element present in the linked list\n");
            display(head);
            break;
        default:
            printf("Invalid entry");
    }

    //prompts again
    printf("\n\nEnter the number preceeding the option to perform that task: ");
    }
}