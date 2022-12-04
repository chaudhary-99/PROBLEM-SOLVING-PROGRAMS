#include<stdio.h>
int main(){
	int a[5][5]={0};
    a[0][2]=1;
    int r=0,c=2,tr=r,n=1,tc=c;
	while(n!=25){
	    tr--;
	    if(tr<0){
	   	    tr=4;
	   	tc++;
	   	if(tc>4)
	   	    tc=0;
	   	n=n+1;
	   	if(a[tr][tc]==0){
	   		a[tr][tc]=n;
	   		r=tr;
	   		c=tc;
		}
		else{
			r=r+1;
			a[r][c]=n;
			tr=r;
			tc=c;
		}
	
	}
    }
    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++){
    		printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}