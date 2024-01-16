#include <stdio.h>
int main()
{
    int i,j;
    int marksem[4][4];
    for(i=0;i<=3;i++)
    {
        for (j=0;j<=3;j++)
        {
          if(i==1)
          {
              marksem[i][j]=1;
              printf("%d",marksem[i][j]);
          }
          else
          {
              marksem[i][j]=0;
              printf("%d",marksem[i][j]);
          }
        }
        printf("\n");
    }
}