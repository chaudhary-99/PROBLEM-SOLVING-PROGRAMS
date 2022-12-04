#include<stdio.h>
int main(){
    
    int a[100][101]={0};
    
    a[0][1]=1;
    for(int i=1;i<7;i++){
        for(int j=1;j<8;j++){
               a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    
    for(int y=0;y<7;y++){
    	for(int r=0;r<6-y;r++){
                   printf(" ");
        }
        for(int x=0;x<8;x++){
           if(a[y][x]!=0){
           	   printf("%d  ",a[y][x]);
		   }
		   
        }
        printf("\n");
    }
    
    return 0;
}