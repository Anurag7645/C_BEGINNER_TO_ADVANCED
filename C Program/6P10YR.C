#include<stdio.h>
#include<conio.h>
int main()
{
   long int n=100000; int i;
   clrscr();
   for (i=10;i>=1;i--)
   {
	n=n-(n*0.1);
	printf("The pupulation %d year ago was %ld \n", i, n);
   }
   getch();
   return 0;
}
