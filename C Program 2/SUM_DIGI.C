#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   long int n,d1,d2,d3,d4,d5,sum,a,b,c,d;
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
   printf("%ld %ld %ld %ld %ld \n", d5, d4, d3, d2, d1);
   sum=d5+d4+d3+d2+d1;
   printf("The sum of the digits is %li\n", sum);
   getch();
   return 0;
   }

