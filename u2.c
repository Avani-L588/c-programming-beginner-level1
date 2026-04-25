#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int guess;
    int magic;
    magic=rand();
    printf("enter the guessing number:\n");
    scanf("%d",&guess);
    if(guess==magic)
    {
        printf("right\n");
        printf("%d is the guessed number",guess);

    }
    else
    {
        printf("wrong\n");
        if(guess>magic)
            printf("too high\n");
        else
            printf("too low\n");
    }
    return 0;
    }
