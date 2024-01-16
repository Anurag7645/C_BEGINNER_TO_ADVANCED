#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   int a;
   clrscr();
   printf("Enter the year ");
   scanf("%d", &a);
   if (a%4==0)
   printf("Its Leap year");
   else
   printf("Its not Leap year");
   getch();
   return 0;
   }