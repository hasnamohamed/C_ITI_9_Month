#include <stdio.h>
#include <stdlib.h>
typedef struct Employee{
    int id;
    int salary;
}Employee;
typedef struct Dept{
    int id;
    Employee e;
}Dept;
int main()
{
     Dept dp;
    printf("Please Enter Department ID ");
    scanf("%i",&dp.id);
    printf("Please Enter Employee ID ");
    scanf("%i",&dp.e.id);
    printf("Please Enter Employee Salary ");
    scanf("%i",&dp.e.salary);
    printf("Department Data is\nID: %i\nEmployee ID: %i \nEmployee Salary: %i",dp.id,dp.e.id,dp.e.salary);
    return 0;
}
