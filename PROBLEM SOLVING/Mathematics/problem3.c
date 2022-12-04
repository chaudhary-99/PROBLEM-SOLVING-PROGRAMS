#include<stdio.h>
int sum_digit(int n){
    while(n>0){
        int sum=0;
        if(n/10==0){
           
            return n;
        }
        else{
           while(n>0){
              sum=sum+n%10;
              n=n/10;
           }
           sum_digit(sum);
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",sum_digit(num));
    return 0;
}