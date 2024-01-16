#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,arr[5];
   clrscr();
   printf("Enter the elements of array(5) \n");
   for (i=0;i<=4;i++)
     scanf("%d", &arr[i]);
     n=arr[0];
   for (i=0;i<=4;i++)
   {
     if(arr[i]<n)
       n=arr[i];
     else
       arr[i]=arr[i+1];
   }
   printf("The smallest element is= %d",n);
   getch();
   return 0;
}