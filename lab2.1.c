#include<stdio.h>
int main()
{
    char name[50];
    int sub1,sub2,sub3;
    float avg;
    printf("enter your name:\n");
    scanf("%s",name);
    printf("enter sub1,sub2,sub3 marks:\n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    avg=(sub1+sub2+sub3)/3.0;
    printf("%.2f\n",avg);
    if (avg>=90)
    printf("grade A\n");
    else if (avg>=80)
    printf("grade B\n");
    else if (avg>=60)
    printf("grade C\n");
    else if (avg>=50)
    printf("grade D\n");
    else
    printf("grade F\n");
}
