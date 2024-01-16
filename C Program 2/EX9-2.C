#include<stdio.h>
#include<conio.h>
#include<math.h>
void power(int, int, int*);
void fact(int, int*);
int main()
{
   int x,y,p,f,n;
   clrscr();
   printf("Enter the numbers (x and y) \n");
   scanf("%d%d", &x, &y);
   power(x, y, &p);
   printf("%d raise to power %d is %d \n", x, y, p);
   printf("Enter the number to get its factorial \n");
   scanf("%d", &n);
   fact(n, &f);
   printf("Factorial value of %d is %d\n", n, f);
   getch();
   return 0;
}
void power(int x, int y,int *p)
{
   *p=pow(x,y);
}
void fact(int n, int *f=0)
{
   int i,fac;
   for (i=1;i<=n;i++)
     fac=fac*i;
     *f=fac;
}

