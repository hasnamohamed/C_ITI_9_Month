#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumAvrg=0,sum=0,col,row;
    printf("Please insert number of rows ");
    scanf("%d",&row);
    printf("Please insert number of columns ");
    scanf("%d",&col);
     int sumArray[row],avg[col];
     int **arrOne=malloc(row*sizeof(int*));
    for(int i=0;i<row;i++)
    {
        arrOne[i]=malloc(col*sizeof(int));
    }
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++){
            printf("Please insert degree of subject number %i of student number %i\n",j+1,i+1);
        scanf("%d",&arrOne[i][j]);
       }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            sum+=arrOne[i][j];
        }
        sumArray[i]=sum;
        sum=0;
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++){
            sumAvrg+=arrOne[j][i];
        }
        avg[i]=sumAvrg/col;
        sumAvrg=0;
    }

    for(int i=0;i<row;i++){
        printf("Sum Of Row %i = %i \n",i+1,sumArray[i]);
    }
    for(int i=0;i<col;i++){
        printf("Avg Of Column %i = %i \n",i+1,avg[i]);
    }
    return 0;
}
