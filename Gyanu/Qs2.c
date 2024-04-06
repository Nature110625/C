#include <stdio.h>
int main(){
    char uans[50];
    printf("ENTER ROADWAYS OR WATERWAYS(QS2):");
    scanf("%s", uans);
    if(uans[0]=='R'){
        printf("MEANS OF ROADWAYS ARE \n1.CAR \n2.BUS \n3.TRUCK");
    }else if(uans[0]=='W'){
        printf("MEANS OF WATERWAYSARE \n1.CRUISE \n2.STEAMBOAT \n3.CANOE");
    }
}