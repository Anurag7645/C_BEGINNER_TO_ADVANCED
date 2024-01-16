#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   int n,a;
   clrscr();
   printf("Enter the number ");
   scanf("%d", &n);
   a=n%2;
   if (a==0)
   printf("The number entered is even ");
   else
   printf("The number entered is odd ");
   getch();
   return 0;
   }
