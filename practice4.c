#include<stdio.h>
int main(void)
{
    int x=5,y=8,temp;
    temp=x,x=y,y=temp;
    printf("x = %d y = %d",x,y);
    return 0;
}
