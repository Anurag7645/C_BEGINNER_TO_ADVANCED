#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,c,arm;
    clrscr();
    printf("Enter the number \n");
    scanf("%d", n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    arm=((a*a*a)+(b*b*b)+(c*c*c));
    printf("%d %d %d \n", a, b, c);
    if (arm==n)
	printf("Its an Armstrong number %d \n", n);
    else
	printf("Its not an Armstrong number");
    getch();
    return 0;
}