#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j=0,n,arr[]={1,2,2,3,3,4,5,5,6,6,7,7,7,8,8,8,8,9,0,0};
   clrscr();
   printf("Enter the number \n");
   scanf("%d", &n);
   for (i=0;i<=19;i++)
   {
     if(n==arr[i])
     j++;
   else
     arr[i]=arr[i+1];
   }
   printf("%d is %d times in the array \n", n, j);
   getch();
   return 0;
}