
#include<stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	  
	        if(i==0||i==n-1){
			    for(int y=0;y<n;y++){
			        printf("#");
                }
                printf("\n");
			}
			else{
			 	
			 		for(int r=0;r<n-1-i;r++){
			 			printf(" ");
					}
					for(int t=0;t<1;t++){
			 			printf("#");
                        printf("\n");
					}
					 
				}
			
	}
	return 0;
}