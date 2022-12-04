#include<stdio.h>
#include<math.h>
int power(int b,int p){
    int t=1;
    while(p>0){
        t=t*b;
        p--;
    }
    return t;
}
/*777777777777777777777777*/
int sum_digits(int n){
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
}
/*bbbbbbbbbbbbbbbbbbbbb*/
int number_of_digit(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}
/*bbbbbbbbbbbbbbbbbbb*/
int main(){
    int num;
    scanf("%d",&num);
    int t=number_of_digit(num);
    if(t%2!=0){
        int m=(t/2)+1;
        int x=t/2;
        int p1=power(10,m);
        int p2=power(10,x);
        printf("%d %d\n",m,x);

        printf("%d %d\n",p1,p2);

        int num1=num/p1;
        int num2=num%p2;

        printf("%d %d\n",num1,num2);

        int l=sum_digits(num1);
        int r=sum_digits(num2);

        printf("%d %d\n",l,r);
        
        if(l==r){
            printf("Balanced\n");
        }
        else{
            printf("Unbalance\n");
        }
    }
    else{
        printf("Invalid Digit\n");
    }
    return 0;
}