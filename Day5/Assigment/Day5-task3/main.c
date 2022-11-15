#include <stdio.h>
#include <stdlib.h>
typedef struct Employee{
    int id;
    int salary;
}Employee;
int main()
{
    Employee EmpArr_of_Struct[3];
    for(int i=0;i<3;i++)
    {
    printf("Please Enter Employee Number %i ID ",i+1);
    scanf("%i",&EmpArr_of_Struct[i].id);
    printf("Please Enter Employee Number %i Salary ",i+1);
    scanf("%i",&EmpArr_of_Struct[i].salary);
    }
    for(int i=0;i<3;i++)
    {
    printf("Employee Number %i Data is\nID: %i \nSalary: %i\n",i+1,EmpArr_of_Struct[i].id,EmpArr_of_Struct[i].salary);

    }
    return 0;
}
