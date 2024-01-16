#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a BST node
struct Node {
    char day[10];
    struct Node* left;
    struct Node* right;
};

// Function to create a new BST node
struct Node* createNode(char day[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->day, day);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insertNode(struct Node* root, char day[]) {
    if (root == NULL) {
        return createNode(day);
    }

    // Compare the day to determine whether to go left or right
    int compare = strcmp(day, root->day);

    if (compare < 0) {
        root->left = insertNode(root->left, day);
    } else if (compare > 0) {
        root->right = insertNode(root->right, day);
    }

    return root;
}

// Function to perform an inorder traversal of the BST
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%s\n", root->day);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert days of the week in alphabetical order
    root = insertNode(root, "Sunday");
    root = insertNode(root, "Monday");
    root = insertNode(root, "Tuesday");
    root = insertNode(root, "Wednesday");
    root = insertNode(root, "Thursday");
    root = insertNode(root, "Friday");
    root = insertNode(root, "Saturday");

    printf("Days of the week in alphabetical order:\n");
    inorderTraversal(root);

    return 0;
}
