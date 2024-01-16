#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float w,h,bmi;
	clrscr();
	printf("Enter your Weight(in Kg) and height(in m) \n");
	scanf("%f%f", &w, &h);
	bmi=w/pow(h,2);
	printf("Your BMI is %f \n", bmi);
	getch();
	return 0;
}