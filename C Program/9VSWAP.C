#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
int main()
{
   int x,y;
   clrscr();
   printf("Enter the value of x and y \n");
   scanf("%d %d", &x, &y);
   swap(&x,&y);
   printf("The swaped value of x= %d and y= %d. \n", x, y);
   getch();
   return 0;
}
void swap(int *x, int *y)
{
  int *t;
  *t=*x;
  *x=*y;
  *y=*t;
}