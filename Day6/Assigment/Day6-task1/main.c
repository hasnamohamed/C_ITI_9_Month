#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    printf("Please Insert First Number To Swap ");
    scanf("%i",&x);
    printf("Please Insert Second Number To Swap ");
    scanf("%i",&y);
    swap(&x,&y);
    printf("Your First Number After Swapping is : %i\n",x);
    printf("Your Second Number After Swapping is : %i\n",y);
    return 0;
}
