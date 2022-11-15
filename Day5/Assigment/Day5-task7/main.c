#include <stdio.h>
#include <stdlib.h>

typedef struct Time_struct{
int sec;
int min;
int hours;
}Time_struct;
int main()
{
    Time_struct time,timeTwo;
    int hours=0,min=0,sec=0;
    printf("Please Enter First Time hours ");
    scanf("%i",&time.hours);
    printf("Please Enter First Time Minutes ");
    scanf("%i",&time.min);
    printf("Please Enter First Time Secondes ");
    scanf("%i",&time.sec);
    printf("Please Enter Second Time hours ");
    scanf("%i",&timeTwo.hours);
    printf("Please Enter Second Time Minutes ");
    scanf("%i",&timeTwo.min);
    printf("Please Enter Second Time Secondes ");
    scanf("%i",&timeTwo.sec);
    sec=timeTwo.sec-time.sec;
    min=timeTwo.min-time.min;
    hours=timeTwo.hours-time.hours;
    if(sec<0)
    {
        sec=60+sec;
        min-=1;
    }
    if(min<0)
    {
        min=60+min;
        hours-=1;
    }
    printf("Hours: %i\nMinutes: %i\nSeconds: %i",hours,min,sec);
    return 0;
}
