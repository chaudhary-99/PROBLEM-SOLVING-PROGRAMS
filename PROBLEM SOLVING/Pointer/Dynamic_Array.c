#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("DYNAMIC MEMORY ALLOCATION\n");
    printf("%d ",sizeof(int));
    int n;
    scanf("%d",&n);
    int *p;
    p=(int*) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }   
    printf("\n");
    return 0;
}
