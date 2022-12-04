#include<stdio.h>
int div(int d,int num){
    if(num%d==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int flag=1;
    int n;
    scanf("%d",&n);
    int num=n;
    int ans;
    int range_strt;
    int range_end;
    scanf("%d",&range_strt);
    scanf("%d",&range_end);
    func_check_self_divising
    while(n>0){
        int d=n%10;
        if(d!=0){
            ans=div(d,num);
        }
        n=n/10;
        if(ans==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("It is not self diving number\n");
    }
    else{
        printf("its a self diving number\n");
    }
    
}
