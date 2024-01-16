#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,a1[5],a2[5];
   clrscr();
   printf("Enter the 5 elements: \n");
   for (i=0;i<=4;i++)
     scanf("%d", &a1[i]);
   for (i=0,j=4;i<=4,j>=0;i++,j--)
     a2[j]=a1[i];
   printf("Elements in reverse order: \n");
   for (i=0;i<=4;i++)
     printf("%d \t", a2[i]);
   getch();
   return 0;
}