#include<stdio.h>
#include<conio.h>
int main()
	{
	  int m1,m2,m3,m4,m5; float per;
	  clrscr();
	  printf("Enter the marks obtained in 5 subjects \n");
	  scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	  per=(m1+m2+m3+m4+m5)*100/500;
	  if ((per>60||per==60))
		printf("First division \n");
	  else if (per>=50)
		printf("Second division \n");
	  else if (per>=40)
		printf("Third division \n");
	  else
		printf("Fail \n");
	  getch();
	  return 0;
	}