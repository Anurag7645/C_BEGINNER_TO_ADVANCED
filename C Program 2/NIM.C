#include<stdio.h>
#include<conio.h>
int main()
{
   int n=21,u,c;
   clrscr();
   printf("You can pick 1, 2, 3 or 4 Matchstick \n");
   while (n>1)
   {
	printf("Pick Matchstick \n");
	scanf("%d", &u);
	if (u==1)
		c=4;
	if (u==2)
		c=3;
	if (u==3)
		c=2;
	if (u==4)
		c=1;
	n=n-(c+u);
	printf("Computer Picks %d Matchstick \n", c);
	printf("Remaining Matchstick = %d \n", n);
   }
   if (n==1)
   printf("Sorry You Loose The Game \n");
   getch();
   return 0;
}


