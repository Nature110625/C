/*Create a structure called library to hold accession number, title of 
the book, author name, price of the book, and flag indicating 
whether book is issued or not. Write a menu-driven program that 
implements the working of a library. The menu options should be: 
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct library{
    int accno;
    char titlebook[100];
    char authname[50];
    int bprice;
    int flag;
}book[400];
int add(int s);
void display(int s);
void disbook_ofauth(int s);
void distitle(int s);
void dis_inorder(int s);
int sort(const void *p, const void *q){
    int l=((struct library *)p)->accno;
    int m=((struct library *)q)->accno;
    return (l-m);
}
int main(){
    int opt, bsize=0;
    printf("\nThis is a menu-driven program that implements working of library.\n");
    printf("\nThe menu options are: ");
    printf("\n1. Add book information");
    printf("\n2. Display book information");
    printf("\n3. List all books of given author");
    printf("\n4. List the title of specified book");
    printf("\n5. List the count of books in the library");
    printf("\n6. List the books in the order of accession number");
    printf("\n7. Exit");
    while(1){
        fflush(stdin);
        printf("\n\nEnter the number preceeding the option to perform that task: ");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                bsize=add(bsize);
                break;
            case 2:
                display(bsize);
                break;
            case 3:
                disbook_ofauth(bsize);
                break;
            case 4:
                distitle(bsize);
                break;
            case 5:
                printf("\nThere are %d books in library.", bsize);
                break;
            case 6:
                dis_inorder(bsize);
                break;
            case 7: 
                printf("Exit done.");
                return 0;
            default:
                printf("\ninvalid menu option!!");
                return 0;
        }
        printf("\nTask Completed!!");
    }
}
int add(int s){
    int i;
    printf("\nEnter book details (accession number, title of book, author name, price of book, and flag(1 for issued and 0 for not issued)) in order: (enter 'no' to stop entering)\n");
    for(i=s; ; i++){
        printf("> ");
        if(!scanf("%d%s%s%d%d", &book[i].accno, &book[i].titlebook, &book[i].authname, &book[i].bprice, &book[i].flag))
            break;
    }
    return i;
}
void display(int s){
    printf("\nInformation stored are:");
    for(int i=0; i<s; i++){
        printf("\n> Accession Number=%d\tTitle of book=%s\tAuthor Name=%s\tPrice of book=%d\tFlag=%d", book[i].accno, book[i].titlebook, book[i].authname, book[i].bprice, book[i].flag);
    }
}
void disbook_ofauth(int s){
    char auth[50];
    printf("\nEnter the name of author: ");
    scanf("%s", &auth);
    printf("\nBooks of author %s are: ", auth);
    for(int i=0; i<s; i++){
        if(!strcmp(auth, book[i].authname))
            printf("\n> Accession Number=%d\tTitle of book=%s\tAuthor Name=%s\tPrice of book=%d\tFlag=%d", book[i].accno, book[i].titlebook, book[i].authname, book[i].bprice, book[i].flag);
    }
}
void distitle(int s){
    int flag;
    printf("\nEnter 1 to get title of issued books and 0 for not issued: ");
    scanf("%d", &flag);
    printf("\nTitle of %s books are: ", flag==0?"not issued":"issued");
    for(int i=0; i<s; i++){
        if(book[i].flag==flag)
            printf("\n> Title of book=%s", book[i].titlebook);
    }
}
void dis_inorder(int s){
    qsort(book, s, sizeof(struct library), sort);
    printf("\nThe list of books ordered according to accession number: ");
    for(int i=0; i<s; i++){
        printf("\n> Accession Number=%d\tTitle of book=%s\tAuthor Name=%s\tPrice of book=%d\tFlag=%d", book[i].accno, book[i].titlebook, book[i].authname, book[i].bprice, book[i].flag);
    }
}