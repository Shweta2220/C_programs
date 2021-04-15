#include<stdio.h>
#include<conio.h>

int main()
{
    int num=4,temp=0,fact=1;

    printf("\n given Number = %d",num);

    for(temp=1;temp<=num;temp++)
    {
        fact=fact*temp;
    }

    printf("\n Factorial of given no = %d",fact);

    getch();
    return 0;
}
