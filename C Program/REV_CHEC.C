#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   long int n,d1,d2,d3,d4,d5,rev,a,b,c,d;
   clrscr();
   printf("Enter the five digit number ");
   scanf("%li", &n);
   d5=n%10;
   a=n/10;
   d4=a%10;
   b=a/10;
   d3=b%10;
   c=b/10;
   d2=c%10;
   d=c/10;
   d1=d%10;
   rev=d5*10000+d4*1000+d3*100+d2*10+d1;
   printf("The reverse of the number is %li\n", rev);
   if
   (rev==n)
   printf("The number is same");
   else
   printf("The number is not same");
   getch();
   return 0;
   }

