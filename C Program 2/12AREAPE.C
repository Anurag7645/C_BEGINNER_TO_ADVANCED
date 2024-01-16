#define PI 3.141
#define PERIC(r) (2*PI*r)
#define PERIS(a) (4*a)
#define PERIR(l,b) (2*(l+b))
#define PERIT(a,b,c) (a+b+c)
#define AREAC(r) (PI*r*r)
#define AREAS(a) (a*a)
#define AREAR(l,b) (l*b)
#define AREAT(a,b,c,sp) (sqrt(sp*(sp-a)*(sp-b)*(sp-c)))
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int r,x,l,a,b,c,sp; float area,peri;
   clrscr();
   printf("\nEnter the radius of circle\n");
   scanf("%d", &r);
   peri=PERIC(r);
   area=AREAC(r);
   printf("The perimeter of circle is= %f and area is= %f \n", peri, area);
   printf("Enter the side of square\n");
   scanf("%d", &x);
   peri=PERIS(x);
   area=AREAS(x);
   printf("The perimeter of square is= %f and area is= %f \n", peri, area);
   printf("Enter the length and breadth of rectangle \n");
   scanf("%d%d", &l, &b);
   peri=PERIR(l,b);
   area=AREAR(l,b);
   printf("The perimeter of rectangle is= %f and area is= %f \n", peri, area);
   printf("Enter the sides of triangle (a,b,c) \n");
   scanf("%d%d%d", &a, &b, &c);
   sp=(a+b+c)/2;
   peri=PERIT(a,b,c);
   area=AREAT(a,b,c,sp);
   printf("The perimeter of triangle is= %f and area is= %f \n", peri, area);
   getch();
   return 0;
}