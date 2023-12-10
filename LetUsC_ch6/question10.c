/*Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.*/
#include <stdio.h>

int main(){
    float p=100000;
    for (int i=1; i<=10; i++){
        printf("%f\n",p);
        p-=p*0.1;
    }
}