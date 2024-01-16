#include<stdio.h>
#include<conio.h>
int main()
{
   int num=0,p=0,n=0,z=0;
   char ans='y';
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &num);
   while (ans=='y')
   {
	printf("Do you want to Enter again \n");
	scanf("%*c%c", &ans);
	if (num>0)
		p++;
	if (num<0)
		n++;
	if (num==0)
		z++;
	if (ans=='y')
	{
		printf("Enter the number again \n");
		scanf("%d", &num);
	}
   }
   printf("You have entered %d positive number \n", p);
   printf("You have entered %d negative number \n", n);
   printf("You have entered %d zero \n", z);
   getch();
   return 0;
}
