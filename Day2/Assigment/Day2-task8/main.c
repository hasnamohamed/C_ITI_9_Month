#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("Please Enter Your Sentence\n");
   char str[100];
   int word=0,chr=0,i=0;
   scanf("%[^\n]s",&str);
   while(str[i]!="\n")
   {
       if(str[i]==32)
            word++;
       else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            chr++;
       else{
            word++;
            printf("%i %i",word,chr);
            return 0;
       }
       i++;
   }

    return 0;
}
