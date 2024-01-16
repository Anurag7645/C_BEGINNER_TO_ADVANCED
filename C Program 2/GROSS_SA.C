#include<stdio.h>
#include<conio.h>
int main()
  {
  int sal;
  float da, ra, gs;
  clrscr();
  printf("Enter the SalaryRs. ");
  scanf("%d", &sal);
  //Dearness Allowance is 40%
  da=sal*0.4;
  printf("Dearness Allowance is Rs.%f\n", da);
  //Rent Allowance is 20%
  ra=sal*0.2;
  printf("Rent Allowance is Rs.%f\n", ra);
  gs=sal-(da+ra);
  printf("Gross Salary is Rs.%f", gs);
  getch();
  return 0;
  }