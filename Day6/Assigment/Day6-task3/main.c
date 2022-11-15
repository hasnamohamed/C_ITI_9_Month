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
void change_Position(struct line *L, int newX, int newY){
(*L).p1.x=newX;
(*L).p1.y=newY;
}
int main()
{
    line l;
    point p1,p2;
    float len;
    printf("Please insert the x in the first point\n");
    scanf("%i",&p1.x);
    printf("Please insert the y in the first point\n");
    scanf("%i",&p1.y);
    printf("Please insert the x in the second point\n");
    scanf("%i",&p2.x);
    printf("Please insert the y in the second point\n");
    scanf("%i",&p2.y);
    l.p1=p1;
    l.p2=p1;
    len=length(l);
    printf("the Length Of the Line is = %f\n",len);
    change_Position(&l,10,20);
    printf("the new points are\nx = %i \ny= %i ",l.p1.x,l.p1.y);
    return 0;
}
