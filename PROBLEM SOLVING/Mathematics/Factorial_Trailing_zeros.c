#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    while(num/5!=0){
        num=num/5;
        count=count+num;
    }
    printf("Total Number Of Trailing Zero %d",count);
    return 0;
}