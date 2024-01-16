#include<stdio.h>
#include<conio.h>
int main()
  {
  float ft, c;
  clrscr();
  printf("Enter the temp in Fahrenheit \n");
  scanf("%f", &ft);
  //Formula
  c=(ft-32)*5/9;
  printf("The temp in Centigrade is %f", c);
  getch();
  return 0;
  }