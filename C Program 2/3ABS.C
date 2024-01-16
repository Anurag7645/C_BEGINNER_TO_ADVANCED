#include<stdio.h>
#include<conio.h>
int main()
	{
	  int n;
	  clrscr();
	  printf("Enter the number \n");
	  scanf("%d", &n);
	  if (n>0)
		printf("The absolute value is %d \n", n);
	  else
	  {
		n=-(n);
		printf("The absolute value is %d \n", n);
	  }
	  getch();
	  return 0;
	}