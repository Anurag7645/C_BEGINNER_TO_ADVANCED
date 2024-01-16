#include<stdio.h>
#include<conio.h>
void a1(int, float*a);
void p1(int, float*p); //Can use one function only to call both a & p..
int main()
{
   int r; float a, p;
   clrscr();
   printf("Enter the radius \n");
   scanf("%d", &r);
   a1(r, &a);
   p1(r, &p);
   printf("The area is %f AND, \nperimeter is %f \n", a, p);
   getch();
   return 0;
}
void a1(int r, float *a)
{
   *a=3.14*r*r;
}
void p1(int r, float *p)
{
   *p=2*3.14*r;
}