#include<stdio.h>
#include<conio.h>
void swap(int*, int*, int*);
int main()
{
   int x,y,z;
   clrscr();
   printf("Enter the numbers (x,y and z) \n");
   scanf("%d%d%d", &x, &y, &z);
   swap(&x, &y, &z);
   printf("After circular shifting values 1 time x= %d y= %d z= %d \n",x,y,z);
   swap(&x, &y, &z);
   printf("After circluar shifting values 2 time x= %d y= %d z= %d \n",x,y,z);
   swap(&x, &y, &z);
   printf("After circular shifting values 3 time x= %d y= %d z= %d \n",x,y,z);
   getch();
   return 0;
}
void swap(int *a, int *b, int *c)
{
   int *t, *s;
     *t=*b;
     *b=*a;
     *s=*c;
     *a=*s;
     *c=*t;
}
