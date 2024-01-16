#include<stdio.h>
#include<conio.h>
int main()
{
   int n=0,big,small,range;
   char ans='y';
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   big=n; small=n;
   while (ans=='y')
   {
	printf("Do you want to Enter again \n");
	scanf("%*c%c", &ans);
	if (n>big)
		big=n;
	if (n<small)
		small=n;
	if (ans=='y')
	{
		printf("Enter the number again \n");
		scanf("%d", &n);
	}
   }
	range=big-small;
   printf("Range of set is= %d \n", range);
   getch();
   return 0;
}
