#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
  {
  int amt,n1,n2,n5,n10,n50,n100,total;
  clrscr();
  printf("Enter the amount \n");
  scanf("%d", &amt);
  n100=amt/100;
  amt=amt%100;
  n50=amt/50;
  amt=amt%50;
  n10=amt/10;
  amt=amt%10;
  n5=amt/5;
  amt=amt%5;
  n2=amt/2;
  amt=amt%2;
  n1=amt/1;
  amt=amt%1;
  total=n1+n2+n5+n10+n50+n100;
  printf("Smallest number of notes= %d", total);
  getch();
  return 0;
  }