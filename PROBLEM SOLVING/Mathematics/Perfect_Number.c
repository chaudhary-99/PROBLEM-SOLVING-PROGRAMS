#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int tum=num;
    int sum=0;
    while(num>0){
        int t;
        t=num%10;
        sum=sum+t*t;
        num=num/10;
    }
    if(sum==tum){
        printf("PERFECT NUMBER\n");
    }
    else{
        printf("Not a Perfect Number\n");
    }
    return 0;
}