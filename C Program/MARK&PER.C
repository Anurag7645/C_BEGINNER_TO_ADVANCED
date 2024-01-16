#include<stdio.h>
#include<conio.h>
int main()
{
   int m1, m2, m3, m4, m5, mt;
   float per;
   clrscr();
   printf("Enter the marks in 5 subjects");
   scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
   mt=m1+m2+m3+m4+m5;
   per=mt/5;
   printf("Total marks obtained(Out of 500) = %d\n", mt);
   printf("Percentage Marks = %f", per);
   getch();
   return 0;

   }