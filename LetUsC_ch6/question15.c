#include <stdio.h>

int main(){
    int val=1;
    for(int i=0; i<5; i++){
      for(int j=0; j<4-i; j++)
        printf(" ");
      for(int j=0; j<=i; j++){
        if(j==0 || i==0)
          val=1;
        else
          val=val*(i-j+1)/j;
        printf("%d ", val);
      }
        printf("\n");
    }
}