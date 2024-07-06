/*In boxing the weight class of a boxer is decided as per the following
table. write a program that receives weight as input and prints out
the boxer's weight class.
 |Boxer Class       |Weight in pounds   |
 |------------------|-------------------|
 | Flyweight        | <115              |
 | Bantamweight     | 115-121           |
 | Featherweight    | 122-153           |
 | Middleweight     | 154-189           |
 | Heavyweight      | >=190             |*/
#include <stdio.h>

int main() {
    int weight;
    printf("Enter the weight of boxer: ");
    scanf("%d", &weight);
    if (weight<115 && weight>0)
        printf("The boxer class of boxer is flyweight.");
    if (weight<=121 && weight>=115)
        printf("The boxer class of boxer is bantamweight.");
    if (weight<=153 && weight>=122)
        printf("The boxer class of boxer is featherweight.");
    if (weight<=189 && weight>=154)
        printf("The boxer class of boxer is middleweight.");
    if (weight>=190)
        printf("The boxer class of boxer is heavyweight.");
    return 0;
}