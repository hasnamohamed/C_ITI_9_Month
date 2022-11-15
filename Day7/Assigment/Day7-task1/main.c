#include <stdio.h>
#include <stdlib.h>
typedef struct Employee
{
    int id;
    int salary;
}Employee;
int main()
{
    int num=0,arr[3];
    Employee *e[3];

    for(int i=0;i<3;i++){
        printf("Please Insert Number Of Columns In Row Number %i\n", i+1);
        scanf("%i",&num);
        arr[i]=num;
        e[i]=malloc(num*sizeof(Employee));
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<arr[i];j++)
        {
         printf("Please Insert Id Of Employee Number %i In Row Number %i\n", j+1,i+1);
         scanf("%i",&e[i][j].id);
         printf("Please Insert Salary Of Employee Number %i In Row Number %i\n", j+1,i+1);
         scanf("%i",&e[i][j].salary);
        }
    }
    for(int i=0;i<3;i++){
        printf("Row%i ",i+1);
        for (int j=0;j<arr[i];j++)
        {
         printf("%i ",e[i][j].id);
         printf("%i ",e[i][j].salary);
        }
    printf("\n");
    }
    return 0;
}
