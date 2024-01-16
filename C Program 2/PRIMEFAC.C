#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i;
   clrscr();
   printf("\nEnter the number \n");
   scanf("%d", &n);
   printf("Prime factor of %d are ",n);
   for(i=1;i<=20;i++)
   {
     if (n%2==0)
     {
       printf("2, ");
       n=n/2;
     }
     if (n%3==0)
     {
       printf("3, ");
       n=n/3;
     }
     if (n%5==0)
     {
       printf("5, ");
       n=n/5;
     }
     if (n%7==0)
     {
       printf("7, ");
       n=n/7;
     }
   }
   getch();
   return 0;
}
