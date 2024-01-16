#include<stdio.h>
#include<conio.h>
float sq(float);
int main()
{
   float a,b;
   clrscr();
   printf("Enter the number \n");
   scanf("%f", &a);
   b=sq(a);
   printf("Square of %f is %f \n", a, b);
   getch();
   return (0);
}
float sq(float a)
{
   float y;
   y=a*a;
   return(y);
}