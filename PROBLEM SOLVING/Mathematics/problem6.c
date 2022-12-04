#include<stdio.h>
int power(int b,int p){
    int t=1;
    while(p>0){
        t=t*b;
        p--;
    }
    return t;
}
int main(){
    int r;
    scanf("%d",&r);
    int t=power(r,2);
    printf("%d\n",2*t);
    return 0;
}