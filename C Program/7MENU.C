#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int n,num,i,fact,r;
   clrscr();
   while(1)
   {
	printf("Choose What you want.. \n");
	printf("1. Factorial \n");
	printf("2. Prime no. check \n");
	printf("3. Odd/Even check \n");
	printf("4. Exit \n");
	printf("Enter the your choice (1,2,3 or 4) \n");
	scanf("%d", &num);
	switch (num)
	{
	  case 1:
	  printf("Enter the number \n");
	  scanf("%d", &n);
	  fact=1;
	  for (i=n;i<=n-1;i++)
	    fact=fact*i;
	    printf("Factorial value= %d \n", fact);
	  break;
	  case 2:
	  printf("Enter the number \n");
	  scanf("%d", &n);
	  for (i=2;i<=n-1;i++)
	    r=n%i;
	    if(r==0)
	    goto end;
	    else
	    if(i==n)
	    printf("%d is a prime number \n",n);
	    end :
	    break;
	  case 3:
	  printf("Enter the number \n");
	  scanf("%d", &n);
	  if(n%2==0)
	    printf("%d is a even number \n", n);
	  else
	    printf("%d is an odd number \n", n);
	  break;
	  case 4:
	  exit(0);
	  default :
	  printf("You have choosen the wrong option \n");
	}
   }
   getch();
   return 0;
}


