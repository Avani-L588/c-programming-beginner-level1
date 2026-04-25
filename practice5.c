#include<stdio.h>
int main(void)
{
    int x;
    x=10;
    if (x==10){
        int x;
        x=99;
        printf("the inner scope is %d\n",x);

    }
    printf("the outer scope is %d",x);
}
