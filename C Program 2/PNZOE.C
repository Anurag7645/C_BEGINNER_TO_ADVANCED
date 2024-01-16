#include<stdio.h>
#include<conio.h>
int main()
{
   int i,p=0,n=0,z=0,o=0,e=0,arr[5];
   clrscr();
   printf("Enter the elements(5) \n");
   for(i=0;i<=4;i++)
     scanf("%d", &arr[i]);
   for (i=0;i<=4;i++)
   {
     if (arr[i]<=0)
       n++;
     if (arr[i]>=0)
       p++;
     if (arr[i]==0)
       z++;
     if (arr[i]>=0)
     {
       if (arr[i]%2==0)
	 e++;
       if (arr[i]%2!=0)
	 o++;
     }
   }
   printf("You have entered %d positive %d negative %d zeros %d evens and %d odds \n", p,n,z,e,o);
   getch();
   return 0;
}