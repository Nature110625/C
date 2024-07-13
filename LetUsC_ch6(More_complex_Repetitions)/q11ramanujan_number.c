/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.*/
#include<stdio.h>
int main(){
    int i, j, k, l, lim;
    for(lim=1; lim<=5000; lim++) {  // the number which can be represented as sum of two cubes in two different ways
        for(i=1;i<lim; i++){    //select number to get first cube of first pair
            if(lim<i*i*i)       //if i^3 becomes greater than variable lim, there is no way adding another cube will sum up equal to variable lim
                break;          // hence upgrade lim and come again

            //now lim is greater than i^3
            for(j=1;j<=lim; j++){    //select number to get second cube of first pair
                if (lim<i*i*i+j*j*j)    //if the sum of i^3 and j^3 exceeds there is no way another pair can be found ahead
                    break;     //hence break the loop and goes to i loop increement i till i^3>lim and then i loop's break statement make lim increement and again enter this loop till i^3+j^3<lim
                for(k=i+1; k<=lim; k++){    //for first cube of second pair
                                            // needed to initialize a num greater than i , since we know the story before it
                    if(k*k*k>i*i*i+j*j*j)   // here we don't compare to lim since k^3 alone is not needed to be equal to lim
                                            // also i^3+j^3 is not equal to lim we can't get k right 
                                            // so this is acceptable and yeilds right result
                        break;
                    for(l=k+1; l<=lim; l++){    //l is initialized to k+1 because k is the next smallest number after i whoose cube is less than lim and we want another number whoose cube if added is less than or equal to lim 
                        if(lim<k*k*k+l*l*l)
                            break;
                        if (lim==i*i*i+j*j*j && lim==k*k*k+l*l*l)   //now if choosen i, j, k, l equals lim it will get printed else we will continue with our hit and trial method.
                        printf("%d = %d^3+%d^3 = %d^3+%d^3\n", lim, i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}