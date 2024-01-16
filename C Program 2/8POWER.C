#include<stdio.h>
#include<conio.h>
#include<math.h>
float power(float, int);
int main()
{
   float x,p; int y;
   clrscr();
   printf("Enter two number \n");
   scanf("%f %d", &x, &y);
   p=power(x,y);
   printf("%f raise to power %d is %f", x, y, p);
   getch();
   return 0;
}
float power(float x, int y)
{
   float p;
   p=pow(x,y);
   return(p);
}
