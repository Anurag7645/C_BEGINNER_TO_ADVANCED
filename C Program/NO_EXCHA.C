#include<stdio.h>
#include<conio.h>
int main()
  {
  int a,b,c,d;
  clrscr();
  printf("Enter the value of c ");
  scanf("%d", &c);
  printf("Enter the value of of d ");
  scanf("%d", &d);
  b=c; a=d;
  printf("The exchanged values = %d %d", a, b);
  getch();
  return 0;
  }