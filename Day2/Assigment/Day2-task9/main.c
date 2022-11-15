#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Insert Your Magic Box\n");
    int magicbox[3][3];
    printf("Please The First Row Box\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%i",magicbox[i][j]);
        }
         printf("Please The Next Row Box\n");
    }
    return 0;
}
