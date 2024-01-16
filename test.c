// write a program in c to check even odd in an array?  
//
int a;
printf("Enter a number-->\n");
scanf("%d",&a);
int b[a];


printf("\nThe Even numbers are -->\n");
for(int i = 0; i<a;i++){
     if(b[i] %2 == 0)
         printf("%d ",b[i]);
}
printf("\nThe Odd numbers are -->\n");
for(int i = 0; i<a;i++){
     if(b[i] %2 != 0)
         printf("%d ",b[i]);
}


#include <stdio.h>
int main()
{
    int a, i;
    //The Max. range to print the odd and even numbers
    printf("Enter a number-->\n"); 
    scanf("%d", &a);
    int b[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nThe Even numbers are -->\n");
    for(int i = 0; i<a;i++){
        if(b[i] %2 == 0)
            printf("%d ",b[i]);
    }
    printf("\nThe Odd numbers are -->\n");
    for(int i = 0; i<a;i++){
        if(b[i] %2 != 0)
            printf("%d ",b[i]);
    }
    return 0;
}




//Source: https://stackoverflow.com/questions/70200180


