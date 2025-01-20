#include <stdio.h>

void printarray(int arr[])
{
  for(int i=0;i<5;i++)
  {
    printf("%d",arr[i]);
  }
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    printarray(arr);
    return 0;
}