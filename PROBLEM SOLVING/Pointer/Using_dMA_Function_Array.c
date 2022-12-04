#include<stdio.h>
#include<stdlib.h>
void traverse(int* p,int n){
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
}
void Printing(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%d",*(ptr+i));
    } 
}
int main(){
    printf("DYNAMIC MEMORY ALLOCATION\n");
    printf("%d ",sizeof(int));
    int n;
    scanf("%d",&n);
    int *p;
    p=(int*) malloc(n * sizeof(int));
    traverse(p,n);
    Printing(p,n);
    
    printf("\n");
    return 0;
}