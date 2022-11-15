#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define Up 72
#define Down 80
#define Left 75
#define Right 77
#define Home 71
#define End 79

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
typedef struct Employee{
    int id;
    int salary;
}Employee;
int main()
{
    char choice,count=0,alarm=1,op,i=0;
    char menu[3][10]= {"1-New","2-Display","3-Exit"};
    do{
        system("cls");
            for(int i=0; i<3; i++)
            {
                gotoxy(40,5+(i));
                if(i==count)
                {
                    SetColor(11);
                }
                else
                {
                    SetColor(8);
                }
                printf("%s \n",menu[i]);
            }
        choice=getche();
        switch (choice){
            case -32:
                choice=getche();
                switch (choice){
                    case 80:
                        if(count==2)
                        {
                            count=0;
                        }
                        else
                            count++;
                        break;
                    case 72:
                        if(count==0)
                            count=2;
                        else
                            count--;
                        break;
                    case 79:
                        count=2;
                        break;
                    case 71:
                        count=0;
                        break;
                        }
                break;
                case 13:
                    system("cls");
                    Employee EmpArr_of_Struct[3];
                    if(count==0)
                    {
                        printf("Please Enter Employee Number %i ID ",i+1);
                        scanf("%i",&EmpArr_of_Struct[i].id);
                        printf("Please Enter Employee Number %i Salary ",i+1);
                        scanf("%i",&EmpArr_of_Struct[i].salary);
                        i++;
                    }
                    else if(count==1)
                    {
                        if(i==0)
                        {
                            printf("Please insert data first");
                        }
                        else{
                            for(int j=0;j<i;j++)
                            {
                            printf("Employee Number %i Data is\nID: %i \nSalary: %i\n",j+1,EmpArr_of_Struct[j].id,EmpArr_of_Struct[j].salary);
                            }
                        }
                        getche();

                    }
                   else if(count==2)
                    {
                        printf("Come Again Soon ^_^");
                        alarm=0;
                        break;
                    }
                    break;
             }
        }
    while(alarm);

    return 0;
}
