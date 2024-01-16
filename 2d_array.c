#include <stdio.h>
int main()
{
    int i,j;
    int marksem[4][4];
    for(i=0;i<=3;i++)
    {
        for (j=0;j<=3;j++)
        {
              marksem[i][j]=0;
              printf("%d",marksem[i][j]);
        }
        printf("\n");
    }
}