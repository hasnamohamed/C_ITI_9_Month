#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int i=0;
   printf("Please Enter Your string\n");
   gets(str);
    while(str[i]!='\0'){
    i++;
    }
    printf("%i",i);
    return 0;
}
