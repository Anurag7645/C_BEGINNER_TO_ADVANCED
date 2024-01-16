#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
   int n,fac;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   fac=fact(n);
   printf("Factorial value of %d is %d \n", n, fac);
   getch();
   return 0;
}
int fact (int n)
{
   int i, fac=1;
   for(i=1;i<=n;i++)
   fac=fac*i;
   return(fac);
}