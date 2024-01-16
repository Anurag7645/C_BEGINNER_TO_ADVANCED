#include<stdio.h>
#include<conio.h>
int main()
{
   int n,fac=1,i;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   i=n;
   while(i>=1)
   {
	fac=fac*i;
	i--;
   }
   printf("Factorial of = %d \n", fac);
   getch();
   return 0;
}
