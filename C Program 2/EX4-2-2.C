#include<stdio.h>
#include<conio.h>
int main()
{
	char s,ms;
	int age;
	clrscr();
	printf("Enter age, gender and marital status \n");
	scanf("%d%c%c", &age, &s, &ms);
	if (ms=='M')
		printf("Driver should be insured \n");
	else if((ms=='U'&&s=='M'&&age>30))
		printf("Driver should be insured \n");
	else if ((ms=='U'&&s=='F'&&age>25))
		printf("Driver should be insured \n");
	else
		printf("Driver should not be insured \n");
	getch();
	return 0;
}