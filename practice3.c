#include<stdio.h>
int main()
{
    int x=10;
    if (x==10){
        x=x+99;
        printf("inner scope %d",x);
    }
    printf("outer scope %d",x);
    return 0;
}
