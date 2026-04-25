#include<stdio.h>
int main()
{
    int x,z;
    for(x=100;x!=65;x-=5)
    {
        z=x*x;
        printf("%d squared is %d\n",x,z);
    }
    return 0;
}
