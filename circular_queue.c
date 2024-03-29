#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct
{
    int items[SIZE];
    int front;
    int rear;
} Queue;

Queue *createQueue()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

int isEmpty(Queue *q)
{
    return q->front == -1 && q->rear == -1;
}

int isFull(Queue *q)
{
    return (q->rear + 1) % SIZE == q->front;
}

void enqueue(Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % SIZE;
    }

    q->items[q->rear] = data;
}

int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }

    int data = q->items[q->front];

    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % SIZE;
    }

    return data;
}

void display(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    int i = q->front;
    while (i != q->rear)
    {
        printf("%d ", q->items[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", q->items[i]);
}

int main()
{
    Queue *q = createQueu();
    