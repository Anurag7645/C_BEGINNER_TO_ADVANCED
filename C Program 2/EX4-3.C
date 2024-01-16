#include<stdio.h>
#include<conio.h>
int main()
{
	char g; int q,yos,sal;
	clrscr();
	printf("Enter your Gender, Year of Service and Qualification(0=G,1=PG) \n");
	scanf("%c%d%d", &g, &yos, &q);
	if (g=='m'&&yos>=10&&q==1)
		sal=11000;
	else if ((g=='m'&&yos>=10&&q==0)||(g=='f'&&yos<10&&q==1)||(g=='m'&&yos<10&&q==1))
		sal=10000;
	else if (g=='f'&&yos>=10&&q==1)
		sal=12000;
	else if (g=='f'&&yos>=10&&q==0)
		sal=9000;
	else if (g=='f'&&yos<10&&q==0)
		sal=6000;
	printf("Salary of Employee = %d\n", sal);
	getch();
	return 0;
}
