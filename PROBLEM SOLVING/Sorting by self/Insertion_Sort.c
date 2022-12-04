#include<stdio.h>
int main(){
    int a[6]={72,4,20,16,31,1};
    int j;
    for(int i=1;i<6;i++){
        j=i;
        int x=a[i];
        j=j-1;
        while(x<a[j]){
            a[j+1]=a[j];
            a[j]=x;
            j=j-1;
            for(int i=0;i<6;i++){
               printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}