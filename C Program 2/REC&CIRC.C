#include<stdio.h>
#include<conio.h>
int main()
  {
  float l, b, a1, p, r, c, a2;
  clrscr();
  printf("Enter the lenght and breadth \n");
  scanf("%f %f", &l, &b);
  printf("Enter the radius of circle \n");
  scanf("%f", &r);
  a1=l*b;
  p=2*(l+b);
  a2=3.14*r*r;
  c=2*3.14*r;
  printf("The area of rectangle is %f\n", a1);
  printf("The perimeter of rectance is %f\n", p);
  printf("The area of circle is %f\n", a2);
  printf("The circumference is %f\n", c);
  getch();
  return 0;
  }
