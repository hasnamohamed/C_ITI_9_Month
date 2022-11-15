#include <stdio.h>
#include <stdlib.h>
typedef struct Employee{
    int id;
    int salary;
}Employee;

struct Employee AddEmployee(){
    Employee Emp_Struct;
    printf("Please Enter Employee ID ");
    scanf("%i",&Emp_Struct.id);
    printf("Please Enter Employee Salary ");
    scanf("%i",&Emp_Struct.salary);
    return Emp_Struct;
};
void DisplayEmployee(struct Employee Emp_Struct){
printf("Employee Data is\nID: %i \nSalary: %i",Emp_Struct.id,Emp_Struct.salary);

}
int main()
{
    Employee Emp_Struct;
    Emp_Struct=AddEmployee();
    DisplayEmployee(Emp_Struct);
    return 0;
}
