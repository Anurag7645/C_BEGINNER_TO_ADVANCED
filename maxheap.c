#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify(int A[], int n, int i) {
    int largest = i;
    int leftchild = 2 * i + 1;
    int rightchild = 2 * i + 2;

    if (leftchild < n && A[leftchild] > A[largest]) {
        largest = leftchild;
    }

    if (rightchild < n && A[rightchild] > A[largest]) {
        largest = rightchild;
    }

    if (largest != i) {
        swap(&A[i], &A[largest]);
        Heapify(A, n, largest);
    }
}

void BuildMaxHeap(int A[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(A, n, i);
    }
}

void Heapsort(int A[], int n) {
    BuildMaxHeap(A, n);
    for (int i = n - 1; i >= 0; i--) {
        swap(&A[0], &A[i]);
        Heapify(A, i, 0);
    }
}

int main() {
    int A[] = {12, 11, 13, 5, 6, 7};    
    int n = sizeof(A) / sizeof(A[0]);

    Heapsort(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
