#include <stdio.h>

int main(){
    int class, gracem, nsub;
    printf("Enter the class obtained by the student and number of subject student failed: ");
    scanf("%d%d", &class, &nsub);
    switch(class){
        case 1:
            if(nsub>3)
                gracem=0;
            else
                gracem=5;
            break;
        case 2:
            if(nsub>2)
                gracem=0;
            else
                gracem=4;
            break;
        case 3:
            if(nsub>1)
                gracem=0;
            else
                gracem=5;
            break;
    }
    printf("The grace marks = %d", gracem);
    return 0;
}