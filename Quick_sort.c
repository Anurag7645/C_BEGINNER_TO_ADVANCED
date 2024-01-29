#include <stdio.h>

    int QUICKSORT(int A[5],int start,int end)
    {
        if (start<end)
        {
            int p= PARTITION(int A[5],int start,int end)
            QUICKSORT(int A[5],int start,int p-1)
            QUICKSORT(int A[5],int p+1,int end)
        }
    } 

   int PARTITION(int A[5],int start,int end)
    {
        int pivot=A[end];
        int i=start-1;
        int j;
        for (j=start;j<=end-1;j++)
        {
            while(A[j]<pivot)
            {
                i=i+1;
                int temp=0;
                 A[i]=temp;
                 A[j]=A[i];
                 A[j]=temp;

            }  
        }

         A[i+1]=A[end];
          int temp=0;
                 A[i+1]=temp;
                 A[j]=A[i+1];
                 temp=A[j];

         return i+1
    }
    int main()
    {
        int A[5]={1,6,4,7,8},start=0,end=5;
        
    }
    
