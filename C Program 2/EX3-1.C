#include<stdio.h>
#include<conio.h>
int main()
{
   int q,d; float r,t;
   clrscr();
   printf("Enter the total number of item purchased:\n ");
   scanf("%d", &q);
   printf("Enter the rate:\n ");
   scanf("%f", &r);
   if (q>1000)
   d=10;
   else
   d=0;
   t=(q*r)-(q*r*d/100);
   printf("The total expense is:\n %f", t);
   getch();
   return 0;
}