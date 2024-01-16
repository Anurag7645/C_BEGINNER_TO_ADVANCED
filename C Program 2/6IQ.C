#include<stdio.h>
#include<conio.h>
int main()
{
   int y; float i=0,x;
   clrscr();
   for (y=1;y<=6;y++)
   {
	for (x=5;x<=12;x++)
	{
		x=x+0.5;
		i=2+(y+(0.5*x));
		printf("The Intelligence of a person can be: \n");
		printf("%f \n", i);
	}
   }
   getch();
   return 0;
}


