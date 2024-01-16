#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
   {
   int x,y; float r,t,f;
   clrscr();
   printf("Enter the co-ordinates (x,y) ");
   scanf("%d%d", &x,&y);
   r=sqrt((x*x)+(y*y));
   t=atan(y/x);
   f=t*57.29578;
   printf("The polar co-ordinate is (r,0) %f %f\n", r, f);
   getch();
   return 0;
   }