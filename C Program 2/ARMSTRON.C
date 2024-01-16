#include<stdio.h>
#include<conio.h>
int main()
{
   int n=1,d3,d2,d1,a,b;
   clrscr();
   while (n<=500)
   {
   d3=n%10;
   a=n/10;
   d2=a%10;
   b=a/10;
   d1=b%10;
	if (d3*d3*d3+d2*d2*d2+d1*d1*d1==n)
		printf("%d \n", n);
	n++;
   }
   getch();
   return 0;
}