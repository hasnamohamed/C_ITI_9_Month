#include <stdio.h>
#include <stdlib.h>
typedef struct point{
int x;
int y;
}point;
typedef struct line{
point p1;
point p2;
}line;
float length(struct line L){
int newX,newY;
newX=L.p2.x-L.p1.x;
newX*=newX;
newY=L.p2.y-L.p1.y;
newY*=newY;
return sqrt(newX-newY);
}

int main()
{
    line l;
    point p1,p2;
    float len;
    int num;
    printf("Plesae insert number of lines you want\n");
    scanf("%i",&num);
    line *ptr=malloc(num*sizeof(line));
    for(int i=0;i<num;i++)
    {
    printf("Please insert the x in the first point in line number %i\n",i+1);
    scanf("%i",&ptr[i].p1.x);
    printf("Please insert the y in the first point in line number %i\n",i+1);
    scanf("%i",&ptr[i].p1.y);
    printf("Please insert the x in the second point in line number %i\n",i+1);
    scanf("%i",&ptr[i].p2.x);
    printf("Please insert the y in the second point in line number %i\n",i+1);
    scanf("%i",&ptr[i].p2.y);
    }
    for(int i=0;i<num;i++)
    {
        len=length(ptr[i]);
        printf("length of line number %i is %f\n",i+1,len);
    }
    return 0;
}
