#include<stdio.h>

int linear_search(int key, int arr[], int size);

int main()
{
    int key;
    int arr[5];

    printf("Enter the elements of the array:\n");
    for (int a = 0; a < 5; a++) {
        scanf("%d", &arr[a]);
    }

    printf("Enter the element to be searched:\n");
    scanf("%d", &key);

    int result = linear_search(key, arr, 5);
    if (result == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}

int linear_search(int key, int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
