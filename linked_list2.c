#include <stdio.h>
#include <stdlib.h>

 struct Node{
    int data;
    struct Node* next;
 };

 struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Memory allocation failed!\n");
        exit(1);

    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
  } 
  void insertAtBeginning(struct Node** head, int data){
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
  }
  void printList(struct Node* head) {  