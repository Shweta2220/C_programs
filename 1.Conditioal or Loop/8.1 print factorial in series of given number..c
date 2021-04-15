#include<stdio.h>
#include<conio.h>

int main()
{
   int fact=1,num=0,temp=1;

   printf("\n Enter any Number=");
   scanf("\n %d",&num);

   for(temp=1;temp<=num;temp++)
   {
       fact=fact*temp;

       printf("\n factorial of %d = %d",temp,fact);
   }

   getch();
   return 0;
}
