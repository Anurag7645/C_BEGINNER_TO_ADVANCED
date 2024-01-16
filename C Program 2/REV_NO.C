#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   long int n,d1,d2,d3,d4,d5,rev;
   clrscr();
   printf("Enter the five digit number ");
   scanf("%li", &n);
   d5=n%10;
   n=n/10;
   d4=n%10;
   n=n/10;
   d3=n%10;
   n=n/10;
   d2=n%10;
   n=n/10;
   d1=n%10;
   rev=d5*10000+d4*1000+d3*100+d2*10+d1;
   printf("The reverse of the number is %li\n", rev);
   getch();
   return 0;
   }

