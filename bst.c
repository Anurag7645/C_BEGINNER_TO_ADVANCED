#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left_child;
    struct node* right_child;
};

struct node* create_node(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL; 
    return temp;
};

struct node* Search(struct node* root, int x)
{
    if (root == NULL || root->data == x)
    {
        return root;
    }

    else if(x > root->data)
    {
        return Search(root->right_child, x);
    }

    else
    {
        return Search(root->left_child, x);
    }
}

struct node* insert(struct node* node, int data)
{
    if (node == NULL)
    {
        node = create_node(data);
    }

    else if (data < node->data)
    {
        node->left_child = insert(node->left_child, data);
    }

    else if (data > node->data)
    {
        node->right_child = insert(node->right_child, data);
    }

    else
    {
        printf("Data %d is already present in Binary Tree\n", data);
    }

    return node;
}

int main()
{
    struct node* root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    struct node* result = Search(root, 3);
    if(result != NULL)
        printf("Found %d\n", result->data);
    else
        printf("Not Found\n");
    return 0;
}