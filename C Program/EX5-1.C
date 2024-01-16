#include<Stdio.h>
#include<conio.h>
int main()
{
   int wd,sal,i=13;
   clrscr();
   while(i<=10)
   {
   printf("Enter the Total hours worked \n");
   scanf("%d", &wd);
   if (wd>=40)
	sal=(wd-40)*120;
   else
	sal=0;
   printf("Your overtime pay is Rs. %d \n", sal);
   i++;
   }
   getch();
   return 0;
}