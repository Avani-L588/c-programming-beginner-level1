#include<stdio.h>
int main(void)
{
    void menu(void)
    {
        char ch;
        printf("1.check spelling\n");
        printf("2.correct errors:\n");
        printf("3.display errors\n");
        printf("press any other key to exit\n");
        printf("  enter your choice  ");
        ch=getchar();
        switch(ch){
           case '1':
        check spelling();
        break;
           case '2':
        correct errors();
        break;
           case '3':
        display errors();
        break;
          default:
        printf("no option selected")
    }
}
}
