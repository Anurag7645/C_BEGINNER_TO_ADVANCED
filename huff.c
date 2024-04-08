#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    unsigned freq;
    struct Node *left, *right;
};

struct Node* newNode(char data, unsigned freq) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

void printCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!(root->left) && !(root->right)) {
        printf("%c: ", root->data);
        for (int i = 0; i < top; ++i)
            printf("%d", arr[i]);
        printf("\n");
    }
}

void printTree(struct Node* root) {
    if (root) {
        printf("%c (%u)\n", root->data, root->freq);
        printTree(root->left);
        printTree(root->right);
    }
}

void HuffmanCodes(char data[], int freq[], int size) {
    struct Node *nodes[size];
    for (int i = 0; i < size; i++) {
        nodes[i] = newNode(data[i], freq[i]);
    }
    while (size > 1) {
        int min1 = 0, min2 = 1;
        if (nodes[min1]->freq > nodes[min2]->freq) {
            int temp = min1;
            min1 = min2;
            min2 = temp;
        }
        for (int i = 2; i < size; i++) {
            if (nodes[i]->freq < nodes[min1]->freq) {
                min2 = min1;
                min1 = i;
            } else if (nodes[i]->freq < nodes[min2]->freq) {
                min2 = i;
            }
        }
        struct Node* combined = newNode('$, nodes[min1]->freq + nodes[min2]->freq);
        combined->left = nodes[min1];
        combined->right = nodes[min2];
        nodes[min1] = combined;
        nodes[min2] = nodes[size - 1];
        size--;
    }
    printf("Huffman Tree:\n");
    printTree(nodes[0]);
    int arr[100], top_val = 0;
    printCodes(nodes[0], arr, top_val);
}

int main() {
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Huffman Codes:\n");
    HuffmanCodes(data, freq, size);
    return 0;
}
