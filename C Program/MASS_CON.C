#include<stdio.h>
#include<conio.h>
void mass(float*, float*, float*);
int main()
{
   float kg,lb,t;
   clrscr();
   printf("Enter the mass in Kg \n");
   scanf("%f", &kg);
   mass(&kg, &lb, &t);
   printf("The mass is %f kg, %f Pound and %f Ton", kg, lb, t);
   getch();
   return 0;
}
void mass(float *kg, float *lb, float *t)
{
   *lb=*kg*2.205;
   *t=*kg/1000;
}
