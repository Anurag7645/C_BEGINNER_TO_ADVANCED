#include<stdio.h>
#include<conio.h>'
int main()
	{
	  float bs,hra,da,gs;
	  clrscr();
	  printf("Enter basic salary \n");
	  scanf("%f", &bs);
	  if (bs<1500)
	  {
		hra=bs*10/100;
		da=bs*90/100;
	  }
	  else
	  {
		hra=500;
		da=bs*98/100;
	  }
	  gs=bs+hra+da;
	  printf("Total Salary is Rs. %f", gs);
	  getch();
	  return 0;
	  }