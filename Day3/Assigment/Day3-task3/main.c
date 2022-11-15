#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrOne[3][3],arrTwo[3][3],arrThree[3][3];
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++){
        scanf("%d",&arrOne[i][j]);
       }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++){
        scanf("%d",&arrTwo[i][j]);
       }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++){
        arrThree[i][j]=arrOne[i][j]+arrTwo[i][j];
       }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++){
       printf("%d ",arrThree[i][j]);
       }
       printf("\n");
    }
    return 0;
}
