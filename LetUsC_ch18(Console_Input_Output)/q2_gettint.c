/*Define a function getint(), which would recive a numeric string
from the keyboard, convert it to an integer number and return the 
integer to the calling function. A sample usage of getint() is shown 
below
#include <stdio.h>
int main()
{
    int a;
    a=getint();
    printf("you entered %d\n", a);
    return 0;
}
*/

#include <stdio.h>

int getint(){
    printf("Enter a number: ");
    char num[50], *a;
    int ans=0, val;
    scanf("%s", num);

    for(a=num; *a!='\0'; a++){
        if(*a<48||*a>57){       //If any character other than number is entered the function will rerun till an number is not entered
            ans=getint();
            return ans;
        }
        else{
            val=(int)*a-48;
            ans=(ans+val)*10;
        }
    }
    ans/=10;    //in the loop ans gets multiplied by 10 but in last we only need to add the number in val\
                //so we divide the obtained ans to get right ans
    return ans;
}

int main(){
    int a;
    a=getint();
    printf("you entered %d\n", a);
    return 0;
}