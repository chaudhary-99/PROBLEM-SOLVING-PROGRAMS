#include<stdio.h>
long long  power(int b,int p){
    int t=1;
    while(p>0){
        t=t*b;
        p--;
    }
    printf("%lld\n",t);
    return t;
}

int kth_digit(int n,int k){
    int r;
    while(k--){
        r=n%10;
        n=n/10; 
    }
    printf("%d\n",r);
    return r;
    
}
int main(){
    int a,b,k;
    scanf("%d%d%d",&a,&b,&k);
    long long t=power(a,b);
    printf("%lld\n",t);
    
    printf("%d\n",kth_digit(t,k));
    return 0;
}