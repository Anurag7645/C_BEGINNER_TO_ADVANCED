#include<stdio.h>
#include<conio.h>
int main()
{
   int avg, sum=0, i;
   int marks[10];
   clrscr();
   for(i=0;i<=9;i++)
   {
     printf("Enter the Marks\n");
     scanf("%d", &marks[i]);
   }
   for (i=0;i<=9;i++)
   sum=sum+marks[i];
   avg=sum/10;
   printf("The average mark= %d", avg);
   getch();
   return 0;
}