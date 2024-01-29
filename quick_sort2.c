#include <stdio.h>

int partition(int A[5], int start, int end) {
    int pivot = A[end];
    int i = start - 1;
    int j;
    for (j = start; j <= end - 1; j++) {
        if (A[j] < pivot) {
            i = i + 1;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[end];
    A[end] = temp;
    return i + 1;
}

void quicksort(int A[5], int start, int end) {
    if (start < end) {
        int p = partition(A, start, end);
        quicksort(A, start, p - 1);
        quicksort(A, p + 1, end);
    }
}

int main() {
    printf("Enter the 5 elements to be sorted:\n");
    int A[5] ;//= {3, 4, 1, 5, 2};
    for(int j=0;j<5;j++)
    {
        printf("Enter the %d element:",j);
        scanf("%d",&A[j]);
    }
    quicksort(A, 0, 4);
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}