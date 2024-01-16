#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i;
   clrscr();
   for (n=3;n<=300;n++)
   {
	for (i=2;i<=n-1;i++)
	{
		if(n%i==0)
			break;
	}
   if (i==n)
	printf("%d \t", n);
   }
   getch();
   return 0;
}