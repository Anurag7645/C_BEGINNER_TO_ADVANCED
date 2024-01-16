#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }

    struct Node* newNode = createNode(data);
    if (position == 1) {
        insertAtBeginning(head, data);
    } else {
        struct Node* current = *head;
        int currentPosition = 1;

        while (currentPosition < position - 1 && current != NULL) {
            current = current->next;
            currentPosition++;
        }

        if (current == NULL) {
            printf("Position exceeds the length of the list.\n");
        } else {
            newNode->prev = current;
            newNode->next = current->next;
            if (current->next != NULL) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }
}
void displayList(struct Node* head) {
    printf("Doubly Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3); 
    insertAtBeginning(&head, 1);
    displayList(head);
    insertAtPosition(&head, 4, 2);
    insertAtPosition(&head, 2, 4);
    displayList(head);
    return 0;
}