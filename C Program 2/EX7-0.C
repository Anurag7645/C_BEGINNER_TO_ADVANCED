#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,k;
   clrscr();
   for (i=1;i<=3;i++)
   {
	for (j=1;j<=3;j++)
	{
		for (k=1;k<=3;k++)
		{
			if(i==3&&j==3&&k==3)
				goto out;
			else
				printf("%d %d %d \t", i, j, k);
		}
	}
   }
   out :
	printf("Out of Loops at last! \n");
   getch();
   return 0;
}