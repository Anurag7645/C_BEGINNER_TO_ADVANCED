#include<stdio.h>
int main()
{
    int arr1[4][4],arr2[4][4],sumarr3[4][4];
    for(int i=0;i<=3;++i)
    {
        for(int j=0;j<=3;j++)
        {
            arr1[i][j]=100;
            arr2[i][j]=100;
            sumarr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d",sumarr3[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}