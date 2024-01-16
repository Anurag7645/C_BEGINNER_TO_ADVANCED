#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   float a,b,c,s,a1;
   clrscr();
   printf("Enter the sides of triangle ");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   a1=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("The area of triangle is %f",a1);
   getch();
   return 0;
   }