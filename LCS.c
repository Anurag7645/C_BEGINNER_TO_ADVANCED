#include <stdio.h>
#include <cstring>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    char str1[20]={"DAA"};
    char str2[20]={"DSA"};
    int row = strlen(str1)+1;
    int col = strlen(str2)+1;
    int dm[row][col];
    for (int i=0;i<row;i++)
    dm[i][0]=0;
    for (int j=0;j<col;j++)
    dm[0][j]=0;
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if (str1[i-1]==str2[j-1])
            {
                dm[i][j]=dm[i-1][j-1]+1;
            }
            else{
                dm[i][j]=max(dm[i-1][j],dm[i][j-1]);
            }
        }
    }
    printf("Length of LCS: %d\n", dm[row-1][col-1]);
    return 0;
}