#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	
	gets(name);
	int i=0;
	while(name[i]!='\0'){
		i++;
	}

	for(int j=0;j<i;j++){
		for(int k=i-1;k>=i-1-j;k--){
			printf("%c",name[k]);
		}
		printf("\n");
	}

	return 0;
}