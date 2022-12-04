#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	char name1[20];
	gets(name);
	gets(name1);
	int i=0,j=0;
	while(name[i]!='\0'){
		i++;
	}
	while(name1[j]!='\0'){
		name[i]=name1[j];
		i++;
		j++;
    }
	puts(name);
	return 0;
}