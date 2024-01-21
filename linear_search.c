#include<stdio.h>
int main()
{
    int key,flag=0;
    int arr[5];
    printf("Enter the elments of the array:\n");

    for(int a=0;a<5;a++)
    {
    scanf("%d",&arr[a]);
    }
    
    printf("Enter the element to be searched\n");
    scanf("%d",&key);

    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            printf("Element found at %d index.",i);
        }
    }
        if(flag==0)
        {
            printf("Element not found!");
        }
}