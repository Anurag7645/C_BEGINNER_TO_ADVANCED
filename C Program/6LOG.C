#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int x,n; float y,sum=0;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   y=(x-1)/x;
   for (n=1;n<=7;n++)
   {
	sum=y+(1/2)*pow(y,n);
   }
	printf("Sum of series = %f \n", sum);
   getch();
   return 0;
}