#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,t;
   clrscr();
   printf("Enter the number to get it's table \n");
   scanf("%d", &n);
   for (i=1;i<=10;i++)
   {
	t=n*i;
	printf("%d * %d = %d \n", n,i,t);
   }
   getch();
   return 0;
}