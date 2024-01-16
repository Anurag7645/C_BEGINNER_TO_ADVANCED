#include<stdio.h>
#include<conio.h>
int main()
{
 int p, n;
 float r, i;
 clrscr();
 printf("Enter the value of p \n");
 scanf("%d", &p);
 printf("Enter the value of n \n");
 scanf("%d", &n);
 printf("Enter the value of r \n");
 scanf("%f", &r);

 i=p*n*r/100;
 printf("The interest is Rs. %f", i);
 getch();
 return 0;

}