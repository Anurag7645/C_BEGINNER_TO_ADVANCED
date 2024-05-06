#include<stdio.h>
#include<limits.h>
#define N 20
#define INF INT_MAX

int matrixChainOrder(int p[], int n, int m[][N], int s[][N]) {
    int i, j, k, L, q;
    int total_multiplications = 0; 

    for (i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for (L = 2; L <= n; L++) {
        for (i = 1; i <= n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INF;
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                total_multiplications += p[i - 1] * p[k] * p[j]; 
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("\nSplit matrix s:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i > j)
                printf("_\t");
            else if (i == j)
                printf("0\t");
            else
                printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    printf("\nMinimum cost matrix m:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i > j)
                printf("_\t");
            else if (i == j)
                printf("0\t");
            else
                printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return total_multiplications; 
}

void printOptimalOrder(int i, int j, int s[][N], int n) {
    if (i == j) {
        printf("%c", 'A' + i - 1);
    } else {
        printf("(");
        printOptimalOrder(i, s[i][j], s, n);
        printf("*");
        printOptimalOrder(s[i][j] + 1, j, s, n);
        printf(")");
    }
}

int main() {
    int n;
    printf("Enter the number of matrices to be multiplied:");
    scanf("%d", &n);
    printf("The size of the Dimension Matrix is: %d\n", n);
    int p[n + 1];
    printf("Enter the dimensions of the Matrices:\n");
    for (int i = 0; i <= n; i++) {
        printf("p%d=", i);
        scanf("%d", &p[i]);
    }
    int m[N][N], s[N][N];
    int total_multiplications = matrixChainOrder(p, n, m, s);
    printf("Optimal order of execution:\n");
    printOptimalOrder(1, n, s, n);
    printf("\nTotal number of multiplications: %d\n", total_multiplications);

    return 0;
}