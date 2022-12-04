#include<stdio.h>
#include<math.h>
int flag=0;
int Prime(int num){
	int x=sqrt(num);
	for(int j=2;j<=num;j++){
		int c=0;
		for(int i=2;i<=x;i++){
	    	if(j!=i&&(j%i)!=0){
	    		c++;
			}
	    }
	    if(c==(x-2+1)){
	    	printf("%d",j);-
		}
	}
}
int main(){
	int num;
	scanf("%d",&num);
	Prime(num);
	return 0;
}