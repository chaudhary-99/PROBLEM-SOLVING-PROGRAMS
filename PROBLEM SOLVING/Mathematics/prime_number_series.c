#include<stdio.h>
#include<math.h>
int prime_number(int num,int dat[30]){
	int x=sqrt(30);
	for(int i=2;i<=x;i++){
		for(int j=i+1;j<=30;j++){
			if(j%i==0){
				dat[j]=1;
			}
		}
	}
}
int main(){
	int num=30;
	int dat[30]={0};
    prime_number(num,dat);
    for(int i=2;i<=num;i++){
    	if(dat[i]==0){
    		printf("%d\n",i);
		}
	}
	return 0;
}