#include <stdio.h>
#include <stdlib.h>
typedef struct Employee{
    int id;
    int salary;
}Employee;
int main()
{
    Employee Emp_Struct;
    printf("Please Enter Employee ID ");
    scanf("%i",&Emp_Struct.id);
    printf("Please Enter Employee Salary ");
    scanf("%i",&Emp_Struct.salary);
    printf("Employee Data is\nID: %i \nSalary: %i",Emp_Struct.id,Emp_Struct.salary);
    return 0;
}
