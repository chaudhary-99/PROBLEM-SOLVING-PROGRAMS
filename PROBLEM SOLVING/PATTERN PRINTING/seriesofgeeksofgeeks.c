#include<stdio.h>
int Print(int n){
	if(n==0||n<0){
		printf("%d\n",n);
		return 0;
	}
	else{
	
		printf("%d\n",n);
	    Print(n-5);
	    printf("%d\n",n);
	}
}
int main(){
	int n=16;
	Print(n);
	
	return 0;
}