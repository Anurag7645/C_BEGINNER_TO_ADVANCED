#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n=0,rem=0,p=0,oct=0;
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   while (n>0)
   {
	rem=n%8;
	n=n/8;
	oct=oct+rem*pow(10,p);
	p++;
   }
   printf("The Octal equivalent is = %d \n", oct);
   getch();
   return 0;
}