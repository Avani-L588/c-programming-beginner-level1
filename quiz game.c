#include<stdio.h>
int main()
{
    char name[50];int num;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    printf("welcome to quiz game\n");
    printf("enter the user name\n");
    scanf("%s",name);
    printf("press 1 to start the game\n");
    scanf("%d",&num);
    if(num==1)
    {
        printf("the game has started\n");
    }
    else
    {
        printf("the game has ended");
    }
    printf("Q1.what does CPU stand for?\n");
    printf("1.central process unit\n");
    printf("2.central processing unit\n");
    printf("3.computer personal unit\n");
    printf("4.central processor utility\n");
    printf("enter your answer\n");
    scanf("%d",&ans1);
    if(ans1==2)
    {
        printf("correct answer\n");
        point1=5;
        printf("you have scored %d\n",point1);
    }
    else
    {
        printf("wrong answer\n");
        point01=0;
        printf("you haven't scored any points %d\n",point01);

    }

     printf("Q2.which of the following is an input device?\n");
    printf("1.monitor\n");
    printf("2.keyboard\n");
    printf("3.printer\n");
    printf("4.speaker\n");
    printf("enter your answer\n");
    scanf("%d",&ans2);
    if(ans2==2)
    {
        printf("correct answer\n");
        point2=5;
        printf("you have scored %d\n",point2);
    }
    else
    {
        printf("wrong answer\n");
        point02=0;
        printf("you haven't scored any points %d\n",point02);

    }
    printf("Q3.which language is used to write system software?\n");
    printf("1.python\n");
    printf("2.C\n");
    printf("3.HTML\n");
    printf("4.javascript\n");
    printf("enter your answer\n");
    scanf("%d",&ans3);
    if(ans3==3)
    {
        printf("correct answer\n");
        point3=5;
        printf("you have scored %d\n",point3);
    }
    else
    {
        printf("wrong answer\n");
        point03=0;
        printf("you haven't scored any points %d\n",point03);

    }

     printf("Q4.which of the following is not an operating system\n");
    printf("1.windows\n");
    printf("2.linux\n");
    printf("3.macos\n");
    printf("4.oracle\n");
    printf("enter your answer\n");
    scanf("%d",&ans4);
    if(ans4==4)
    {
        printf("correct answer\n");
        point4=5;
        printf("you have scored %d\n",point4);
    }
    else
    {
        printf("wrong answer\n");
        point04=0;
        printf("you haven't scored any points %d\n",point04);

    }
     printf("Q5.what is the brain of the computer?\n");
    printf("1.CPU\n");
    printf("2.monitor\n");
    printf("3.hard disk\n");
    printf("4.RAM\n");
    printf("enter your answer\n");
    scanf("%d",&ans5);
    if(ans5==1)
    {
        printf("correct answer\n");
        point5=5;
        printf("you have scored %d\n",point5);
    }
    else
    {
        printf("wrong answer\n");
        point05=0;
        printf("you haven't scored any points %d\n",point05);

    }
    printf("the quiz game ended\n");
    if(point1+point2+point3+point4+point5==25)
    {
        printf("you won the game!\n");

    }
    else
    {
        printf("better luck next time.\n");
    }
}
