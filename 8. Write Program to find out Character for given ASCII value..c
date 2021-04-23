///8.Write Program to find out Character for given ASCII value.

#include<stdio.h>
#include<conio.h>

int main()
{
    char no;
  printf("=====================================*******====================================");

    printf("\n Enter any ASCII(0-127) = ");
    scanf("%d",&no);

    printf("\n ASCII of %d = %c",no,no);

  printf("\n=====================================*******====================================\n");

  getch();
  return 0;
}
