#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0;
   clrscr();
   while (i<=255)
   {
	printf("%d %c \n", i, i);
	i++;
   }
   getch();
   return 0;
}