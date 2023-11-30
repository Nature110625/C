#include <stdio.h>

int main() {
    int ram_age, shyam_age, ajay_age;
    printf("Enter the age of Ram, Shyam and Ajay: ");
    scanf("%d%d%d", &ram_age, &shyam_age, &ajay_age);

    if(ram_age==shyam_age){
        if(ram_age==ajay_age)
            printf("Ram and Ajay and Shayam all have same age. hence all are yongest.");
        if(ram_age<ajay_age)
            printf("Ram and Shyam has same age. Hence both are yongest.");
        if(ram_age>ajay_age)
            printf("Ram and Shyam has same age. Hence both are yongest.");
    }
    if(ram_age<shyam_age) {
        if(ram_age==ajay_age)
            printf("Ram and Ajay has same age. Hence both are yongest.");
        if(ram_age<ajay_age)
            printf("Ram is yongest.");
        if(ram_age>ajay_age)
            printf("Ajay is yongest.");
    }
    if(ram_age>shyam_age){
        if(shyam_age==ajay_age)
            printf("Shyam and Ajay has same age. Hence both are yongest.");
        if(shyam_age<ajay_age)
            printf("Shyam is yongest.");
        if(shyam_age>ajay_age)
            printf("Ajay is yongest.");
    }
}