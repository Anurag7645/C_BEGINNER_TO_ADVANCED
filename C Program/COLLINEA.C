#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
	{
	  int x1,x2,x3,y1,y2,y3;
	  float a,b,c,s,ar;
	  clrscr();
	  printf("Enter the point (x1,y1) \n");
	  scanf("%d%d", &x1, &y1);
	  printf("Enter the point (x2,y2) \n");
	  scanf("%d%d", &x2, y2);
	  printf("Enter the point (x3,y3) \n");
	  scanf("%d%d", &x3, &y3);
	  a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	  b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	  c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	  s=(a+b+c)/2;
	  ar=sqrt(s*(s-a)*(s-b)*(s-c));
	  printf("a,b,c,s,Area = %f %f %f %f %f \n", a, b, c, s, ar);
	  if (ar==0)
		printf("The points are collinear");
	  else
		printf("The points are not collinear");
	  getch();
	  return 0;
	}