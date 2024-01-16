#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	clrscr();
	printf("Enter a character from keyboard \n");
	scanf("%c", &x);
	if (x>=65&&x<=90)
		printf("The character is an Upper case letter \n");
	if (x>=97&&x<=122)
		printf("The character is lower case letter \n");
	if (x>=48&&x<=57)
		printf("The character is a digit \n");
	if ((x>=0&&x<=47)||(x>=58&&x<=64)||(x>=91&&x<=96)||(x>122))
		printf("The character is special symbol \n");
	getch();
	return 0;
}

