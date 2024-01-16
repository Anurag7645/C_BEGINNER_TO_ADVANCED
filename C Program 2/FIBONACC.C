#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
   int t=25, i, n=0;
   clrscr();
   for (i=1;i<=t;i++)
   {
     printf("%d \t",fib(n));
     n++;
   }
   getch();
   return 0;
}
int fib(int n)
{
   if(n==0||n==1)
     return n;
   else
     return (fib(n-1)+fib(n-2));
}