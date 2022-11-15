#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf ("please Enter A Number To Get Result 100\n");
    while(sum<100){
    scanf("%i",&num);
    sum+=num;
    if(sum<100)
    printf ("please Enter A Number To Get Result 100\n");
    }
    printf ("Your Result now is 100\n");

    return 0;
}
