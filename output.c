#include <stdio.h>
int main()
{
int i, n, fact = 1;
printf("ENTER A NO. : ");
scanf("%d ", &n);
for (i = 1; i <= n; i++)
{
fact *= i;
}
printf("Factorial of %d = %d\n", n, fact);
return 0;
}