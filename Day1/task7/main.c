#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,reminder;
    float div;
    printf("Please Enter The First Number \n");
    scanf("%i", &num1);
    printf("Please Enter The Second Number \n");
    scanf("%i",&num2);
    reminder=num1%num2;
    div= num1/num2;
    printf("the Quotient of %i And %i is %f \n",num1,num2,div);
    printf("the Reminder of Quotient is %i \n",reminder);
    return 0;
}
