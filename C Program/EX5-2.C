#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   float n,m,a;
   clrscr();
   printf("Enter the number \n");
   scanf("%f", &n);
   printf("Enter the another number \n");
   scanf("%f", &m);
   a=pow(n,m);
   printf("The answer is %f \n", a);
   getch();
   return 0;
}
