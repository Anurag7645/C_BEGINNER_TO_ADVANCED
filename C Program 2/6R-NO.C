#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,j;
   clrscr();
   for (n=1729;n<=10000;n++)
   {
	for (i=1;i<=100;i++)
	{
		for (j=1;j<=100;j++)
		{
			if (n==i*i*i+j*j*j)
			printf("%d is a Ramanujan number \n", n);
			break;
		}
		continue;
	}
   }
   getch();
   return 0;
}


