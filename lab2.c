#include<stdio.h>
void main()
{
    int marks;
    printf("enter the marks of the student:");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    printf("invalid marks");
    else if(marks>=90)
    printf("grade A\n");
    else if (marks>=80)
    printf("grade B\n");
    else if (marks>=60)
    printf("grade C\n");
    else if (marks>=50)
    printf("grade D\n");
    else
    printf("grade F\n");
}
