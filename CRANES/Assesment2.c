#include <stdio.h>

int main()
{
    int exter,inter;
    
    printf("Enter the Internal Marks of the student:\n");
    scanf("%d",&inter);
    printf("Enter the External Marks of the student:\n");
    scanf("%d",&exter);
    
    int sum = inter+exter;
    if(exter>=30 && sum>=50)
    {
        printf("Pass!!");
    }
    else
    {
        printf("Fail!!");
    }

}