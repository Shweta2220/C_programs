#include<stdio.h>
#include<conio.h>

 Addition();

int Addition()
{
    int a=0,b=0,c=0;

    printf("\n Accept Value Of A=");
    scanf("%d",&a);
    printf("\n Accept Value Of B=");
    scanf("%d",&b);

    c=a+b;
    printf("\n Addition of Two No.=%d",c);
}
int main()
{
    Addition();

    getch();
    return 0;
}
