#include<stdio.h>
#include<conio.h>
int main()
{
	int h,ts; float cc;
	clrscr();
	printf("Enter the hardness, carbon content and tensile strength of steel \n");
	scanf("%d%f%d", &h, &cc, &ts);
	if (h>50&&cc>0.7&&ts>5600)
		printf("The steel is of grade 10 \n");
	else if ((h>50&&cc>0.7)&&(ts<5600))
		printf("The steel is of grade 9 \n");
	else if ((cc>0.7&&ts>5600)&&(h<50))
		printf("The steel is of grade 8 \n");
	else if ((h>50)&&ts>5600)&&(cc<0.7))
		printf("The steel is of grade 7 \n");
	else if ((h>50&&ts<5600&&cc<0.7)||(h<50&&ts>5600&&cc<0.7)||(h<50&&ts<5600&&cc>0.7))
		printf("The steel is of grade 6 \n");
	else
		printf("The steel is of grade 5 \n");
	getch();
	return 0;
}
