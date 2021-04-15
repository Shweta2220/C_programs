//==================================================================================================================================
//2) Write Program to accept student details from user as student name , roll number, course, city
//Display all information after accepting info using single printf statement.
//==================================================================================================================================

#include<stdio.h>       //input,output
#include<conio.h>
int main()
{
    int  Roll_No=0;
    char Name[5];
    char Course[6];
    char City[6];

    printf("\n Roll No.= ");
    scanf("%d",&Roll_No);
    printf("\n Student Name= ");
    scanf("%s",&Name);
    printf("\n Course= ");
    scanf("%s",&Course);
    printf("\n City=");
    scanf("%s",&City);

  printf("=====================================*******====================================\n");
  printf("\n Roll No=%d \n Student Name=%s \n Course=%s \n City=%s",Roll_No,Name,Course,City);
  printf("\n===================================*******======================================");
    getch();
}
