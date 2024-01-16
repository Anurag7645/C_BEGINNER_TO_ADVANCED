#include<stdio.h>
#include<conio.h>
int rec(int);
int main()
{
   int x,sum;
   clrscr();
   printf("Enter the number to get sum of natural no. upto it \n");
   scanf("%d", &x);
   sum=rec(x);
   printf("The sum of natural no. upto %d is %d \n", x, sum);
   getch();
   return 0;
}
int rec(int x)
{
   int s;
   if (x==1)
     return 1;
   else
     s=x+rec(x-1);
   return s;
}
