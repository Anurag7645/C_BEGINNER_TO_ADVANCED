#include<stdio.h>
#include<conio.h>
int main()
{
	int c,s;
	clrscr();
	printf("Enter your class and no. of subject failed. \n");
	scanf("%d %d", &c, &s);
	switch (c)
      {
	case 1:
	if (s<=3)
		printf("You will get %d grace marks \n", s*5);
	else
		printf("You will get no grace marks \n");
	break;
	case 2:
	if (s<=2)
		printf("You will get %d grace marks \n", s*4);
	else
		printf("You will get no grace marks \n");
	break;
	case 3:
	if (s<=1)
		printf("You will get 5 grace marks \n");
	else
		printf("You will get no grace marks \n");
	break;
	default :
	printf("You have entered wrong class");
      }
	getch();
	return 0;
}