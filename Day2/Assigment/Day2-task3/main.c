#include <stdio.h>
#include <stdlib.h>

int main()
{
    char degree;
    printf("Please Enter Your Degree \n");
    scanf("%c",&degree);
    switch (degree)
    {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Very Good");
            break;
        case 'C':
            printf("Good");
            break;
        case 'D':
            printf("fair");
            break;
        case 'E':
            printf("failed");
            break;
        default:
        printf("Enter Valid Degree");
            break;
    }
    return 0;
}
