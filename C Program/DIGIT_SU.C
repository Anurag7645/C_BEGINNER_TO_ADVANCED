#include<stdio.h>
#include<conio.h>
int rsum(long int);
int main()
{
   long int n,sum;
   clrscr();
   printf("Enter the 5 digit number \n");
   scanf("%ld", &n);
   sum=rsum(n);
   printf("Sum of is= %ld \n", sum);
   getch();
   return 0;
}
int rsum(long int n)
{
   long int d, sum=0;
   if (n!=0)
   {
     d=n%10;
     sum=rsum(n/10)+d;
   }
   else
   return sum;
}