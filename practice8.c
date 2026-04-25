#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    printf("enter a string");
    gets(str);
    printf("the length of the string is %d",strlen(str));
    return 0;
}
