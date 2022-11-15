#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter A Char\n");
    char ch;
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("GREAT You Entered A Char Successfully\n");
    }
    else
    {
        printf("NOO Please Enter A Char\n");
    }
    return 0;
}
