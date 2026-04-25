#include<stdio.h>
void main()
{
    int marks;
    printf("enter the student's marks (0-100)");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
        printf("invalid marks!please enter a value between 0 to 100");
    else if(marks>=90)
        printf("grade:A\n");
    else if(marks>=75)
        printf("grade:B\n");
    else if(marks>=60)
        printf("grade:C\n");
    else if(marks>=50)
        printf("grade:D\n");
    else
        printf("grade:F\n");
}
