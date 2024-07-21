#include <stdio.h>
#define COL 4
int main(){
    int val=1;
    for(int i=0; i<=COL; i++){   // for rows
      for(int j=0; j<COL-i; j++)    // for space 
        printf(" ");
      for(int j=0; j<=i; j++){    // for triangle
        if(j==0 || i==0)
          val=1;
        else
          val=val*(i-j+1)/j;  //formula for printing numbers
        printf("%d ", val);
      }
        printf("\n");
    }
}