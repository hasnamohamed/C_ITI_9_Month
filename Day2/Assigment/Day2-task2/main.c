#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOne , numTwo, numThree ;
    printf("Please Enter The First Number\n");
    scanf("%i",&numOne);
        printf("Please Enter The Second Number\n");
    scanf("%i",&numTwo);
        printf("Please Enter The Third Number\n");
    scanf("%i",&numThree);
    if(numOne>numTwo)
    {
        if(numOne>numThree)
        {
            printf("%i Is The Largest Number \n", numOne);
        }
        else{
            printf("%i Is The Largest Number \n", numThree);
        }
    }
    else
    {
        if(numTwo>numThree)
        {
           printf("%i Is The Largest Number \n", numTwo);
        }
        else{
            printf("%i Is The Largest Number \n", numThree);
        }
    }
    return 0;
}
