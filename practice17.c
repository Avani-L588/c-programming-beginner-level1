#include<stdio.h>
int main()
{
    int x=0,y=0;
    for(x=0,y=0;x+y<10;x++)
    {
        y=getchar();
        y=y-'0';
    }
    printf("x is %d and y is %d",x,y);
    return 0;
}
