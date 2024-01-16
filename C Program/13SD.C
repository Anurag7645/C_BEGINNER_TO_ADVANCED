#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int i,s=0,arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
   float sd; int av;
   clrscr();
   for (i=0;i<=14;i++)
     s=s+arr[i];
     av=s/15;
   for (i=0;i<=14;i++)
   {
     if(arr[i]<0)
       arr[i]=-arr[i];
   }
   sd=(sqrt(pow((arr[i]-av),2))/15);
   printf("The standar deviation is= %f", sd);
   getch();
   return 0;
}
