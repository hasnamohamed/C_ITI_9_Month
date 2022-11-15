#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Enter Number To Get It's Multiplication Table\n");
    int num,res;
    scanf("%i",&num);
    for(int i=1;i<=12;i++){
            res=i*num;
        printf("%i * %i = %i\n",i,num,res );
    }
    return 0;
}
