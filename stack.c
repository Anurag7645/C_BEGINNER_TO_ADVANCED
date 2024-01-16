#include <stdio.h>
int max=10;

void push(int stack[],int *top,int ele)
{
    if(*top== max-1)
    {
        printf("Stack is full");
    }
    else  
    {
        (*top)++;
        stack[*top]=ele;
    }
}

int pop ( int stack[] ,  int* top,)
{
    if(*top== -1)
    {
       int ele=stack[*top];
        (*top)--;
    }
    else  
    {
        printf("Stack is empty");
    }
}   

int main() 
{
    int numElements;
    printf("Enter the no. of elements to push: ");
    scanf("%d", &numElements);
   
    printf("Enter %d elements:\n", numElements);
    for (int i = 0; i < numElements; ++i) 
    {
        int element;
        scanf("%d", &element);
        push(ele);
    }
}

    