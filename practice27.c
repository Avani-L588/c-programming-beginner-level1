#include<stdio.h>
int main()
{
    int i,j;
    int rows=4,cols=4;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
