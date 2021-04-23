///print size of int,float,double,etc.(use sizeof operator)

#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n=======================***************=======================\n");

    printf("\n Size of integer   = %d.",sizeof(int));
    printf("\n Size of short     = %d.",sizeof(short));
    printf("\n Size of Double    = %d.",sizeof(double));
    printf("\n Size of Float     = %d.",sizeof(float));
    printf("\n Size of Character = %d.",sizeof());

    printf("\n\n=======================***************=======================\n");

    getch();
    return 0;
}
