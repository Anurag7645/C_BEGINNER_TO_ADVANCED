#include<stdio.h>
#include<conio.h>
int main()
   {
   long int n,a,b,d1,d2,d3,d4,d5,rev;
   clrscr();
   printf("Enter the number \n");
   scanf("%ld", &n);
   a=n/8;
   while (a>=0)
   {
	b=a%8;
	a=n/8;
	a--;
   }
   d5=b%10;
   b=b/10;
   d4=b%10;
   b=b/10;
   d3=b%10;
   b=b/10;
   d2=b%10;
   b=b/10;
   d1=b%10;
   rev=d5*10000+d4*1000+d3*100+d2*10+d1;
   printf("The Octal equivalent of the number is %ld\n", rev);
   getch();
   return 0;
   }

