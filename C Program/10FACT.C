#include<stdio.h>
#include<conio.h>
int rec(int);
int main()
{
   int x,fact;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &x);
   fact=rec(x);
   printf("The factorial value of %d is %d \n", x, fact);
   getch();
   return 0;
}
int rec(int x)
{
   int f;
   if (x==1)
     return 1;
   else
    f=x*rec(x-1);
   return f;
}

