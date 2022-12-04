#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d",n-j);
		}
		for(int k=0;k<n-1-i;k++){
			printf("%d",n-i);
		}
		for(int y=0;y<n-1-i;y++){
			printf("%d",n-i);
		}
		int t=1;
		for(int w=0;w<i;w++){
			printf("%d",n-i+t+w);
		}
		printf("\n");
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<i+1;j++){
			if(i==n-2){
				printf("%d",n);
			}
			else if(j==0){
				printf("%d",n);
			}
			else if(j>0){
				printf("%d",n-1);
			}
		}
		for(int j=0;j<n-1-i;j++){
			if(i==0&&(j==n-3||j>n-3))
			{
				printf("2");
			}
			else if(i==0&&j<n-3){
			    printf("%d",n-1-j);	
			}
			else{
				printf("%d",2+i);
			}
		}
		for(int k=0;k<i+1;k++){
			printf("%d",2+i);
		}
		for(int y=0;y<n-2-i;y++){
			printf("%d",3+y+i);
		}
		printf("\n");
	}

	

	return 0;
}