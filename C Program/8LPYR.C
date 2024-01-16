#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int leap(int);
int main()
{
   int n;
   clrscr();
   printf("Enter the year \n");
   scanf("%d", &n);
   leap(n);
   getch();
   return 0;
}
int leap(int n)
{
  if(n%4==0)
    printf("%d is a leap year", n);
  else
    printf("%d is not leap year", n);
  return ;
}

