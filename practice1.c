#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the value of celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9.0/5.0)+32.0;
    printf("%f",fahrenheit);
    return 0;
}
