#include<stdio.h>
#include<conio.h>
int main()
{
   int p,b,h;
   clrscr();
   for (p=1;p<=30;p++)
   {
	for (b=1;b<=30;b++)
	{
		for (h=1;h<=30;h++)
		{
		if (p*p==b*b+h*h)
		printf("%d, %d and %d are Pythagorean Triplets \t", p,b,h);
		}
	}
   }
   getch();
   return 0;
}