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