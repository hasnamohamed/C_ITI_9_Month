#include <stdio.h>
#include <stdlib.h>

int main()
{
       char str[100],another[100];
   int i=0,j=0;
   printf("Please Enter Your string\n");
   gets(str);
    while(str[i]!='\0'){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
        another[j]=str[i];
        j++;
        }
        i++;
    }
    another[j]='\0';
    printf("%s",another);
    return 0;
}
