#include<stdio.h>
#include<conio.h>
int main()
{
   int a,p;
   clrscr();
   printf("00:00 12 AM - Midnight \n");
   for (a=1;a<=11;++a)
   {
	printf("%d:00 %d AM \n", a, a);
   }
   printf("12:00 12 PM - Noon \n");
   for (p=13,a=1;p<=23,a<=11;p++,a++)
   {
	printf("%d:00 %d PM \n", p,a);
   }
   getch();
   return 0;
}