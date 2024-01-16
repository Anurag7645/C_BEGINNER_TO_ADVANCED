#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void cqinsert();
void cqdelete();
void display();
int queue[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("1 for insert, 2 for delete, 3 for display 4, for quit");
		printf("\n enter ur choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				cqinsert();
				break;
			case 2:
				cqdelete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice");
		}
		
	}
	return 1;
}

void cqinsert()
{
	int ele;
	if(rear==MAX-1)
	{
		printf("Queue overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			printf("Insert the element");
			scanf("%d",&ele);
			rear=rear+1;
			queue[rear]=ele;
		}
	}
}
void cqdelete()
{
	if(front==-1 ||front>rear)
	{
		printf("queue underflow");
	}
	else
	{
		printf("Element deleted from queue is %d",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
	
		printf("Queue is empty");
	}
	else
	{
		printf("Queue is");
		for(i=front;i<=rear;i++)
		printf("%d",queue[i]);

	}
}