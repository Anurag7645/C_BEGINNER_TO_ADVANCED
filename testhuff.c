#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data;
    int freq;
    struct node* left_child;
    struct node* right_child;
};

// Function to create a new node
struct node* create_node(char data, int freq) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->freq = freq;
    temp->left_child = NULL;
    temp->right_child = NULL;
    return temp;
}

// Function to calculate frequency of characters in input string
void frequency_calc(char* input, int* freq) {
    for (int i = 0; input[i] != '\0'; i++) {
        freq[input[i]]++;
    }
}

// Function to build Huffman tree
void build_tree(struct node** root, int* freq) {
    struct node* nodes[256] = {NULL};

    // Create leaf nodes for each character with non-zero frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            nodes[i] = create_node((char)i, freq[i]);
        }
    }

    // Build Huffman tree
    while (1) {
        int min1 = -1, min2 = -1;
        for (int i = 0; i < 256; i++) {
            if (nodes[i] != NULL) {
                if (min1 == -1 || nodes[i]->freq < nodes[min1]->freq) {
                    min2 = min1;
                    min1 = i;
                } else if (min2 == -1 || nodes[i]->freq < nodes[min2]->freq) {
                    min2 = i;
                }
            }
        }

        if (min2 == -1) {
            *root = nodes[min1];
            break;
        }

        struct node* new_node = create_node('\0', nodes[min1]->freq + nodes[min2]->freq);
        new_node->left_child = nodes[min1];
        new_node->right_child = nodes[min2];
        nodes[min1] = new_node;
        nodes[min2] = NULL;
    }
}

// Function to encode input string using Huffman tree
void encode(struct node* root, char* input, int* output, int* len) {
    struct node* temp;
    for (int i = 0; input[i] != '\0'; i++) {
        temp = root;
        while (temp->left_child != NULL && temp->right_child != NULL) {
            if (input[i] == temp->left_child->data) {
                output[(*len)++] = 0;
                printf("0");
                temp = temp->left_child;
            } else if (input[i] == temp->right_child->data) {
                output[(*len)++] = 1;
                printf("1");
                temp = temp->right_child;
            }
        }
    }
}

// Function to decode encoded data
void decode(struct node* root, int* output, int len) {
    struct node* temp = root;
    for (int i = 0; i < len; i++) {
        if (output[i] == 0) {
            temp = temp->left_child;
        } else if (output[i] == 1) {
            temp = temp->right_child;
        }
        if (temp->left_child == NULL && temp->right_child == NULL) {
            printf("%c", temp->data);
            temp = root;
        }
    }
}

int main() {
    char input[] = "this is an example of huffman coding";
    int freq[256] = {0};
    int output[1000] = {0};
    int len = 0;

    frequency_calc(input, freq);

    int size = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            size++;
        }
    }

    if (size == 0) {
        printf("No data to encode\n");
        return 1;
    }

    struct node* root = NULL;
    build_tree(&root, freq);

    encode(root, input, output, &len);

    printf("Encoded data: ");
    for (int i = 0; i < len; i++) {
        printf("%d", output[i]);
    }
    printf("\n");

    printf("Decoded data: ");
    decode(root, output, len);
    printf("\n");

    return 0;
}
