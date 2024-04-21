/*A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that he has scored
in each test match. Create an array of structures to hold records of
20 such cricketers and then write a program to read these records
and arrange them in ascending order by average runs. 
Use the qsort() standard library function.*/
#include <stdio.h>
#include <stdlib.h>
struct info {
        char name[50];
        int age; 
        int no_testm;
        int av_runs;
};
int  sort(const void *p, const void *q){
    int l= ((struct info *)p)->av_runs;
    int m=((struct info *)q)->av_runs;
    return (l-m);
}
int main(){
    struct info cricketer[20];
    printf("Enter in order 20 cricketer's name, age, number of test matches played and the average runs scored in each test match:\n");
    for(int i=0; i<20; i++){
        printf("> ");
        scanf("%s%d%d%d", &cricketer[i].name, &cricketer[i].age, &cricketer[i].no_testm, &cricketer[i].av_runs);
    }

    qsort(cricketer, 5, sizeof(struct info), sort);

    printf("\n20 cricketer's information :\n");
    for(int i=0; i<20; i++){
        printf("\n> Name = %s, \tAge = %d, \tNumber of test matches played = %d, \tAverage runs scored in each test match = %d", cricketer[i].name, cricketer[i].age, cricketer[i].no_testm, cricketer[i].av_runs);
    }
}