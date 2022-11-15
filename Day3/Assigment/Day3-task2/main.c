#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],max=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}
