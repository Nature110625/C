#include <stdio.h>
int main(){
    int thread[3][2][3]={
                            {
                                {1, 2, 3},
                                {4, 5, 6}
                            }, 
                            {
                                {7, 8, 9},
                                {10, 11, 12}
                            },
                            {
                                {13, 14, 15},
                                {16, 17, 18}
                            }
                        };
printf("first element: %d\nlast element: %d", thread[0][0][0], *(*(*(thread+2)+1)+2));
}