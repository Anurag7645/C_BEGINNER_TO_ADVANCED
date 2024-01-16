#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
	{
	  int x,y,k,h,r,a,r2;
	  clrscr();
	  printf("Enter the centre of circle (h,k) \n");
	  scanf("%d%d", &h, &k);
	  printf("Enter the radius \n");
	  scanf("%d", &r);
	  printf("Enter the point (x,y) \n");
	  scanf("%d%d", &x, &y);
	  a=pow(x,2)+pow(h,2)-2*x*h+pow(y,2)+pow(k,2)-2*k*y;
	  r2=r*r;
	  if (a<r2)
		printf("Point lies inside the circle \n");
	  if (a>r2)
		printf("Point lies outside the circle \n");
	  if (a==r2)
		printf("Point lies on the circle");
	  getch();
	  return 0;
	}




