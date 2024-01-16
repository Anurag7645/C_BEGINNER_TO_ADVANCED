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
   int n1,n2,n3,n4,n5,i; float s=0;
   printf("Enter 5 numbers (n1,n2,n3...) \n");
   scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
   *sum=n1+n2+n3+n4+n5;
   *av=*sum/5;
   for(i=1;i<=12345;i++)
   {
     if(i==n1||i==n2||i==n3||i==n4||i==n5)
     {
       s=s+pow((i-*av),2);
       *sd=sqrt(s/5);
     }
   }
}