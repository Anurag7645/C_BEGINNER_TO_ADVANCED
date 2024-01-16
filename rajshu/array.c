#include <stdio.h>

void insert( int a[] , int pos , int &length , int element ){
    for( int i = length - 1 ; i >= pos ; i--  )a[ i + 1 ] = a[ i ];
    a[pos] = element;
    length++;
}

int main(){
    int a[10] = {3,2,1,0};
    int pos = 2;
    int length = 4;
    int element = 4 ;
    insert(a,pos , length , element);
    printf("The array after insertion is : \n");
    for( int i = 0 ; i < length ; i++  ){
        printf("%d  " , a[i]);
    }
    printf( "\n%d",length );
    
    return 0;
}