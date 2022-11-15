#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{
    gotoxy(30,10);
    printf("Please Choice One Of This Menu\n");
    gotoxy(30,11);
    printf("1-New Press n To Display New\n");
    gotoxy(30,12);
    printf("2-Display Press d To Display New\n");
    gotoxy(30,13);
    printf("3-Exit Press e To Display New\n");
    gotoxy(30,14);
    char choice;
    scanf("%c",&choice);

    while(choice!='e'){
         switch (choice){
             case 'n':
                 system("cls");
                 gotoxy(30,10);
                 printf("You Choiced New\n");
                 printf("Enter Any Key To Return\n");
                 scanf("%c",&choice);
                 system("pause");
             break;
             case 'd':
                 system("cls");
                 gotoxy(30,10);
                 printf("You Choiced Display\n");
                 printf("Enter Any Key To Return\n");
                 scanf("%c",&choice);
                 system("pause");
             break;
             case 'e':
                return 0;
              break;
         }
        system("cls");
        gotoxy(30,10);
        printf("Please Choice One Of This Menu\n");
        gotoxy(30,11);
        printf("1-New Press n To Display New\n");
        gotoxy(30,12);
        printf("2-Display Press d To Display New\n");
        gotoxy(30,13);
        printf("3-Exit Press e To Display New\n");
        gotoxy(30,14);
        scanf("%c",&choice);
    }
    return 0;
}
