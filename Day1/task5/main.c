#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,mul,sub,sum;
    float div;
    printf("Please Enter The First Number \n");
    scanf("%i", &num1);
    printf("Please Enter The Second Number \n");
    scanf("%i",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div= num1/num2;
    printf("the summation of %i And %i is %i \n",num1,num2,sum);
    printf("the sublimation of %i And %i is %i \n",num1,num2,sub);
    printf("the multiplation of %i And %i is %i \n",num1,num2,mul);
    printf("the divvation of %i And %i is %f \n",num1,num2,div);
    return 0;
}
