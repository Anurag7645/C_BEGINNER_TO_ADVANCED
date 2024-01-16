#include<stdio.h>
int main()
{
    printf("Enter the no of elemenents in the array:");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: \n");
    for(int k=0;k<n;k++)
    {
        // printf("Entering the loop");
        scanf("%d",&arr[k]);
    }

    int start=0,end=6,mid,key,flag=0;
    printf("Enter the element to be searched :");
    scanf("%d",&key);

    while (start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]==key)
        {
            printf("Element found at %d index",mid);
            flag=1;
            break;
        }

        else if(key<arr[mid])
        {
            end=mid-1;
        }

        else if(key>arr[mid])
        {
            start=mid+1;
        }
    }

    if(flag==0)
    {
      printf("The search key is not present in the array");
    }
}