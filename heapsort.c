#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int length(int A[]) {
    int n = 0;
    while (A[n] != '\0') {
        n++;
    }
    return n;
}

void Heapify(int A[], int n, int i) {
    int max = i;
    int leftchild = (2 * i) + 1;
    int rightchild = (2 * i) + 2;

    if (leftchild <= n && A[i] < A[leftchild]) {
        max = leftchild;
    } else {
        max = i;
    }

    if (rightchild <= n && A[max] > A[rightchild]) {
        max = rightchild;
    }

    if (max != i) {
        swap(A[i], A[max]);
        Heapify(A, n, max);
    }
}

void Heapsort(int A[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        Heapify(A, n, i);
    }

    for (int i = n; i >= 2; i--) {
        swap(A[1], A[i]);
        Heapify(A, i - 1, 1);
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