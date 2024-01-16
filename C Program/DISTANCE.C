#include<stdio.h>
#include<conio.h>
int main()
  {
  float d, dm, dcm, df, di;
  clrscr();
  printf("Enter the distance(in Km)= ");
  scanf("%f", &d);
  //Formula
  dm=d*1000;
  dcm=dm*100;
  di=dcm/2.54;
  df=di/12;
  printf("The distance in meter = %f\n", dm);
  printf("The distance in centimeter = %f\n", dcm);
  printf("The distance in feet = %f\n", df);
  printf("The distance in inches = %f", di);
  getch();
  return 0;
  }