#include <stdio.h> /* Include standard input/output library */
#include <stdlib.h> /* Include standard library for memory allocation */

struct node /* Define a structure for a node in the binary tree */
{
    int data; /* Data stored in the node */
    struct node* left_child; /* Pointer to the left child node */
    struct node* right_child; /* Pointer to the right child node */
};

struct node* create_node(int x) /* Function to create a new node with given data */
{
    struct node *temp = (struct node*)malloc(sizeof(struct node)); /* Allocate memory for the new node */
    temp->data = x; /* Set the data of the new node */
    temp->left_child = NULL; /* Set the left child pointer to NULL */
    temp->right_child = NULL; /* Set the right child pointer to NULL */
    return temp; /* Return the new node */
}

struct node* Search(struct node* root, int x) /* Function to search for a node with given data in the binary tree */
{
    if (root == NULL || root->data == x) /* If the root is NULL or the data is found, return the root */
        return root;
    else if(x > root->data) /* If the data is greater than the root data, search in the right subtree */
        return Search(root->right_child, x);
    else /* If the data is less than the root data, search in the left subtree */
        return Search(root->left_child, x);
}

struct node* insert(struct node* node, int data) /* Function to insert a new node with given data in the binary tree */
{
    if (node == NULL){ /* If the tree is empty, create a new node */
        node = create_node(data);}
    else if (data < node->data){ /* If the data is less than the current node data, insert in the left subtree */
        node->left_child = insert(node->left_child, data);
        printf("In function:%d \n ",node->data);}
    else if (data > node->data){ /* If the data is greater than the current node data, insert in the right subtree */
        node->right_child = insert(node->right_child, data);
        printf("In function:%d \n ",node->data);}
    else{ /* If the data is already present, print a message */
        printf("Data %d is already present in Binary Tree\n", data);}
    return node; /* Return the updated tree */
}

struct node* inorder(struct node* root) /* Function to print the binary tree in inorder traversal */
{
    if (root != NULL) /* If the root is not NULL, traverse the tree */
    {
        inorder(root->left_child); /* Print the left subtree */
        printf("%d ", root->data); /* Print the data of the current node */
        inorder(root->right_child); /* Print the right subtree */
    }
    return root; /* Return the root of the tree */
}

int main()
{
    struct node* root = NULL; /* Initialize the root of the binary tree to NULL */
    root = insert(root, 5); /* Insert the first node with data 5 */
    printf("Root data into the main funtion:%d\n",root->data);
    insert(root, 3); /* Insert a new node with data 3 */
    printf("Root data after second insertion of data:%d\n",root->data);
    insert(root, 7); /* Insert a new node with data 7 */
    printf("Root data after insertion of third data:%d\n",root->data);
    insert(root, 8);/* Insert a new node with data 8 */
    printf("Root data after insertion of fourth data:%d\n",root->data);
    insert(root, 2);/* Insert a new node with data 2 */
    printf("Root data after insertion of fifth data:%d\n",root->data);
    printf("Current State of tree using Inorder traversal\n",inorder(root));/* Traverse and print the binary tree in inorder fashion */
    printf("Entering the serching function to search for 8 in the tree :\n");
    struct node* result = Search(root, 8); /* Search for a node with data 8 */
    if(result != NULL) /* If the node is found, print the data */
        printf("Found %d\n", result->data);
    else /* If the node is not found, print a message */
        printf("Not Found\n");
    return 0; /* Return from the main function */
}