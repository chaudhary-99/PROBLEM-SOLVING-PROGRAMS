#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	
	gets(name);
	int i=0;
	while(name[i]!='\0'){
		i++;
	}
	i=i-1;
	int j=0;
	int flag=0;
	while(j<i){
		if(name[j]==name[i]){
			j++;
			i--;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("PAlindrome\n");
	}
	else{
		printf("Not a PAlindrome\n");
	}
	puts(name);
	return 0;
}