#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
  {
  float a,s,c,t;
  clrscr();
  printf("Enter the angle");
  scanf("%f", &a);
  a=a*(22/7)/180;
  s=sin(a);
  printf("Sine = %f\n", s);
  c=cos(a);
  printf("Cosine = %f\n", c);
  t=tan(a);
  printf("Tan = %f", t);
  getch();
  return 0;
  }

