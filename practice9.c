#include<stdio.h>
#include<stdlib.h>
int main()
{
    int magic;
    int guess;
    printf("enter the guessed number:");
    scanf("%d",&guess);
    if(guess==magic)
    {
        printf("right");

    }
    else if(guess>magic)

        printf("wrong,too high");
        else printf("wrong,too low");
        return 0;


}
