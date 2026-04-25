#include<stdio.h>
int f1(int n);
int f2(void);
int main()
{    int t;
    printf("enter a number:");
    scanf("%d",&t);
    t?f1(t)+f2():printf("zero entered");
    return 0;


}
int f1(int n)
{
    printf("%d",n);
    return 0;
}
int f2(void)
{
    printf("entered");
    return 0;
}
