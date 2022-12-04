#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	int dat[26]={0};
	gets(name);
	int i=0;
	while(name[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;i++){
		dat[name[j]-'a']++;
	}
    for(int k=0;k<26;k++){
    	if(dat[k]!=0){
    		printf("%d  ",dat[k]);
		}
	}

	return 0;
}