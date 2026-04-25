#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    if(b)
    {
        printf("%d",a/b);
    }
    else printf("cannot divide by zero");
        return 0;
}
