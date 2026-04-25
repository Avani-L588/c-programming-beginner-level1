#include<stdio.h>
int main(void)
{
    int issqrd,i;
    printf("enter a number:");
    scanf("%d",&i);
    issqrd=(i>0)?i*i: -(i*i);
    printf("%d squared is %d",i,issqrd);
    return 0;


}
