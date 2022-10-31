#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum;
    printf("Please Enter The First Number \n");
    scanf("%i", &num1);
    printf("Please Enter The Second Number \n");
    scanf("%i",&num2);
    sum=num1+num2;
    printf("This Is The Summation of %i and %i Equals %i ",num1,num2,sum);
    return 0;
}
