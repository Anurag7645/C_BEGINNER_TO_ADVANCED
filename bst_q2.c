#include <stdio.h>
#include <stdlib.h>

// Structure for a BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new BST node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function for in-order traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function for preorder traversal
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function for postorder traversal
void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert numbers into the BST
    root = insertNode(root, 3);
    root = insertNode(root, 20);
    root = insertNode(root, 10);
    root = insertNode(root, 15);
    root = insertNode(root, 25);
    root = insertNode(root, 23);
    root = insertNode(root, 39);
    root = insertNode(root, 35);
    root = insertNode(root, 42);

    printf("In-order traversal sequence: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder traversal sequence: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder traversal sequence: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
