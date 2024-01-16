#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int i,p,t,n; float r,a; char ans;
   clrscr();
   for (i=1;i<=10;i++)
   {
	printf("Enter principal, time and rate \n");
	scanf("%d %d %f", &p, &t, &r);
	printf("How many times per year the interest is calculated? \n");
	scanf("%d", &n);
	a=p*pow((1+r/(100*n)),(n*t));
	printf("Compound interest = Rs.%f \n", a);
	printf("Do you want to calculate again? \n");
	scanf("%*c%c", &ans);
	if (ans=='n')
		break;

   }
   getch();
   return 0;
}
