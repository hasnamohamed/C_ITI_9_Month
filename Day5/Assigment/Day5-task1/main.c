#include <stdio.h>
#include <stdlib.h>

int max(int numOne, int numTwo, int numThree)
{
    if(numOne>numTwo)
    {
        if(numOne>numThree)
        {
            return numOne;
        }
        else{
            return numThree;
        }
    }
    else{
        if(numTwo>numThree)
        {
            return numTwo;
        }
        else{
            return numThree;
        }
    }
}
int main()
{
    int numOne,numTwo,numThree,mx;
    printf("Please Enter You First Number ");
    scanf("%i",&numOne);
    printf("Please Enter You Second Number ");
    scanf("%i",&numTwo);
    printf("Please Enter You Third Number ");
    scanf("%i",&numThree);
    mx=max(numOne,numTwo,numThree);
    printf("Max Number is %i ",mx);
    return 0;
}
