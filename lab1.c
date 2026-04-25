#include<stdio.h>
#include<math.h>
int main()
{
   int x1,x2,y1,y2;
   float distance;
   printf("enter coordinates of points x1,x2,y1,y2");
   scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
   distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("%f",distance);
   return 0;

}
