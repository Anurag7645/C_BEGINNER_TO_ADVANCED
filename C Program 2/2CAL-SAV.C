#include<stdio.h>
#include<conio.h>
#include<math.h>
void cal(int *sum, float *av, double *sd);
int main()
{
   int sum=0; float av=0; double sd=0;
   clrscr();
   cal(&sum, &av, &sd);
   printf("Sum= %d \nAverage= %f \nStandard deviation= %lf \n", sum, av, sd);
   getch();
   return 0;
}
void cal(int *sum, float *av, double *sd)
{
   int n1,n2,n3,n4,n5;
   printf("Enter 5 numbers (n1,n2,n3...) \n");
   scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
   *sum=n1+n2+n3+n4+n5;
   *av=*sum/5;
   *sd=sqrt((pow((n1-*av),2)+pow((n2-*av),2)+pow((n3-*av),2)+pow((n4-*av),2)+pow((n5-*av),2))/5);
}