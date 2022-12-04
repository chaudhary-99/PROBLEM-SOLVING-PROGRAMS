#include<stdio.h>
int main(){
    char arr[8]={'a','b','c','d','e','f','g','h'};
    char *ptr;
    ptr=arr;
    for(int i=0;i<8;i++){
        printf("%c ",arr[i]); 
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%c ",*(ptr+i)); 
    }
    printf("\n");
    //Sting name is same as pointer.So, we can use array name as a pointer.
    for(int i=0;i<8;i++){
        printf("%c ",*(arr+i)); 
    }
    return 0;
}