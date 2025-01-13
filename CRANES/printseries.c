#include <stdio.h>

void printseries(int n)
{
    for (int i=1;i<=n;i++)
    {
        printf("%d \t", i);
    }
}

int main()
{
    printseries(5);
    return 0;
}
