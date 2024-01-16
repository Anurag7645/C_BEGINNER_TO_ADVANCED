#include<stdio.h>
#include<conio.h>
#include<math.h>
#define CAPITAL(x) (x>=65&&x<=90?1:0)
#define SMALL(x) (x>=97&&x<=122?1:0)
#define ALPHABET(x) (SMALL(x)||CAPITAL(x))
#define BIGA(x,y) (x>y?x:y)
#define MEAN(x,y) ((x+y)/2)
#define ABSOLUTE(x) (x<0?(-x):x)
int main()
{
   char x; int a,b,c; float m;
   clrscr();
   printf("\n Enter any Alphabet \n");
   scanf("%c", &x);
   if(SMALL(x) ==1)
     printf("You entered a small letter \n");
   if(CAPITAL(x) ==1)
     printf("You entered a capital letter \n");
   if(ALPHABET(x) !=1)
     printf("You have not entered alphabet \n");
   printf("Enter any two number \n");
   scanf("%d%d", &a, &b);
   c=BIGA(a,b);
   printf("%d is bigger \n", c);
   printf("Enter any two number to get its mean \n");
   scanf("%d%d", &a, &b);
   m=MEAN(a,b);
   printf("The mean is= %f \n", m);
   printf("Enter any number to get its absolute value\n");
   scanf("%d", &a);
   b=ABSOLUTE(a);
   printf("The absolute value of %d is= %d\n", a, b);
   getch();
   return 0;
}
