 /// print ASCII table (0-127).

#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n========================print ASCII table (0-127)===================");

    int no=0;

    for(no=0;no<=127;no++)
    {
        printf("\n Asccii of %d=%c",no,no);
    }

    printf("\n\n=======================***************=======================\n");

    getch();
    return 0;
}
