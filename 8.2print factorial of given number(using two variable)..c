#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,fact=1;

    printf("\n Enter any Number=");
    scanf("%d",&Num);

    for(fact=1;1<=Num;Num--)
    {
        fact=fact*Num;
    }
    printf("\n Factorial of Num=%d",fact);

    getch();
    return 0;
}
