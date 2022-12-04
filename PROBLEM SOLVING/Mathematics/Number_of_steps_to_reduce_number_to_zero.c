#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    while(num!=0){
        if(num%2!=0){
          num=num-1;
          count++;
        }
        else{
            num=num/2;
            count++;
        }
    }
    printf("Number of step to reduce number to zero: %d\n",count);
    return 0;
}