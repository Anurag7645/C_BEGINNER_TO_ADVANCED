#include<stdio.h>
#include<conio.h>
#include<math.h>
int rec(int, int);
int main()
{
   int n,bin=0,rem,p=0;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   bin=rec(n, p);
   printf("The binary equivalent is %d \n", bin);
   getch();
   return 0;
}
int rec(int n, int p)
{
   int rem, bin;
   if (n==0)
     return 0;
   else
     rem=n%2;
     bin=rec(n/2,p+1)+rem*pow(10,p);
   return bin;
}