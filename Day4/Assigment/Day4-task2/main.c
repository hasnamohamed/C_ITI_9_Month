#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100],ch;
   int i=0,count=0;
   printf("Please Enter Your String\n");
   gets(str);
   printf("Please Enter Your Character:");
   ch=getche();
   while(str[i]!='\0'){
   if(str[i]==ch)
    count++;
   i++;
   }
   printf("\n%i",count);
    return 0;
}
