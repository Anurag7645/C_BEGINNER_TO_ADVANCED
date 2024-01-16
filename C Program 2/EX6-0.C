#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int n;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   if (n<=5)
	goto s;
   else
   {
	printf("Else \n");
	printf("Program Ends \n");
	getch();
	exit(1);
   }
   s :
	printf("Goto \n");
   getch();
   return 0;
}
