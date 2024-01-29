#include <stdio.h>
#include <math.h>
int main(){
    //store_lla: A 2D array stores length of two sides and angle between them of six triangular piece of land 
    float store_lla[6][3]={
                            137.4, 80.9, 0.78,
                            155.2, 92.62, 0.89,
                            149.3, 97.93, 1.35,
                            160.0, 100.25, 9.00,
                            155.6, 68.95, 1.25,
                            149.7, 120.0, 1.75
                        };
    float ar[6];                                          //array ar will store area of that six triangular piece of land 
    for(int i=0; i<6; i++){
        //formula: (1/2)ab sin(angle)
        ar[i] = 0.5 * store_lla[i][0] * store_lla[i][1] * sin(store_lla[i][2]);
    }

    int l = 0;
    for(int i=0; i<6; i++)
        if(ar[l]>ar[i])
            l=i;
    
    printf("The largest plot is plot no. %d \n", l+1);
    printf("Whose side lengths and angle %f, %f, %f radian respectively and \n", store_lla[l][0], store_lla[l][1], store_lla[l][2]);
    printf("Area = %f", ar[l]);
    return 0;
}