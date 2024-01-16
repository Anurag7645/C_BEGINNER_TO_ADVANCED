#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n,bin=0,rem=0,p=0;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   while (n>0)
   {
     rem=n%2;
     n=n/2;
     bin=bin+rem*pow(10,p);
     p++;
   }
   printf("The binary equivalent is %d \n", bin);
   getch();
   return 0;
}