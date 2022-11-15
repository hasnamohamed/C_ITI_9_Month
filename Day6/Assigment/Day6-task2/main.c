#include <stdio.h>
#include <stdlib.h>

int mul(int *arr)
{
    for (int i=0;i<10;i++){
       arr[i]*=10;
       printf("value number %i after multiplication is %i\n",i+1,arr[i]);
    }
    return arr;
}
int mull(int arr[])
{
    for (int i=0;i<10;i++){
       arr[i]*=10;
       printf("value number %i after multiplication is %i\n",i+1,arr[i]);
    }
    return arr;
}
int main()
{
    int arr[10],mulArray[10];
    for (int i=0;i<10;i++){
       printf("Please insert value number %i \n",i+1);
       scanf("%i",&arr[i]);
    }
    mul(arr);

    return 0;
}
