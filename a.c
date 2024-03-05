#include <stdio.h>

// Function to take input data for activities
void data(int mat[][3], int *n) {
    printf("Enter the number of Activities: ");
    scanf("%d", n);
    for (int i = 0; i < *n; ++i) {
        printf("Enter activity %d's start time: ", i + 1);
        scanf("%d", &mat[i][0]);
        printf("Enter activity %d's finish time: ", i + 1);
        scanf("%d", &mat[i][1]);
        mat[i][2] = i + 1; // To store activity number
    }
}

// Function to perform bubble sort on activities based on their finish times
void sort(int mat[][3], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mat[j][1] > mat[j + 1][1]) {
                // Swap activities
                int temp[3];
                for (int k = 0; k < 3; k++) {
                    temp[k] = mat[j][k];
                    mat[j][k] = mat[j + 1][k];
                    mat[j + 1][k] = temp[k];
                }
            }
        }
    }
}

// Function to perform activity selection
void activity(int mat[][3], int n) {
    printf("Selected activities:\n");

    // First activity is always selected
    printf("Activity %d (%d, %d)\n", mat[0][2], mat[0][0], mat[0][1]);

    // Consider rest of the activities
    int j = 0;
    for (int i = 1; i < n; i++) {
        // If this activity has start time greater than or equal to the finish time of the previously selected activity, then select it
        if (mat[i][0] >= mat[j][1]) {
            printf("Activity %d (%d, %d)\n", mat[i][2], mat[i][0], mat[i][1]);
            j = i;
        }
    }
}

int main() {
    int n;
    int mat[100][3]; // Assuming maximum 100 activities
    data(mat, &n);
    sort(mat, n);
    activity(mat, n);
    return 0;
}
