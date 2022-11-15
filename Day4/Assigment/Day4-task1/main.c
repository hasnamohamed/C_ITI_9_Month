#include <stdio.h>
#include <stdlib.h>

int main()
{
   char firstName[100],lastName[100],fullName[200];
   int i=0;
   printf("Please Enter Your First Name\n");
   scanf("%s",&firstName);
   printf("Please Enter Your Last Name\n");
   scanf("%s",&lastName);
   strcpy(fullName, firstName);
   strcat(fullName," ");
   strcat(fullName,lastName);
   printf("%s",fullName);
    return 0;
}
