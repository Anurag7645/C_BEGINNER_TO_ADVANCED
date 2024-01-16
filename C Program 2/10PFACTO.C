#include<stdio.h>
#include<conio.h>
int pf(int);
int main()
{
   int n,i;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   pf(n);
   printf("The prime factor of %d are %d", n, i);
   getch();
   return 0;
}
int pf(int n)
{
   int r,i=2,f;
   if (n!=0)
   {
     if (n%i==0)
     {
     f=pf(n/i);
       return i;
       i++;
     }
     else
     i++;
   }
}
