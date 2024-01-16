#include<stdio.h>
#include<conio.h>
int main()
	{
	  float cp,sp,p,l;
	  clrscr();
	  printf("Enter the Cost price Rs. \n");
	  scanf("%f", &cp);
	  printf("Enter the Selling price Rs. \n");
	  scanf("%f", &sp);
	  p=sp-cp;
	  l=cp-sp;
	  if (p>0)
		printf("The seller made of profit Rs. %f", p);
	  else
	  {
		if (l>0)
		printf("The seller incurred loss of Rs. %f", l);
	  else
		printf("There is no profit or loss");
	  }
	  getch();
	  return 0;
	  }