#include<stdio.h>
int main()
{
    int key,flag=0;
    int arr[5];
    printf("Enter the elments of the array:");

    for(int a=0;a<5;a++)
    {
    scanf("%d",&arr);
    }
    
    printf("Enter the element to be searched");
    scanf("%d",&key);

    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            printf("Element found at %d index.",i);
            break;
        }
    }
        if(flag==0)
        {
            printf("Element not found!");
        }
}