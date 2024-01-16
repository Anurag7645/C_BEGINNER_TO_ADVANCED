#include<stdio.h>
#include<conio.h>
int main()
	{
	  int l,b,a,p;
	  clrscr();
	  printf("Enter the length and breadth of rectangle \n");
	  scanf("%d%d", &l, &b);
	  a=l*b; p=2*(l+b);
	  if (a>p)
		printf("Area is greater than perimeter \n");
	  else
		printf("Perimeter is greater than area \n");
	  getch();
	  return 0;
	}