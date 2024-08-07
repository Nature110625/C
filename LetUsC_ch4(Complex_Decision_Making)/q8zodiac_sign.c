/*write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign based on the following table:
 | Sun Sign     | From-To                       |
 |--------------|-------------------------------|
 |Capricorn     |December 22 - January 19       |
 |Aquarius      |January 20 - February 17       |
 |Pisces        |February 18 - March 19         |
 |Aries         |March 20 - April 19            |
 |Taurus        |April 20 - May 20              |
 |Gemini        |May 21 - June 20               |
 |Cancer        |June 21 -July 22               |
 |Leo           |July 23 - August 22            |
 |Virgo         |August 23 - September 22       |
 |Libra         |September 23 - October 22      |
 |Scorpio       |October 23 - November 21       |
 |Sgittarius    |November 22 - December 21      |*/
#include <stdio.h>

int main() {
    int date, month;
    printf("Enter date of birth: ");
    scanf("%d", &date);
    printf("Enter month of birth(1=January, 2=February, and so on): ");
    scanf("%d", &month);
    if ((date>=22 && month==12)||(date<=19 && month==1))
        printf("sun sign = Capricorn");
    if ((date>=20 && month==1)||(date<=17 && month==2))
        printf("sun sign = Aquarius");
    if ((date>=18 && month==2)||(date<=19 && month==3))
        printf("sun sign = Pisces");
    if ((date>=20 && month==3)||(date<=19 && month==4))
        printf("sun sign = Aries");
    if ((date>=20 && month==4)||(date<=20 && month==5))
        printf("sun sign = Taurus");
    if ((date>=21 && month==5)||(date<=20 && month==6))
        printf("sun sign = Gemini");
    if ((date>=21 && month==6)||(date<=22 && month==7))
        printf("sun sign = Cancer");
    if ((date>=23 && month==7)||(date<=22 && month==8))
        printf("sun sign = Leo");
    if ((date>=23 && month==8)||(date<=22 && month==9))
        printf("sun sign = Virgo");
    if ((date>=23 && month==9)||(date<=22 && month==10))
        printf("sun sign = Libra");
    if ((date>=23 && month==10)||(date<=21 && month==11))
        printf("sun sign = Scorpio");
    if ((date>=22 && month==11)||(date<=21 && month==12))
        printf("sun sign = Sagittarius");
    return 0;
}