#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Please Enter Your Character:");
    ch=getche();
    if(ch==-32){
        ch=getche();
        printf("%d Extended",ch);
    }
    else{
        printf("%d Normal",ch);
    }
    return 0;
}
