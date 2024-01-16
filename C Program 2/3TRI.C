#include<stdio.h>
#include<conio.h>
int main()
	{
	  float a,b,c;
	  clrscr();
	  printf("Enter the angles \n");
	  scanf("%f%f%f", &a, &b, &c);
	  if (a+b+c==180)
		printf("The triangle is valid \n");
	  else
		printf("The triangle is not valid \n");
	  getch();
	  return 0;
	}