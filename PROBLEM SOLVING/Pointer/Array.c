#include<stdio.h>
#include<stdlib.h>
// who can accept address as its value is pointer.
void Traverse(int *ptr,int n){
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i)); 
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]); 
    }
    printf("1\n");
    Traverse(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",*(ptr+i)); 
    }

    printf("2 \n");
    //array name is same as pointer.So, we can use array name as a pointer.
    for(int i=0;i<10;i++){
        printf("%d ",*(arr+i)); 
    }
    return 0;
}

 