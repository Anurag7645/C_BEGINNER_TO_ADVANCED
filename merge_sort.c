#include<stdio.h>

int merge(int Arr[],int start,int end,int mid)
{
    int n1=mid - start+1;
    int n2=end - start;

    int Left[n1];
    int Right[n2];

    for(int i=1;i<=n1;i++)
    {
        Left[i]=Arr[start+i-1];
    }

    for(int j=1;j<=n2;j++)
    {
        Right[j]=Arr[mid+j];
    }

    int i=1,j=1;

    for(int k=start;k<=end;k++)
    {
        if (Left[i]<=Right[j])
        {
            Arr[k]=Left[i];
            i=i=1;
        }
        else
        {
            Arr[k]=Right[j];
            j=j+1;
        }
    } 

    
}

void mergesort()
{

}

int main()
{
    int Arr[]
}