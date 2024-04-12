#include <cstdlib>
#include <stdio.h>
#include <string.h>
struct node {
    char data;
    int freq;
    struct node* left_child;
    struct node* right_child;
};

struct node* create_node(int x, int freq) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->freq = freq;
    temp->left_child = NULL;
    temp->right_child = NULL;
    return temp;
}

void frequency_calc(char* input, int* freq) {
    for (int i = 0; input[i]!= '\0'; i++) {
        freq[input[i]]++;
    }
}

void build_tree(struct node** root, int* freq, int size) {
    struct node* tree_node = NULL;
    while (size > 1) {
        int min1, min2;
        min1 = min2 = -1;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0 && (min1 == -1 || freq[i] < freq[min1])) {
                min2 = min1;
                min1 = i;
            } else if (freq[i] > 0 && (min2 == -1 || freq[i] < freq[min2])) {
                min2 = i;
            }
        }
        freq[min1] = freq[min1] + freq[min2];
        freq[min2] = 0;

        tree_node = create_node(min1, freq[min1]);
        tree_node->left_child = create_node(min2, freq[min2]);
        tree_node->right_child = *root;
        *root = tree_node;

        size--;
    }
}

void encode(struct node* root, char* input, int* output, int* len) {
    for (int i = 0; input[i]!= '\0'; i++) {
        struct node* temp = root;
        while (temp->left_child!= NULL) {
            if (temp->left_child->data == input[i]) {
                temp = temp->left_child;
                break;
            }
            if (temp->right_child->data == input[i]) {
                temp = temp->right_child;
                break;
            }
            if (temp->left_child->freq > temp->right_child->freq) {
                output[(*len)++] = 1;
                temp = temp->left_child;
            } else {
                output[(*len)++] = 0;
                temp = temp->right_child;
            }
        }
    }
}

void decode(struct node* root, int* output, int* len) {
    int i = 0;
    struct node* temp = root;
    while (i < *len) {
        if (temp == NULL) {
            printf("Invalid Huffman code\n");
            return;
        }
        if (temp->left_child == NULL && temp->right_child == NULL) {
            printf("%c", temp->data);
            temp = root;
            continue;
        }
        if (output[i++] == 0) {
            temp = temp->left_child;
        } else {
            temp = temp->right_child;
        }
    }
}

int main() {
    char input[] = "this is an example of huffman coding";
    if (strlen(input) > 100) {
        printf("Input string too long\n");
        return 1;
    }

    int freq[256] = {0};
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
    build_tree(&root, freq, size);

    int output[1000];
    int len = 0;
    encode(root, input, output, &len);

     printf("Encoded data: ");
    for (int i = 0; i < len; i++) {
        printf("%d", output[i]);
    }
    printf("\n");

    char decoded_input[100];
    decode(root, output, &len);
    for (int i = 0; i < strlen(input); i++) {
        decoded_input[i] = input[i];
    }
    decoded_input[len] = '\0';

    printf("Decoded data: %s\n", decoded_input);

    return 0;
}