#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,a2,b2,c2;
	clrscr();
	printf("Enter the sides of triangle \n");
	scanf("%d%d%d", &a, &b, &c);
	a2=pow(a,2); b2=pow(b,2); c2=pow(c,2);
	if (a==b&&b==c)
		printf("The triangle is equilateral \n");
	if ((a==b&&c!=a)||(a==c&&b!=a)||(b==c&&a!=b))
		printf("The triangle is isosceles \n");
	if ((a2==b2+c2)||(b2==a2+c2)||(c2==a2+b2))
		printf("The triangle is right angled \n");
	else
		printf("The triangle is scalene \n");
	getch();
	return 0;
}