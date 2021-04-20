//////////////////////////////////////////////////////////////////////////
//3. Write Program for swapping two numbers (without functional approach)
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=0,c=0;
    printf("=========Before Swapping========");
    printf("\n Enter Value Of a=");
    scanf("%d",&a);
    printf(" Enter Value Of b=");
    scanf("%d",&b);
    printf("==============*****=============");

    c=a;
    a=b;
    b=c;
    printf("\n\n=========AfterSwapping========");
    printf("\n Enter Value Of a=%d",a);
    printf("\n Enter Value Of b=%d",b);
    printf("\n=============*******============");

    getch();
    return 0;
}

