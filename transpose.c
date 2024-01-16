#include <stdio.h>
int main()
{
    int i,j,k,l;
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
    printf("The transposed version of the above array is:");
    for (k=0;k<=3;k++)
    {
        for(l=0;l<=3;l++)
        {
            if(i==j&&j==i)
          {
            int d;
            i=d;
            j=i;
            i=j;
            printf("%d",marksem[i][j]);
          }
          else
          {
             printf("%d",marksem[i][j]);
          }
        }
        printf("\n");
    }
}