#include<stdio.h>
#include<conio.h>
int main()
	{
	  int r,s,a;
	  clscr();
	  printf("Enter the age of Ram, Shyam and Ajay \n");
	  scanf("%d%d%d", &r, &s, &a);
	  if (r>s)
	  if (a>s)
		printf("Shyam is the Youngest \n");
	  if (s>r)
	  if (a>r)
		printf("Ram is the Youngest \n");
	  if (r>s)
	  if (s>a)
		printf("Ajay is the Youngest \n");
	  getch();
	  return 0;
	  }