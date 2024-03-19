#include <stdio.h>

int main() {
    int matno;
    printf("Enter the no of matrix to be multiplied: ");
    scanf("%d", &matno);
    int cost[matno][matno], k[matno][matno];

    int dimension[matno * 2], col[matno], row[matno];
    for (int i = 0; i < matno; ++i) {
        printf("\nEnter the rows of Matrix %d : ", i + 1);
        scanf("%d", &row[i]);
        printf("\nEnter the column of Matrix %d : ", i + 1);
        scanf("%d", &col[i]);
        dimension[i] = row[i];
        dimension[i + 1] = col[i];
    }

    for (int i = 0; i < matno; i++) {
        for (int j = 0; j < matno; j++) {
            if (i == j) {
                cost[i][j] = 0;
            }
            if (i < j) {
                int min = 0, parn = 0;
                for (int k = i; k < j; k++) {
                    int calc = cost[i][k] + cost[k + 1][j] + dimension[i] * dimension[k + 1] * dimension[j + 1];
                    if (k == i || calc < min) {
                        min = calc;
                        parn = k;
                    }
                }
                cost[i][j] = min;
                k[i][j] = parn;
            }
        }
    }
    for (int i = 0; i < matno; i++)
    {
        for(int j=0;j< matno;j++)
        {
          printf( "%d%d ",cost[i][j]);
        }
    }
    return 0;
   
}
